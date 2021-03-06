/**
   USE OF THIS SOFTWARE IS GOVERNED BY THE TERMS AND CONDITIONS
   OF THE LICENSE STATEMENT AND LIMITED WARRANTY FURNISHED WITH
   THE PRODUCT.
   <p/>
   IN PARTICULAR, YOU WILL INDEMNIFY AND HOLD B2N LTD., ITS
   RELATED COMPANIES AND ITS SUPPLIERS, HARMLESS FROM AND AGAINST ANY
   CLAIMS OR LIABILITIES ARISING OUT OF THE USE, REPRODUCTION, OR
   DISTRIBUTION OF YOUR PROGRAMS, INCLUDING ANY CLAIMS OR LIABILITIES
   ARISING OUT OF OR RESULTING FROM THE USE, MODIFICATION, OR
   DISTRIBUTION OF PROGRAMS OR FILES CREATED FROM, BASED ON, AND/OR
   DERIVED FROM THIS SOURCE CODE FILE.
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// EPROM ADDRESS DEFINITIONS

#define WIFI_SSDI_MAX 32
#define WIFI_PASS_MAX 63

#define EEPROM_SIZE 128

#define EEPROM_ADDRESS_GATEWAY_ID 0
#define EEPROM_ADDRESS_GATEWAY_KEY (EEPROM_ADDRESS_GATEWAY_ID + 4)
#define EEPROM_ADDRESS_FREQ (EEPROM_ADDRESS_GATEWAY_KEY + 16)
#define EEPROM_ADDRESS_WIFI_SSID (EEPROM_ADDRESS_FREQ + 4)
#define EEPROM_ADDRESS_WIFI_PASS (EEPROM_ADDRESS_WIFI_SSID + WIFI_SSDI_MAX + 1)

