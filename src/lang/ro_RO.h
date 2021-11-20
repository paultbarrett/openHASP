#ifndef HASP_LANG_RO_RO_H
#define HASP_LANG_RO_RO_H

#define D_ISO_LANG_CODE "ro-RO"

#define D_USERNAME "Nume de utilizator:"
#define D_PASSWORD "Parola:"
#define D_SSID "SSID:"
#define D_YES "Da"
#define D_NO "Nu"

#define D_ERROR_OUT_OF_MEMORY "Memorie epuizată"
#define D_ERROR_UNKNOWN "Eroare necunoscută"

#define D_CONFIG_NOT_CHANGED "Setările nu s-au schimbat"
#define D_CONFIG_CHANGED "Setările s-au schimbat"
#define D_CONFIG_LOADED "Setările s-au încărcat"

#define D_FILE_LOADING "Se încarcă %s"
#define D_FILE_LOADED "S-a încărcat %s"
#define D_FILE_LOAD_FAILED "Încărcarea %s a eșuat"
#define D_FILE_SAVING "Se salvează %s"
#define D_FILE_SAVED "S-a salvat %s"
#define D_FILE_SAVE_FAILED "Salvarea %s a eșuat"
#define D_FILE_NOT_FOUND "File not found" // new
#define D_FILE_SIZE_BYTES "bytes"         // new
#define D_FILE_SIZE_KILOBYTES "KiB"       // new
#define D_FILE_SIZE_MEGABYTES "MiB"       // new
#define D_FILE_SIZE_GIGABYTES "GiB"       // new
#define D_FILE_SIZE_DIVIDER 1024          // new, kibi or kilo bytes
#define D_DECIMAL_POINT ","               // new, decimal comma or point

#define D_SETTING_ENABLED "Activ"
#define D_SETTING_DISABLED "Inactiv"

#define D_SERVICE_STARTING "Pornire..."
#define D_SERVICE_STARTED "Pornit"
#define D_SERVICE_START_FAILED "Pornirea a eșuat"
#define D_SERVICE_STOPPED "S-a oprit"
#define D_SERVICE_DISABLED "Dezactivat"
#define D_SERVICE_CONNECTED "Conectat"
#define D_SERVICE_DISCONNECTED "Deconectat"

#define D_NETWORK_IP_ADDRESS_RECEIVED "A primit adresa IP %s"
#define D_NETWORK_ONLINE "online"
#define D_NETWORK_OFFLINE "offline"
#define D_NETWORK_CONNECTION_FAILED "Conexiune eșuată"
#define D_NETWORK_CONNECTION_UNAUTHORIZED "Autorizatia a esuat"

#define D_MQTT_DEFAULT_NAME "plate_%s"
#define D_MQTT_CONNECTING "Conectare..."
#define D_MQTT_CONNECTED "Conectat la serverul %s ca %s"
#define D_MQTT_NOT_CONNECTED "Nu e conectat ???"
#define D_MQTT_DISCONNECTING "Deconectare..."
#define D_MQTT_DISCONNECTED "Deconectat"
#define D_MQTT_RECONNECTING "Deconectat de la server, reconectare..."
#define D_MQTT_NOT_CONFIGURED "Nu este configurat serverul MQTT"
#define D_MQTT_STARTED "Început: %d octeți"
#define D_MQTT_FAILED "A eșuat:"
#define D_MQTT_INVALID_TOPIC "Mesajul are subiect nevalid"
#define D_MQTT_SUBSCRIBED "Abonat la %s"
#define D_MQTT_NOT_SUBSCRIBED "Abonarea la %s a eșuat"
#define D_MQTT_HA_AUTO_DISCOVERY "Înregistrare la auto-descoperire în HA"
#define D_MQTT_PAYLOAD_TOO_LONG "Payload prea lung (%u baiți)"

#define D_TELNET_CLOSING_CONNECTION "Terminarea sesiunii de la %s"
#define D_TELNET_CLIENT_LOGIN_FROM "Conectare client de la %s"
#define D_TELNET_CLIENT_CONNECT_FROM "Client conectat de la %s"
#define D_TELNET_CLIENT_NOT_CONNECTED "Clientul NU este conectat"
#define D_TELNET_INCORRECT_LOGIN_ATTEMPT "Încercare incorectă de autentificare de la %s"
#define D_TELNET_STARTED "Consola Telnet pornită"
#define D_TELNET_FAILED "Nu s-a putut porni consola Telnet"
#define D_TELNET_CLIENT_CONNECTED "Client conectat"
#define D_TELNET_CLIENT_REJECTED "Client respins"

