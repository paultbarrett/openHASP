#include "ArduinoJson.h"
#include "ArduinoLog.h"
#include "lvgl.h"
#include "StringStream.h"
#include "time.h"

#include "hasp_conf.h"

#if defined(ARDUINO_ARCH_ESP8266)
#include <sntp.h> // sntp_servermode_dhcp()
#include <ESP8266WiFi.h>
#else
#include <Wifi.h>
#endif
#include <WiFiUdp.h>

#include "hasp_hal.h"
#include "hasp_mqtt.h"
#include "hasp_debug.h"
#include "hasp_config.h"
#include "hasp_dispatch.h"

#ifdef USE_CONFIG_OVERRIDE
#include "user_config_override.h"
#endif

#if HASP_USE_TELNET != 0
#include "hasp_telnet.h"
//#include "hasp_telnet.cpp"
#endif

#if HASP_USE_SYSLOG != 0
#include "Syslog.h"

#ifndef SYSLOG_SERVER
#define SYSLOG_SERVER ""
#endif

#ifndef SYSLOG_PORT
#define SYSLOG_PORT 514
#endif

#ifndef APP_NAME
#define APP_NAME "HASP"
#endif

// variables for debug stream writer
// static String debugOutput((char *)0);
// static StringStream debugStream((String &)debugOutput);

extern char mqttNodeName[16];
const char * syslogAppName  = APP_NAME;
char debugSyslogHost[32]    = SYSLOG_SERVER;
uint16_t debugSyslogPort    = SYSLOG_PORT;
uint8_t debugSyslogFacility = 0;
uint8_t debugSyslogProtocol = 0;
bool debugAnsiCodes         = true;

// A UDP instance to let us send and receive packets over UDP
WiFiUDP syslogClient;

// Create a new syslog instance with LOG_KERN facility
// Syslog syslog(syslogClient, SYSLOG_SERVER, SYSLOG_PORT, MQTT_CLIENT, APP_NAME, LOG_KERN);
// Create a new empty syslog instance
Syslog * syslog;
#endif // USE_SYSLOG

// Serial Settings
uint16_t debugSerialBaud = 11520; // Multiplied by 10
bool debugSerialStarted  = false;

//#define TERM_COLOR_Black "\u001b[30m"
#define TERM_COLOR_GRAY "\e[37m"
#define TERM_COLOR_RED "\e[91m"
#define TERM_COLOR_GREEN "\e[92m"
#define TERM_COLOR_YELLOW "\e[93m"
#define TERM_COLOR_BLUE "\e[94m"
#define TERM_COLOR_MAGENTA "\e[35m"
#define TERM_COLOR_CYAN "\e[96m"
#define TERM_COLOR_WHITE "\e[97m"
#define TERM_COLOR_RESET "\e[0m"

unsigned long debugLastMillis = 0;
uint16_t debugTelePeriod      = 300;

String debugHaspHeader()
{
    String header((char *)0);
    header.reserve(256);
    header = F("           _____ _____ _____ _____\r\n"
               "          |  |  |  _  |   __|  _  |\r\n"
               "          |     |     |__   |   __|\r\n"
               "          |__|__|__|__|_____|__|\r\n"
               "        Home Automation Switch Plate\r\n");
    char buffer[128];
    snprintf(buffer, sizeof(buffer), PSTR("        Open Hardware edition v%u.%u.%u\r\n"), HASP_VERSION_MAJOR,
             HASP_VERSION_MINOR, HASP_VERSION_REVISION);
    header += buffer;
    return header;
}

void debugStart()
{
    if(debugSerialStarted) {
        Serial.flush();
        Serial.println();
        Serial.println(debugHaspHeader());
        Serial.flush();
    }

    // prepare syslog configuration here (can be anywhere before first call of
    // log/logf method)
}

// void serialPrintln(const char * debugText, uint8_t level)
//{
/*
String debugTimeText((char *)0);
debugTimeText.reserve(128);

uint8_t heapfrag = halGetHeapFragmentation();
debugTimeText    = F("[");
debugTimeText += String(float(millis()) / 1000, 3);
debugTimeText += F("s] ");
debugTimeText += halGetMaxFreeBlock();
debugTimeText += F("/");
debugTimeText += ESP.getFreeHeap();
debugTimeText += F(" ");
if(heapfrag < 10) debugTimeText += F(" ");
debugTimeText += heapfrag;
debugTimeText += F(" ");

#if LV_MEM_CUSTOM == 0
lv_mem_monitor_t mem_mon;
lv_mem_monitor(&mem_mon);
debugTimeText += F("| ");
debugTimeText += mem_mon.used_pct;
debugTimeText += F("% ");
debugTimeText += mem_mon.free_biggest_size;
debugTimeText += F("b/");
debugTimeText += mem_mon.free_size;
debugTimeText += F("b ");
debugTimeText += (mem_mon.total_size - mem_mon.free_size);
debugTimeText += F("b | ");
#endif

if(debugSerialStarted) {
    //    Serial.print(debugTimeText);
    //    Serial.println(debugText);
}/

switch(level) {
    case LOG_LEVEL_FATAL:
        Log.fatal(debugText);
        break;
    case LOG_LEVEL_ERROR:
        Log.error(debugText);
        break;
    case LOG_LEVEL_WARNING:
        Log.warning(debugText);
        break;
    case LOG_LEVEL_VERBOSE:
        Log.verbose(debugText);
        break;
    case LOG_LEVEL_TRACE:
        Log.trace(debugText);
        break;
    default:
        Log.notice(debugText);
}

#if HASP_USE_TELNET != 0
// telnetPrint(debugTimeText.c_str());
telnetPrintln(debugText);
#endif
}

void serialPrintln(String & debugText, uint8_t level)
{
serialPrintln(debugText.c_str(), level);
} */

