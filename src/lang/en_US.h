#ifndef HASP_LANG_EN_US_H
#define HASP_LANG_EN_US_H

#define D_ISO_LANG_CODE "en-US"

#define D_USERNAME "Username:"
#define D_PASSWORD "Password:"
#define D_SSID "Ssid:"
#define D_YES "Yes" // New
#define D_NO "No"   // New

#define D_ERROR_OUT_OF_MEMORY "Out of memory"
#define D_ERROR_UNKNOWN "Unkown error"

#define D_CONFIG_NOT_CHANGED "Settings did not change"
#define D_CONFIG_CHANGED "Settings changed"
#define D_CONFIG_LOADED "Settings loaded"

#define D_FILE_LOADING "Loading %s"
#define D_FILE_LOADED "Loaded %s"
#define D_FILE_LOAD_FAILED "Failed to load %s"
#define D_FILE_SAVING "Saving %s"
#define D_FILE_SAVED "Saved %s"
#define D_FILE_SAVE_FAILED "Failed to save %s"
#define D_FILE_NOT_FOUND "File not found" // new
#define D_FILE_SIZE_BYTES "bytes"         // new
#define D_FILE_SIZE_KILOBYTES "KiB"       // new
#define D_FILE_SIZE_MEGABYTES "MiB"       // new
#define D_FILE_SIZE_GIGABYTES "GiB"       // new
#define D_FILE_SIZE_DIVIDER 1024          // new, kibi or kilo bytes
#define D_DECIMAL_POINT "."               // new, decimal comma or point

#define D_SERVICE_STARTING "Starting..."
#define D_SERVICE_STARTED "Started"
#define D_SERVICE_START_FAILED "Failed to start"
#define D_SERVICE_STOPPED "Stopped"
#define D_SERVICE_DISABLED "Disabled"
#define D_SERVICE_CONNECTED "Connected"
#define D_SERVICE_DISCONNECTED "Disconnected"

#define D_SETTING_ENABLED "Enabled"   // New
#define D_SETTING_DISABLED "Disabled" // New

#define D_NETWORK_IP_ADDRESS_RECEIVED "Received IP address %s"
#define D_NETWORK_ONLINE "online"
#define D_NETWORK_OFFLINE "offline"
#define D_NETWORK_CONNECTION_FAILED "Connection failed"
#define D_NETWORK_CONNECTION_UNAUTHORIZED "Authorization failed"

#define D_MQTT_DEFAULT_NAME "plate_%s"
#define D_MQTT_CONNECTING "Connecting..."
#define D_MQTT_CONNECTED "Connected to broker %s as clientID %s"
#define D_MQTT_NOT_CONNECTED "Not connected ???"
#define D_MQTT_DISCONNECTING "Disconnecting..."
#define D_MQTT_DISCONNECTED "Disconnected"
#define D_MQTT_RECONNECTING "Disconnected from broker, reconnection..."
#define D_MQTT_NOT_CONFIGURED "Broker not configured"
#define D_MQTT_STARTED "Started: %d bytes"
#define D_MQTT_FAILED "Failed:"
#define D_MQTT_INVALID_TOPIC "Message has invalid topic"
#define D_MQTT_SUBSCRIBED "Subscribed to %s"
#define D_MQTT_NOT_SUBSCRIBED "Failed to subscribe to %s"
#define D_MQTT_HA_AUTO_DISCOVERY "Register HA auto-discovery"
#define D_MQTT_PAYLOAD_TOO_LONG "Payload too long (%u bytes)"

#define D_TELNET_CLOSING_CONNECTION "Closing session from %s"
#define D_TELNET_CLIENT_LOGIN_FROM "Client login from %s"
#define D_TELNET_CLIENT_CONNECT_FROM "Client connected from %s"
#define D_TELNET_CLIENT_NOT_CONNECTED "Client NOT connected"
#define D_TELNET_INCORRECT_LOGIN_ATTEMPT "Incorrect login attempt from %s"
#define D_TELNET_STARTED "Telnet console started"
#define D_TELNET_FAILED "Failed to start telnet console"
#define D_TELNET_CLIENT_CONNECTED "Client connected"
#define D_TELNET_CLIENT_REJECTED "Client rejected"

