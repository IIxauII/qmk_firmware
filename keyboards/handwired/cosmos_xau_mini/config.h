#pragma once

#define EE_HANDS // Store which side I am in EEPROM

/* Keyboard matrix assignments */
#define MATRIX_ROW_PINS { GP12, GP11, GP10, GP9, GP8 }
#define MATRIX_COL_PINS { GP7, GP6, GP5, GP4, GP3, GP2}

/* Encoders */
#define ENCODER_A_PINS { }
#define ENCODER_RESOLUTIONS { }
#define ENCODER_A_PINS_RIGHT { GP18 }
#define ENCODER_B_PINS_RIGHT { GP20 }
#define ENCODER_RESOLUTIONS_RIGHT { 4 }
/* Encoders defined in keyboard.json */

/* Reset */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
//#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
// This LED blinks when entering bootloader

//N KEY ROLLOVER
#define NKRO_DEFAULT_ON true