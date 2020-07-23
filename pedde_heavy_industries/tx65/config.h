/*
Copyright 2018 Rasmus Schults <rasmusx@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x1209
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x6501
#define MANUFACTURER    LeeKu/Pedde Heavy Industries
#define PRODUCT         tx65/rev1
#define DESCRIPTION     65% keboard by LeeKu/TX

#define RGBLED_NUM 12

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 16

#define MATRIX_COL_PINS { A0, A1, A2, A3, A4, A5, A6, A7, B0, B1, B2, B3, B4, B5, B6, B7 }
#define MATRIX_ROW_PINS { C3, C4, C5, C6, C7 }
#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* number of backlight levels */
#define BACKLIGHT_LEVELS 1

#define VIA_EEPROM_CUSTOM_CONFIG_SIZE 31
#define RBG_BACKLIGHT_ENABLED 0