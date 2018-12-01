/* Copyright 2018 REPLACE_WITH_YOUR_NAME
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
#include QMK_KEYBOARD_H

enum tomboard_layers { qwerty, numbers, symbols };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Qwerty
 * ,---------------------------. .---------------------------.
 * |Tab| Q | W | E | R | T |Pup| |-_ | Y | U | I | O | P |Bks|
 * |---+---+---+---+---+---+---+ +---+---+---+---+---+---+---|
 * |Esc| A | S | D | F | G |Pdn| |=+ | H | J | K | L |;: |'" |
 * |---+---+---+---+---+---+---+ +---+---+---+---+---+---+---|
 * |LSh| Z | X | C | V | B |`~ | |\| | N | M |,< |.> |?/ |RSh|
 * |---+---+---+---+---+---+---+ +---+---+---+---+---+---+---|
 * |Ctl|Alt|Sup|   |[{ |Spc|Ent| |Ent|Spc| }]|   |   |RAl|Ctl|
 * `---------------------------' `---------------------------'
 *                      Sym Num   Num Sym
 */
 [qwerty] = {
     { KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_PGUP,
         KC_MINS, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC },
     { KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_PGDN,
         KC_EQL,  KC_H,  KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT },
     { KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_GRAVE,
         KC_BSLS, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT },
     { KC_LCTL, KC_LALT, KC_LGUI, KC_NO, KC_LBRC, LT(symbols, KC_SPC), LT(numbers, KC_ENT),
         LT(numbers, KC_ENT), LT(symbols, KC_SPC), KC_RBRC, KC_NO, KC_NO, KC_RALT, KC_RCTL }
 },

/* Numbers
 * ,---------------------------. .---------------------------.
 * |   | 1 | 2 | 3 | 4 | 5 |Hm | |   | 6 | 7 | 8 | 9 | 0 |Del|
 * |---+---+---+---+---+---+---+ +---+---+---+---+---+---+---|
 * |   |   |   |   |   |   |End| |   |<- | v | ^ | ->|   |   |
 * |---+---+---+---+---+---+---+ +---+---+---+---+---+---+---|
 * |   |   |   |   |   |   |   | |   |   |   |   |   |   |   |
 * |---+---+---+---+---+---+---+ +---+---+---+---+---+---+---|
 * |   |   |   |   |   |   |   | |   |   |   |   |   |   |   |
 * `---------------------------' `---------------------------'
 */
 [numbers] = {
     { KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_HOME,
         KC_TRNS, KC_6, KC_7, KC_8, KC_9, KC_0, KC_DEL },
     { KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_END,
         KC_TRNS, KC_LEFT, KC_DOWN,    KC_UP,    KC_RIGHT, KC_TRNS, KC_TRNS },
     { KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
     { KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS}
 },

/* Symbols
 * ,---------------------------. .---------------------------.
 * |   | ! | @ | # | $ | % |   | |   | ^ | & | * | ( | ) |   |
 * |---+---+---+---+---+---+---+ +---+---+---+---+---+---+---|
 * |   |F1 |F2 |F3 |F4 |F5 |F6 | |   |   |   |   |   |   |   |
 * |---+---+---+---+---+---+---+ +---+---+---+---+---+---+---|
 * |   |F7 |F8 |F9 |F10|F11|F12| |   |   |   |   |   |   |   |
 * |---+---+---+---+---+---+---+ +---+---+---+---+---+---+---|
 * |   |   |   |RST|   |   |   | |   |   |   |   |   |   |   |
 * `---------------------------' `---------------------------'
 */
 [symbols] = {
     { KC_TRNS, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_TRNS,
         KC_TRNS, KC_CIRC, KC_AMPR,    KC_ASTR,    KC_LPRN, KC_RPRN, KC_TRNS },
     { KC_TRNS,  KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,  KC_F6,
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
     { KC_TRNS,  KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
     { KC_TRNS, KC_TRNS, KC_TRNS, RESET, KC_TRNS, KC_TRNS, KC_TRNS,
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS}
 },
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
