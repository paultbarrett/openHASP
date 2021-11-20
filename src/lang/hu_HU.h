#ifndef HASP_LANG_HU_HU_H
#define HASP_LANG_HU_HU_H

#define D_ISO_LANG_CODE "hu-HU"

#define D_USERNAME "Felhasználónév:"
#define D_PASSWORD "Jelszó:"
#define D_SSID "SSID:"
#define D_YES "Igen"
#define D_NO "Nem"

#define D_ERROR_OUT_OF_MEMORY "Elfogyott a memória"
#define D_ERROR_UNKNOWN "Ismeretlen hiba"

#define D_CONFIG_NOT_CHANGED "A beállítások nem változtak"
#define D_CONFIG_CHANGED "A beállítások megváltoztak"
#define D_CONFIG_LOADED "Beállítások betöltve"

#define D_FILE_LOADING "%s betöltése"
#define D_FILE_LOADED "%s betöltve"
#define D_FILE_LOAD_FAILED "%s betöltése nem sikerült"
#define D_FILE_NOT_FOUND "File not found" // new
#define D_FILE_SAVING "%s mentése"
#define D_FILE_SAVED "%s mentve"
#define D_FILE_SAVE_FAILED "%s mentése meghiúsult"
#define D_FILE_SIZE_BYTES "bytes"   // new
#define D_FILE_SIZE_KILOBYTES "KiB" // new
#define D_FILE_SIZE_MEGABYTES "MiB" // new
#define D_FILE_SIZE_GIGABYTES "GiB" // new
#define D_FILE_SIZE_DIVIDER 1024    // new, kibi or kilo bytes
#define D_DECIMAL_POINT ","         // new, decimal comma or point

#define D_SERVICE_STARTING "Indítás..."
#define D_SERVICE_STARTED "Elindítva"
#define D_SERVICE_START_FAILED "Az indítás meghiúsult"
#define D_SERVICE_STOPPED "Megállva"
#define D_SERVICE_DISABLED "Tiltva"
#define D_SERVICE_CONNECTED "Csatlakoztatva"
#define D_SERVICE_DISCONNECTED "Szétkapcsolva"

#define D_SETTING_ENABLED "Engedélyezve"
#define D_SETTING_DISABLED "Letiltva"

#define D_NETWORK_IP_ADDRESS_RECEIVED "Beállított IP-cím: %s"
#define D_NETWORK_ONLINE "online"
#define D_NETWORK_OFFLINE "offline"
#define D_NETWORK_CONNECTION_FAILED "A kapcsolódás meghiúsult"
#define D_NETWORK_CONNECTION_UNAUTHORIZED "A hitelesítés sikertelen"

#define D_MQTT_DEFAULT_NAME "plate_%s"
#define D_MQTT_CONNECTING "Csatlakozás..."
#define D_MQTT_CONNECTED "Csatlakozva a %s szerverhez mint %s"
#define D_MQTT_NOT_CONNECTED "Nincs kapcsolat ???"
#define D_MQTT_DISCONNECTING "Szétkapcsolás..."
#define D_MQTT_DISCONNECTED "Szétkapcsolva"
#define D_MQTT_RECONNECTING "Lekapcsolva a szerverről, újracsatlakozás..."
#define D_MQTT_NOT_CONFIGURED "Nincs konfigurálva MQTT szerver"
#define D_MQTT_STARTED "Elindítva: %d bájt"
#define D_MQTT_FAILED "Nem sikerült:"
#define D_MQTT_INVALID_TOPIC "Az üzenet érvénytelen topik-ot tartalmaz"
#define D_MQTT_SUBSCRIBED "Feliratkozva: %s"
#define D_MQTT_NOT_SUBSCRIBED "Nem sikerült feliratkozni: %s"
#define D_MQTT_HA_AUTO_DISCOVERY "Regisztrálás HA automatikus felfedezésre"
#define D_MQTT_PAYLOAD_TOO_LONG "Túl hosszú payload (%u bájt)"

#define D_TELNET_CLOSING_CONNECTION "Munkamenet befejezése %s-el"
#define D_TELNET_CLIENT_LOGIN_FROM "Kliens bejelentkezés innen: %s"
#define D_TELNET_CLIENT_CONNECT_FROM "Kliens csatlakozva innen: %s"
#define D_TELNET_CLIENT_NOT_CONNECTED "Kliens NEM csatlakozik"
#define D_TELNET_INCORRECT_LOGIN_ATTEMPT "Helytelen bejelentkezési kísérlet %s-ről"
#define D_TELNET_STARTED "Telnet konzol elindítva"
#define D_TELNET_FAILED "Telnet konzol elindítása meghiúsult"
#define D_TELNET_CLIENT_CONNECTED "Kliens csatlakozva"
#define D_TELNET_CLIENT_REJECTED "Kliens elutasítva"