#define D_HASP_INVALID_PAGE "Invalid page %u"
#define D_HASP_INVALID_LAYER "Cannot clear system layer"
#define D_HASP_CHANGE_PAGE "Changing page to %u"
#define D_HASP_CLEAR_PAGE "Clearing page %u"

#define D_OBJECT_DELETED "Object deleted"
#define D_OBJECT_UNKNOWN "Unknown object"
#define D_OBJECT_MISMATCH "Objects DO NOT match!"
#define D_OBJECT_LOST "Lost object!"
#define D_OBJECT_CREATE_FAILED "Failed to create object id %u"
#define D_OBJECT_PAGE_UNKNOWN "Page ID %u not defined"
#define D_OBJECT_EVENT_UNKNOWN "Unknown Event %d"

#define D_ATTRIBUTE_UNKNOWN "Unknown property %s"
// D_ATTRIBUTE_OBSOLETE D_ATTRIBUTE_INSTEAD can be used together or just D_ATTRIBUTE_OBSOLETE alone
#define D_ATTRIBUTE_OBSOLETE "%s is obsolete"
#define D_ATTRIBUTE_INSTEAD ", use %s instead"
#define D_ATTRIBUTE_READ_ONLY "%s is read-only"
#define D_ATTRIBUTE_PAGE_METHOD_INVALID "Unable to call %s on a page"
#define D_ATTRIBUTE_ALIGN_INVALID "Invalid align property: %s"
#define D_ATTRIBUTE_COLOR_INVALID "Invalid color property: %s"
#define D_ATTRIBUTE_LONG_MODE_INVALID "Invalid long mode: %s"

#define D_OOBE_SSID_VALIDATED "SSID %s validated"
#define D_OOBE_AUTO_CALIBRATE "Auto calibrate enabled"
#define D_OOBE_CALIBRATED "Already calibrated"

#define D_DISPATCH_COMMAND_NOT_FOUND "Command '%s' not found"
#define D_DISPATCH_INVALID_PAGE "Invalid page %s"
#define D_DISPATCH_REBOOT "Rebooting the MCU now!"

#define D_JSON_FAILED "JSON parsing failed:"
#define D_JSONL_FAILED "JSONL parsing failed at line %u"
#define D_JSONL_SUCCEEDED "Jsonl fully parsed"

#define D_OTA_CHECK_UPDATE "Checking updates URL: %s"
#define D_OTA_CHECK_COMPLETE "Update check complete"
#define D_OTA_CHECK_FAILED "Update check failed: %s"
#define D_OTA_UPDATE_FIRMWARE "OTA Firmware Update"
#define D_OTA_UPDATE_COMPLETE "OTA Update complete"
#define D_OTA_UPDATE_APPLY "Applying Firmware & Reboot"
#define D_OTA_UPDATE_FAILED "OTA Update failed"
#define D_OTA_UPDATING_FIRMWARE "Updating firmware..."
#define D_OTA_UPDATING_FILESYSTEM "Updating filesystem..."