#define D_HASP_INVALID_PAGE "Pagina invalidă: %u"
#define D_HASP_INVALID_LAYER "Nu se poate șterge stratul de sistem"
#define D_HASP_CHANGE_PAGE "Schimbarea paginii: %u"
#define D_HASP_CLEAR_PAGE "Ștergerea paginii: %u"

#define D_OBJECT_DELETED "Obiect șters"
#define D_OBJECT_UNKNOWN "Obiect necunoscut"
#define D_OBJECT_MISMATCH "Obiectele NU se potrivesc!"
#define D_OBJECT_LOST "Obiect pierdut!"
#define D_OBJECT_CREATE_FAILED "Obiectul %u a eșuat"
#define D_OBJECT_PAGE_UNKNOWN "ID-ul paginii %u nu este definit"
#define D_OBJECT_EVENT_UNKNOWN "Eveniment necunoscut: %d"

#define D_ATTRIBUTE_UNKNOWN "Proprietate necunoscută: %s"
// D_ATTRIBUTE_OBSOLETE D_ATTRIBUTE_INSTEAD can be used together or just D_ATTRIBUTE_OBSOLETE alone
#define D_ATTRIBUTE_OBSOLETE "%s is obsolete"  // new
#define D_ATTRIBUTE_INSTEAD ", use %s instead" // new
#define D_ATTRIBUTE_READ_ONLY "%s este numai în citire"
#define D_ATTRIBUTE_PAGE_METHOD_INVALID "Nu se poate apela %s pe o pagină"
#define D_ATTRIBUTE_ALIGN_INVALID "Invalid align property: %s" // new
#define D_ATTRIBUTE_COLOR_INVALID "Invalid color property: %s" // new
#define D_ATTRIBUTE_LONG_MODE_INVALID "Invalid long mode: %s"  // new

#define D_OOBE_SSID_VALIDATED "SSID %s validat"
#define D_OOBE_AUTO_CALIBRATE "Calibrarea automată este activă"
#define D_OOBE_CALIBRATED "Deja calibrat"

#define D_DISPATCH_COMMAND_NOT_FOUND "Comanda %s nu a fost găsită"
#define D_DISPATCH_INVALID_PAGE "Pagina invalidă %s"
#define D_DISPATCH_REBOOT "MCU-ul repornește acum!"

#define D_JSON_FAILED "Analiza JSON a eșuat:"
#define D_JSONL_FAILED "Analiza JSONL a eșuat la linia %u"
#define D_JSONL_SUCCEEDED "Analiza JSONL completă"

#define D_OTA_CHECK_UPDATE "Verificare la URL-ul actualizărilor: %s"
#define D_OTA_CHECK_COMPLETE "Verificarea actualizării a fost finalizată"
#define D_OTA_CHECK_FAILED "Verificarea actualizării a eșuat: %s"
#define D_OTA_UPDATE_FIRMWARE "Actualizare firmware prin OTA"
#define D_OTA_UPDATE_COMPLETE "Actualizare prin OTA finalizată"
#define D_OTA_UPDATE_APPLY "Aplicarea firmware-ului și repornire"
#define D_OTA_UPDATE_FAILED "Actualizarea prin OTA a eșuat"
#define D_OTA_UPDATING_FIRMWARE "Actualizare firmware..."
#define D_OTA_UPDATING_FILESYSTEM "Actualizare sistem fișiere..."

#define D_HTTP_HASP_DESIGN "Desenul ecranului"
#define D_HTTP_INFORMATION "Informații"
#define D_HTTP_HTTP_SETTINGS "Setări HTTP"
#define D_HTTP_WIFI_SETTINGS "Setări WiFi"
#define D_HTTP_MQTT_SETTINGS "Setări MQTT"
#define D_HTTP_GPIO_SETTINGS "Setări GPIO"
#define D_HTTP_MDNS_SETTINGS "Setări mDNS"
#define D_HTTP_TELNET_SETTINGS "Setări Telnet"
#define D_HTTP_DEBUG_SETTINGS "Setări de depanare"
#define D_HTTP_GUI_SETTINGS "Setări ecran"
#define D_HTTP_SAVE_SETTINGS "Salvarea setărilor"
#define D_HTTP_UPLOAD_FILE "Încărcare fișier"
#define D_HTTP_ERASE_DEVICE "Resetarea tuturor setărilor"
#define D_HTTP_ADD_GPIO "Adăugare pin"
#define D_HTTP_BACK "Înapoi"
#define D_HTTP_REFRESH "Reîmprospătare"
#define D_HTTP_PREV_PAGE "Pagina anterioară"
#define D_HTTP_NEXT_PAGE "Pagina următoare"
#define D_HTTP_CALIBRATE "Calibrare"
#define D_HTTP_ANTIBURN "Run Anti Burn-in" // New
#define D_HTTP_SCREENSHOT "Captură de ecran"
#define D_HTTP_FILE_BROWSER "Browser de fișiere"
#define D_HTTP_FIRMWARE_UPGRADE "Actualizare firmware"
#define D_HTTP_UPDATE_FIRMWARE "Actualizarea firmware-ului"
#define D_HTTP_FACTORY_RESET "Resetare la parametri de fabrică"
#define D_HTTP_MAIN_MENU "Meniu principal"
#define D_HTTP_REBOOT "Repornire"
#define D_HTTP_CONFIGURATION "Setări"
#define D_HTTP_SENDING_PAGE "Pagina %S trimisă la %s"
#define D_HTTP_FOOTER "de Francis Van Roie"