#define D_HASP_INVALID_PAGE "Érvénytelen oldal: %u"
#define D_HASP_INVALID_LAYER "Nem törölhető a rendszerréteg"
#define D_HASP_CHANGE_PAGE "Oldalváltás: %u"
#define D_HASP_CLEAR_PAGE "Oldal törlése: %u"

#define D_OBJECT_DELETED "Objektum törölve"
#define D_OBJECT_UNKNOWN "Ismeretlen objektum"
#define D_OBJECT_MISMATCH "Az objektumok NEM passzolnak!"
#define D_OBJECT_LOST "Elveszett objektum!"
#define D_OBJECT_CREATE_FAILED "%u objektum sikertelen"
#define D_OBJECT_PAGE_UNKNOWN "%u oldalazonosító nincs meghatározva"
#define D_OBJECT_EVENT_UNKNOWN "Ismeretlen esemény %d"

#define D_ATTRIBUTE_UNKNOWN "Ismeretlen tulajdonság: %s"
// D_ATTRIBUTE_OBSOLETE D_ATTRIBUTE_INSTEAD can be used together or just D_ATTRIBUTE_OBSOLETE alone
#define D_ATTRIBUTE_OBSOLETE "%s is obsolete"  // new
#define D_ATTRIBUTE_INSTEAD ", use %s instead" // new
#define D_ATTRIBUTE_READ_ONLY "%s csak olvasható"
#define D_ATTRIBUTE_PAGE_METHOD_INVALID "Nem lehet meghívni %s-t egy oldalon"
#define D_ATTRIBUTE_ALIGN_INVALID "Invalid align property: %s" // new
#define D_ATTRIBUTE_COLOR_INVALID "Invalid color property: %s" // new
#define D_ATTRIBUTE_LONG_MODE_INVALID "Invalid long mode: %s"  // new

#define D_OOBE_SSID_VALIDATED "%s SSID érvényes"
#define D_OOBE_AUTO_CALIBRATE "Automatikus kalibrálás engedélyezve"
#define D_OOBE_CALIBRATED "Korábban kalibrálva"

#define D_DISPATCH_COMMAND_NOT_FOUND "%s parancs nem található"
#define D_DISPATCH_INVALID_PAGE "Érvénytelen oldal: %s"
#define D_DISPATCH_REBOOT "Az MCU most újraindul!"

#define D_JSON_FAILED "JSON elemzése nem sikerült:"
#define D_JSONL_FAILED "JSONL elemzése meghiúsult a %u vonalnál"
#define D_JSONL_SUCCEEDED "JSONL teljes körűen elemezve"

#define D_OTA_CHECK_UPDATE "A frissítések ellenőrzése az URL-en: %s"
#define D_OTA_CHECK_COMPLETE "A frissítések ellenőrzése befejeződött"
#define D_OTA_CHECK_FAILED "A frissítések ellenőrzése meghiúsult: %s"
#define D_OTA_UPDATE_FIRMWARE "Firmware frissítése OTA-val"
#define D_OTA_UPDATE_COMPLETE "Az OTA frissítés elkészült"
#define D_OTA_UPDATE_APPLY "Firmware alkalmazása és újraindítás"
#define D_OTA_UPDATE_FAILED "Az OTA frissítés meghiúsult"
#define D_OTA_UPDATING_FIRMWARE "Firmware frissítés..."
#define D_OTA_UPDATING_FILESYSTEM "Fájlrendszer frissítés..."