#if HASP_USE_SYSLOG != 0
void syslogSend(uint8_t priority, const char * debugText)
{
    if(strlen(debugSyslogHost) != 0 && WiFi.isConnected()) {
        syslog->log(priority, debugText);
    }
}
#endif

void debugSetup(JsonObject settings)
{
    debugSetConfig(settings);

#if HASP_USE_SYSLOG != 0
    syslog = new Syslog(syslogClient, debugSyslogProtocol == 0 ? SYSLOG_PROTO_IETF : SYSLOG_PROTO_BSD);
    syslog->server(debugSyslogHost, debugSyslogPort);
    syslog->deviceHostname(mqttNodeName);
    syslog->appName(syslogAppName);
    uint16_t priority = (uint16_t)(debugSyslogFacility + 16) << 3; // localx facility, x = 0-7
    syslog->defaultPriority(priority);
#endif
}

void debugStop()
{
    if(debugSerialStarted) Serial.flush();
}

bool debugGetConfig(const JsonObject & settings)
{
    settings[FPSTR(F_CONFIG_BAUD)]      = debugSerialBaud;
    settings[FPSTR(F_DEBUG_TELEPERIOD)] = debugTelePeriod;

#if HASP_USE_SYSLOG != 0
    settings[FPSTR(F_CONFIG_HOST)]     = debugSyslogHost;
    settings[FPSTR(F_CONFIG_PORT)]     = debugSyslogPort;
    settings[FPSTR(F_CONFIG_PROTOCOL)] = debugSyslogProtocol;
    settings[FPSTR(F_CONFIG_LOG)]      = debugSyslogFacility;
#endif

    configOutput(settings);
    return true;
}

/** Set DEBUG Configuration.
 *
 * Read the settings from json and sets the application variables.
 *
 * @note: data pixel should be formated to uint32_t RGBA. Imagemagick requirements.
 *
 * @param[in] settings    JsonObject with the config settings.
 **/
bool debugSetConfig(const JsonObject & settings)
{
    configOutput(settings);
    bool changed = false;

    /* Serial Settings*/
    changed |= configSet(debugSerialBaud, settings[FPSTR(F_CONFIG_BAUD)], PSTR("debugSerialBaud"));

    /* Teleperiod Settings*/
    changed |= configSet(debugTelePeriod, settings[FPSTR(F_DEBUG_TELEPERIOD)], PSTR("debugTelePeriod"));

    /* Syslog Settings*/
#if HASP_USE_SYSLOG != 0
    if(!settings[FPSTR(F_CONFIG_HOST)].isNull()) {
        changed |= strcmp(debugSyslogHost, settings[FPSTR(F_CONFIG_HOST)]) != 0;
        strncpy(debugSyslogHost, settings[FPSTR(F_CONFIG_HOST)], sizeof(debugSyslogHost));
    }
    changed |= configSet(debugSyslogPort, settings[FPSTR(F_CONFIG_PORT)], PSTR("debugSyslogPort"));
    changed |= configSet(debugSyslogProtocol, settings[FPSTR(F_CONFIG_PROTOCOL)], PSTR("debugSyslogProtocol"));
    changed |= configSet(debugSyslogFacility, settings[FPSTR(F_CONFIG_LOG)], PSTR("debugSyslogFacility"));
#endif

    return changed;
}