#define D_HTTP_HASP_DESIGN "HASP Design"
#define D_HTTP_INFORMATION "Information"
#define D_HTTP_HTTP_SETTINGS "HTTP Settings"
#define D_HTTP_WIFI_SETTINGS "Wifi Settings"
#define D_HTTP_MQTT_SETTINGS "MQTT Settings"
#define D_HTTP_GPIO_SETTINGS "GPIO Settings"
#define D_HTTP_MDNS_SETTINGS "mDNS Settings"
#define D_HTTP_TELNET_SETTINGS "Telnet Settings"
#define D_HTTP_DEBUG_SETTINGS "Debug Settings"
#define D_HTTP_GUI_SETTINGS "Display Settings"
#define D_HTTP_SAVE_SETTINGS "Save Settings"
#define D_HTTP_UPLOAD_FILE "Upload File"
#define D_HTTP_ERASE_DEVICE "Reset All Settings"
#define D_HTTP_ADD_GPIO "Add New Pin"
#define D_HTTP_BACK "Back"
#define D_HTTP_REFRESH "Refresh"
#define D_HTTP_PREV_PAGE "Prev Page"
#define D_HTTP_NEXT_PAGE "Next Page"
#define D_HTTP_CALIBRATE "Calibrate"
#define D_HTTP_ANTIBURN "Run Anti Burn-in"
#define D_HTTP_SCREENSHOT "Screenshot"
#define D_HTTP_FILE_BROWSER "File Editor"
#define D_HTTP_FIRMWARE_UPGRADE "Firmware Upgrade"
#define D_HTTP_UPDATE_FIRMWARE "Update Firmware"
#define D_HTTP_FACTORY_RESET "Factory Reset"
#define D_HTTP_MAIN_MENU "Main Menu"
#define D_HTTP_REBOOT "Restart"
#define D_HTTP_CONFIGURATION "Configuration"
#define D_HTTP_SENDING_PAGE "Sent %S page to %s" // New
#define D_HTTP_FOOTER "by Francis Van Roie"

#define D_INFO_VERSION "Version"
#define D_INFO_BUILD_DATETIME "Build DateTime"
#define D_INFO_UPTIME "Uptime"
#define D_INFO_FREE_HEAP "Free Heap"
#define D_INFO_FREE_BLOCK "Free Block"
#define D_INFO_DEVICE_MEMORY "Device Memory"
#define D_INFO_LVGL_MEMORY "LVGL Memory"
#define D_INFO_TOTAL_MEMORY "Total"
#define D_INFO_FREE_MEMORY "Free"
#define D_INFO_FRAGMENTATION "Fragmentation"
#define D_INFO_PSRAM_FREE "PSRam Free"
#define D_INFO_PSRAM_SIZE "PSRam Size"
#define D_INFO_FLASH_SIZE "Flash Size"
#define D_INFO_SKETCH_USED "Program Size Used"
#define D_INFO_SKETCH_FREE "Program Size Free"
#define D_INFO_MODULE "Module"
#define D_INFO_MODEL "Model"
#define D_INFO_FREQUENCY "Frequency"
#define D_INFO_CORE_VERSION "Core Version"
#define D_INFO_RESET_REASON "Reset Reason"
#define D_INFO_STATUS "Status"
#define D_INFO_SERVER "Server"
#define D_INFO_USERNAME "Username"
#define D_INFO_CLIENTID "Client ID"
#define D_INFO_CONNECTED "Connected"
#define D_INFO_DISCONNECTED "Disconnected"
#define D_INFO_RECEIVED "Received"
#define D_INFO_PUBLISHED "Published"
#define D_INFO_FAILED "Failed"
#define D_INFO_ETHERNET "Ethernet"
#define D_INFO_WIFI "Wifi"
#define D_INFO_LINK_SPEED "Link Speed"
#define D_INFO_FULL_DUPLEX "Full Duplex"
#define D_INFO_SSID "SSID"
#define D_INFO_RSSI "Signal Strength"
#define D_INFO_IP_ADDRESS "IP Address"
#define D_INFO_MAC_ADDRESS "MAC Address"
#define D_INFO_GATEWAY "Gateway"
#define D_INFO_DNS_SERVER "DNS Server"

#define D_OOBE_MSG "Tap the screen to setup WiFi or connect to this Access Point:"
#define D_OOBE_SCAN_TO_CONNECT "Scan to connect"

#define D_WIFI_CONNECTING_TO "Connecting to %s"
#define D_WIFI_CONNECTED_TO "Connected to %s, requesting IP..."
#define D_WIFI_RSSI_EXCELLENT "Excellent"
#define D_WIFI_RSSI_GOOD "Good"
#define D_WIFI_RSSI_FAIR "Fair"
#define D_WIFI_RSSI_WEAK "Weak"
#define D_WIFI_RSSI_BAD "Very bad"

// new
#define D_GPIO_SWITCH "Switch"
#define D_GPIO_BUTTON "Push Button"
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