#define D_HTTP_HASP_DESIGN "Képernyő dizájn"
#define D_HTTP_INFORMATION "Információk"
#define D_HTTP_HTTP_SETTINGS "HTTP beállítások"
#define D_HTTP_WIFI_SETTINGS "WiFi beállítások"
#define D_HTTP_MQTT_SETTINGS "MQTT beállítások"
#define D_HTTP_GPIO_SETTINGS "GPIO beállítások"
#define D_HTTP_MDNS_SETTINGS "mDNS beállítások"
#define D_HTTP_TELNET_SETTINGS "Telnet beállítások"
#define D_HTTP_DEBUG_SETTINGS "Hibakeresési beállítások"
#define D_HTTP_GUI_SETTINGS "Képernyő beállítások"
#define D_HTTP_SAVE_SETTINGS "Beállítások mentése"
#define D_HTTP_UPLOAD_FILE "Fájl feltöltése"
#define D_HTTP_ERASE_DEVICE "Minden beállítás visszaállítása"
#define D_HTTP_ADD_GPIO "Új pin hozzáadása"
#define D_HTTP_BACK "Vissza"
#define D_HTTP_REFRESH "Frissítés"
#define D_HTTP_PREV_PAGE "Előző oldal"
#define D_HTTP_NEXT_PAGE "Következő oldal"
#define D_HTTP_CALIBRATE "Kalibrálás"
#define D_HTTP_ANTIBURN "Run Anti Burn-in" // New
#define D_HTTP_SCREENSHOT "Képernyőkép"
#define D_HTTP_FILE_BROWSER "Fájlkezelő"
#define D_HTTP_FIRMWARE_UPGRADE "Firmware frissítés"
#define D_HTTP_UPDATE_FIRMWARE "Firmware frissítése"
#define D_HTTP_FACTORY_RESET "Gyári beállítások visszaállítása"
#define D_HTTP_MAIN_MENU "Főmenü"
#define D_HTTP_REBOOT "Újraindítás"
#define D_HTTP_CONFIGURATION "Beállítások"
#define D_HTTP_SENDING_PAGE "%S oldal küldése %s-re"
#define D_HTTP_FOOTER "készítette: Francis Van Roie"

#define D_INFO_VERSION "Verziószám"
#define D_INFO_BUILD_DATETIME "Build időpontja"
#define D_INFO_UPTIME "Uptime"
#define D_INFO_FREE_HEAP "Szabad Heap"
#define D_INFO_FREE_BLOCK "Szabad Blokk"
#define D_INFO_DEVICE_MEMORY "Eszköz Memória"
#define D_INFO_LVGL_MEMORY "LVGL Memória"
#define D_INFO_TOTAL_MEMORY "Összesen"
#define D_INFO_FREE_MEMORY "Szabad"
#define D_INFO_FRAGMENTATION "Fragmentáció"
#define D_INFO_PSRAM_FREE "PSRam szabad"
#define D_INFO_PSRAM_SIZE "PSRam méret"
#define D_INFO_FLASH_SIZE "Flash méret"
#define D_INFO_SKETCH_USED "Program használatban"
#define D_INFO_SKETCH_FREE "Program szabad"
#define D_INFO_MODULE "Modul"
#define D_INFO_MODEL "Modell"
#define D_INFO_FREQUENCY "Frekvencia"
#define D_INFO_CORE_VERSION "Core Verzió"
#define D_INFO_RESET_REASON "Újraindulás oka"
#define D_INFO_STATUS "Státusz"
#define D_INFO_SERVER "Szerver"
#define D_INFO_USERNAME "Felhasználónév"
#define D_INFO_CLIENTID "Kliens ID"
#define D_INFO_CONNECTED "Csatlakoztatva"
#define D_INFO_DISCONNECTED "Szétkapcsolva"
#define D_INFO_RECEIVED "Fogadott"
#define D_INFO_PUBLISHED "Küldött"
#define D_INFO_FAILED "Sikertelen"
#define D_INFO_ETHERNET "Ethernet"
#define D_INFO_WIFI "WiFi"
#define D_INFO_LINK_SPEED "Linksebesség"
#define D_INFO_FULL_DUPLEX "Full Duplex" // new
#define D_INFO_SSID "SSID"
#define D_INFO_RSSI "Jelerősség"
#define D_INFO_IP_ADDRESS "IP cím"
#define D_INFO_MAC_ADDRESS "MAC cím"
#define D_INFO_GATEWAY "Átjáró"
#define D_INFO_DNS_SERVER "DNS szerver"

#define D_OOBE_MSG "Koppintson a képernyőre a WiFi beállításához, vagy csatlakozzon az alábbi Access Point-hoz:"
#define D_OOBE_SCAN_TO_CONNECT "Szkennelje le a csatlakozáshoz:"

#define D_WIFI_CONNECTING_TO "Csatlakozás %s-hez"
#define D_WIFI_CONNECTED_TO "Csatlakozva %s-hez, IP cím kérése..."
#define D_WIFI_RSSI_EXCELLENT "Kiváló"
#define D_WIFI_RSSI_GOOD "Jó"
#define D_WIFI_RSSI_FAIR "Elfogadható"
#define D_WIFI_RSSI_WEAK "Gyenge"
#define D_WIFI_RSSI_BAD "Rossz"

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