static void printTimestamp(int level, Print * _logOutput, String & debugOutput)
{
    char buffer[128];

    /* Print Current Time */
    time_t rawtime;
    struct tm * timeinfo;
    // if(!time(nullptr)) return;
    time(&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(buffer, sizeof(buffer), ("[%b %d %H:%M:%S."), timeinfo);
    if(debugSerialStarted) {
        if(debugAnsiCodes) Serial.print(TERM_COLOR_CYAN);
        Serial.print(buffer);
    }
    if(debugAnsiCodes) telnetPrint(TERM_COLOR_CYAN);
    telnetPrint(buffer);

    /* Print Memory Info */
    snprintf(buffer, sizeof(buffer), PSTR("%8.3fs] %5u/%5u %2u | "), float(millis()) / 1000, halGetMaxFreeBlock(),
             ESP.getFreeHeap(), halGetHeapFragmentation());
    if(debugSerialStarted) {
        if(debugAnsiCodes) Serial.print(buffer);
    }
    telnetPrint(buffer);

#if LV_MEM_CUSTOM == 0
    /*    lv_mem_monitor_t mem_mon;
        lv_mem_monitor(&mem_mon);
        debugTimeText += F("| ");
        debugTimeText += mem_mon.used_pct;
        debugTimeText += F("% ");
        debugTimeText += mem_mon.free_biggest_size;
        debugTimeText += F("b/");
        debugTimeText += mem_mon.free_size;
        debugTimeText += F("b ");
        debugTimeText += (mem_mon.total_size - mem_mon.free_size);
        debugTimeText += F("b | ");*/
#endif

    switch(level) {
        case LOG_LEVEL_FATAL:
        case LOG_LEVEL_ERROR:
            strcpy(buffer, TERM_COLOR_RED);
            break;
        case LOG_LEVEL_WARNING:
            strcpy(buffer, TERM_COLOR_YELLOW);
            break;
        case LOG_LEVEL_NOTICE:
            strcpy(buffer, TERM_COLOR_WHITE);
            break;
        case LOG_LEVEL_VERBOSE:
            strcpy(buffer, TERM_COLOR_CYAN);
            break;
        case LOG_LEVEL_TRACE:
            strcpy(buffer, TERM_COLOR_GRAY);
            break;
        default:
            strcpy(buffer, TERM_COLOR_RESET);
    }

    if(debugSerialStarted) {
        if(debugAnsiCodes) Serial.print(buffer);
    }
    telnetPrint(buffer);
}

static void printNewline(int level, Print * _logOutput, String & debugOutput)
{
    if(debugSerialStarted) {
        Serial.print(debugOutput);
        if(debugAnsiCodes) Serial.print(TERM_COLOR_RESET);
        Serial.print("\r\n");
        if(debugAnsiCodes) Serial.print(TERM_COLOR_MAGENTA);
    }

    telnetPrint(debugOutput.c_str());
    if(debugAnsiCodes) telnetPrint(TERM_COLOR_RESET);
    telnetPrint("\r\n");
    if(debugAnsiCodes) telnetPrint(TERM_COLOR_MAGENTA);

    syslogSend(level, debugOutput.c_str());
}

void debugPreSetup(JsonObject settings)
{
    // Link stream to debugOutput
    // debugOutput.reserve(512);
    Log.begin(LOG_LEVEL_VERBOSE, &Serial, true);
    Log.setPrefix(printTimestamp); // Uncomment to get timestamps as prefix
    Log.setSuffix(printNewline);   // Uncomment to get newline as suffix

    uint16_t baudrate = settings[FPSTR(F_CONFIG_BAUD)].as<uint16_t>();
    if(baudrate > 0) {
        Serial.begin(baudrate * 10); /* prepare for possible serial debug */
        delay(10);
        debugSerialStarted = true;
    }

    // Serial.begin(74880); /* prepare for possible serial debug */
    // Serial.begin(115200);
}

void debugLoop()
{}

void printLocalTime()
{
    char buffer[128];
    time_t rawtime;
    struct tm * timeinfo;

    // if(!time(nullptr)) return;

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(buffer, sizeof(buffer), "%b %d %H:%M:%S.", timeinfo);
    Serial.println(buffer);
    // struct tm timeinfo;
    // time_t now = time(nullptr);

    // Serial-.print(ctime(&now));
    // Serial.print(&timeinfo, " %d %B %Y %H:%M:%S ");

#if LWIP_VERSION_MAJOR > 1

    // LwIP v2 is able to list more details about the currently configured SNTP servers
    for(int i = 0; i < SNTP_MAX_SERVERS; i++) {
        IPAddress sntp    = *sntp_getserver(i);
        const char * name = sntp_getservername(i);
        if(sntp.isSet()) {
            Serial.printf("sntp%d:     ", i);
            if(name) {
                Serial.printf("%s (%s) ", name, sntp.toString().c_str());
            } else {
                Serial.printf("%s ", sntp.toString().c_str());
            }
            Serial.printf("IPv6: %s Reachability: %o\n", sntp.isV6() ? "Yes" : "No", sntp_getreachability(i));
        }
    }
#endif
}

void debugEverySecond()
{
    if(debugTelePeriod > 0 && (millis() - debugLastMillis) >= debugTelePeriod * 1000) {
        dispatchStatusUpdate();
        debugLastMillis = millis();
    }
    // printLocalTime();
}
