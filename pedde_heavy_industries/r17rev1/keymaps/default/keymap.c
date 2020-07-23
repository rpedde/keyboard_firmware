/* Copyright 2017 REPLACE_WITH_YOUR_NAME
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
#include "r17rev1.h"

#define _______ KC_TRNS
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = KEYMAP( /* Base */
  KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, \
  KC_P7,   KC_P8,   KC_P9,   KC_PPLS, \
  KC_P4,   KC_P5,   KC_P6,            \
  KC_P1,   KC_P2,   KC_P3,   KC_PENT, \
  KC_P0,            KC_PDOT           ),
[1] = KEYMAP(
  _______, _______, _______, _______, \
  _______, _______, _______, _______, \
  _______, _______, _______,          \
  _______, _______, _______, _______, \
  _______,          _______           ),
[2] = KEYMAP(
  _______, _______, _______, _______, \
  _______, _______, _______, _______, \
  _______, _______, _______,          \
  _______, _______, _______, _______, \
  _______,          _______           ),
[3] = KEYMAP(
  _______, _______, _______, _______, \
  _______, _______, _______, _______, \
  _______, _______, _______,          \
  _______, _______, _______, _______, \
  _______,          _______           )
};

