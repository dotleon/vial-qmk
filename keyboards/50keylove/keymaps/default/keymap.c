/* Copyright 2020 dotleon
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
#include "keymap_hungarian.h"

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _1,
    _2,
    _3,
    _4
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_1] = LAYOUT(
    KC_ESC ,HU_Q   ,HU_W   ,HU_E   ,HU_R   ,HU_T   ,HU_EE          ,HU_UU  ,HU_Z   ,HU_U   ,HU_I   ,HU_O   ,HU_P   ,KC_DEL ,
    KC_BSPC,HU_A   ,HU_S   ,HU_D   ,HU_F   ,HU_G   ,HU_AA          ,HU_OO  ,HU_H   ,HU_J   ,HU_K   ,HU_L   ,HU_OE  ,KC_ENT ,
    KC_LSFT,HU_Y   ,HU_X   ,HU_C   ,HU_V   ,HU_B   ,HU_II          ,HU_OEE ,HU_N   ,HU_M   ,HU_COMM,HU_DOT ,HU_UE  ,HU_UEE ,
                           KC_LCTL ,MO(_3) ,KC_SPC ,KC_LALT        ,MO(_3) ,MO(_2) ,KC_NO  ,KC_LGUI
    ),
    [_2] = LAYOUT(
    _______,_______,_______,_______,_______,_______,_______        ,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,_______        ,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,_______        ,_______,_______,_______,_______,_______,_______,_______,
                            _______,_______,_______,_______        ,_______,_______,_______,_______
    ),
    [_3] = LAYOUT(
    _______,_______,_______,_______,_______,_______,_______        ,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,_______        ,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,_______        ,_______,_______,_______,_______,_______,_______,_______,
                            _______,_______,_______,_______        ,_______,_______,_______,_______
    ),
    [_4] = LAYOUT(
    _______,_______,_______,_______,_______,_______,_______        ,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,_______        ,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,_______        ,_______,_______,_______,_______,_______,_______,_______,
                            _______,_______,_______,_______        ,_______,_______,_______,_______
    )
    // [_RAISE] = LAYOUT(
    // _______,_______,_______,_______,_______,_______,_______,
    // _______,_______,_______,_______,_______,_______,_______,
    // _______,_______,_______,_______,_______,_______,_______,
    // _______,_______,_______,_______,_______,_______,_______,
    // _______,_______,_______,_______,_______,_______,_______,
    // _______,_______,_______,_______,_______,_______,_______,

    //                                               _______,_______,_______,_______,_______,_______,_______,
    // _______,_______,_______,_______,              _______,_______,_______,_______,_______,_______,_______,
    // _______,_______,_______,_______,              _______,_______,_______,_______,_______,_______,_______,
    // _______,_______,_______,_______,              _______,_______,_______,_______,_______,_______,_______,
    // _______,_______,_______,_______,              _______,_______,_______,_______,_______,_______,_______,
    // _______,_______,_______,_______,_______,      _______,_______,_______,_______,_______,_______,_______
    // )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QMKBEST:
            if (record->event.pressed) {
                // when keycode QMKBEST is pressed
                SEND_STRING("QMK is the best thing ever!");
            } else {
                // when keycode QMKBEST is released
            }
            break;
        case QMKURL:
            if (record->event.pressed) {
                // when keycode QMKURL is pressed
                SEND_STRING("https://qmk.fm/\n");
            } else {
                // when keycode QMKURL is released
            }
            break;
    }
    return true;
}

/*
void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool led_update_user(led_t led_state) {
    return true;
}
*/
