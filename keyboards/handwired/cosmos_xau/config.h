#pragma once

#define EE_HANDS // Store which side I am in EEPROM

/* Keyboard matrix assignments */
#define MATRIX_ROW_PINS { GP8, GP9, GP10, GP11, GP12, GP13 }
#define MATRIX_COL_PINS { GP7, GP6, GP5, GP4, GP3, GP2}

/* Encoders */
//#define ENCODERS_PAD_A { GP22, GP20 }
//#define ENCODERS_PAD_B { GP19, GP17 }
/* Encoders defined in keyboard.json */

/* Reset */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
//#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
// This LED blinks when entering bootloader
