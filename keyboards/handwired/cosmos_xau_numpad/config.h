#pragma once

/* Keyboard matrix assignments */
#define MATRIX_COL_PINS { GP11, GP10, GP9, GP8 }
#define MATRIX_ROW_PINS { GP2, GP3, GP4, GP5, GP6, GP7}

/* Encoders */
#define ENCODER_A_PINS { GP14}
#define ENCODER_B_PINS { GP13 }
#define ENCODER_RESOLUTIONS { 4 }

/* Reset */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
//#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
//This LED blinks when entering bootloader

//N KEY ROLLOVER
#define NKRO_DEFAULT_ON true