#define D_INFO_VERSION "Versiune"
#define D_INFO_BUILD_DATETIME "Data Build-ului"
#define D_INFO_UPTIME "Uptime"
#define D_INFO_FREE_HEAP "Heap liber"
#define D_INFO_FREE_BLOCK "Bloc liber"
#define D_INFO_DEVICE_MEMORY "Memorie dispozitiv"
#define D_INFO_LVGL_MEMORY "Memorie LVGL"
#define D_INFO_TOTAL_MEMORY "Total"
#define D_INFO_FREE_MEMORY "Liber"
#define D_INFO_FRAGMENTATION "Fragmentație"
#define D_INFO_PSRAM_FREE "PSRam liber"
#define D_INFO_PSRAM_SIZE "PSRam mărime"
#define D_INFO_FLASH_SIZE "Flash mărime"
#define D_INFO_SKETCH_USED "Mărime program folosită"
#define D_INFO_SKETCH_FREE "Mărime program liberă"
#define D_INFO_MODULE "Modul"
#define D_INFO_MODEL "Model"
#define D_INFO_FREQUENCY "Frecvență"
#define D_INFO_CORE_VERSION "Versiune Core"
#define D_INFO_RESET_REASON "Motiv reset"
#define D_INFO_STATUS "Stare"
#define D_INFO_SERVER "Server"
#define D_INFO_USERNAME "Utilizatur"
#define D_INFO_CLIENTID "ID Client"
#define D_INFO_CONNECTED "Conectat"
#define D_INFO_DISCONNECTED "Deconectat"
#define D_INFO_RECEIVED "Primite"
#define D_INFO_PUBLISHED "Trimise"
#define D_INFO_FAILED "Eșuate"
#define D_INFO_ETHERNET "Ethernet"
#define D_INFO_WIFI "WiFi"
#define D_INFO_LINK_SPEED "Viteză Link"
#define D_INFO_FULL_DUPLEX "Full Duplex" // new
#define D_INFO_SSID "SSID"
#define D_INFO_RSSI "Putere semnal"
#define D_INFO_IP_ADDRESS "Addresa IP"
#define D_INFO_MAC_ADDRESS "Addresa MAC"
#define D_INFO_GATEWAY "Gateway"
#define D_INFO_DNS_SERVER "Server DNS"

#define D_OOBE_MSG "Atingeți ecranul pentru a configura WiFi sau conectați-vă la acest punct de acces:"
#define D_OOBE_SCAN_TO_CONNECT "Scanați pentru a vă conecta:"

#define D_WIFI_CONNECTING_TO "Conectare la %s"
#define D_WIFI_CONNECTED_TO "Conectat la %s, cerere IP..."
#define D_WIFI_RSSI_EXCELLENT "Excelentă"
#define D_WIFI_RSSI_GOOD "Bună"
#define D_WIFI_RSSI_FAIR "Acceptabilă"
#define D_WIFI_RSSI_WEAK "Slabă"
#define D_WIFI_RSSI_BAD "Foarte slabă"

// new
#define D_GPIO_SWITCH "Switch"
#define D_GPIO_BUTTON "Button"
#define D_GPIO_TOUCH "Capacitive Touch" // new
#define D_GPIO_LED "Led"
#define D_GPIO_LED_R "Mood Red"
#define D_GPIO_LED_G "Mood Green"
#define D_GPIO_LED_B "Mood Blue"
#define D_GPIO_POWER_RELAY "Power Relay" // new
#define D_GPIO_LIGHT_RELAY "Light Relay" // new
#define D_GPIO_PWM "PWM"
#define D_GPIO_DAC "DAC"
#define D_GPIO_SERIAL_DIMMER "Serial Dimmer"
#define D_GPIO_UNKNOWN "Unknown"
#define D_GPIO_PIN "Pin"
#define D_GPIO_GROUP "Group"
#define D_GPIO_GROUP_NONE "None"
#define D_GPIO_STATE_NORMAL "Normal"     // new
#define D_GPIO_STATE_INVERTED "Inverted" // new

#endif
