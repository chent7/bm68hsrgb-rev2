 /* Copyright 2022 bdtc123
  * Copyright 2022 peepeetee
  * Copyright 2022 chent7
  * 
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 2 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
  */
#pragma once

#include "config_common.h"

#define VENDOR_ID       0x4B50
#define PRODUCT_ID      0x1131
#define DEVICE_VER      0x0002
#define MANUFACTURER    KP republic
#define PRODUCT         bm68v2

#define MATRIX_ROWS 5
#define MATRIX_COLS 15
#define MATRIX_ROW_PINS { D6, D4, D5, D3, F6 }
#define MATRIX_COL_PINS { F0, F1, B0, B1, B2, B3, E6, B7, D2, D7, B4, B5, B6, C6, C7}
#define UNUSED_PINS
#define DIODE_DIRECTION ROW2COL

#define DEBOUNCE 5
#define USB_POLLING_INTERVAL_MS 1
#define FORCE_NKRO

#define RGBLED_NUM 6
#define RGB_DI_PIN E2

#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_STATIC_LIGHT
#define RGBLIGHT_DEFAULT_HUE 222

#define DRIVER_ADDR_1 0b0110000
#define DRIVER_COUNT 1
#define DRIVER_1_LED_TOTAL 68
#define DRIVER_LED_TOTAL DRIVER_1_LED_TOTAL
#define DRIVER_INDICATOR_LED_TOTAL 0

#ifdef RGB_MATRIX_ENABLE
    
    #define RGB_MATRIX_KEYPRESSES
    #define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_GRADIENT_LEFT_RIGHT
    
    #define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
    #define RGB_MATRIX_STARTUP_HUE 110
    #define RGB_MATRIX_STARTUP_SPD 80

#endif
