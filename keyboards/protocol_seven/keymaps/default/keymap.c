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
    _BASE,
    _R
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
    KC_ESC ,KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,KC_NO  ,
    HU_0   ,HU_1   ,HU_2   ,HU_3   ,HU_4   ,HU_5   ,C(HU_Z),
    KC_TAB ,HU_Q   ,HU_W   ,HU_E   ,HU_R   ,HU_T   ,HU_EE  ,
    KC_BSPC,HU_A   ,HU_S   ,HU_D   ,HU_F   ,HU_G   ,HU_AA  ,
    KC_LSFT,HU_Y   ,HU_X   ,HU_C   ,HU_V   ,HU_B   ,HU_II  ,
    RGB_MOD,RGB_TOG,KC_LALT,KC_NO  ,KC_NO  ,KC_SPC ,KC_NO  ,
                            KC_NO  ,

                                                  KC_F6  ,KC_F7  ,KC_F8  ,KC_F9  ,KC_F10 ,KC_F11 ,KC_F12 ,
    KC_NLCK,RGB_RMOD,RGB_MOD,KC_PMNS,              C(HU_Y),HU_6   ,HU_7   ,HU_8   ,HU_9   ,_______,KC_BSPC,
    KC_P7  ,KC_P8  ,KC_P9  ,KC_PPLS,              HU_UU  ,HU_Z   ,HU_U   ,HU_I   ,HU_O   ,HU_P   ,KC_DEL ,
    KC_P4  ,RGB_RMOD,RGB_MOD,KC_PENT,              HU_OO  ,HU_H   ,HU_J   ,HU_K   ,HU_L   ,HU_OE  ,KC_ENT ,
    KC_P1  ,KC_P2  ,KC_P3  ,KC_UP  ,              HU_OEE ,HU_N   ,HU_M   ,HU_COMM,HU_DOT ,HU_UE  ,HU_UEE ,
    KC_P0  ,KC_PDOT,KC_LEFT,KC_DOWN,             KC_NO  ,MO(_R) ,KC_NO  ,KC_HOME,KC_PGUP,KC_PGDN,KC_END ,
                                                                          KC_NO
    ),
    [_R] = LAYOUT(
    _______,_______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,_______,
    _______,HU_CIRC,HU_TILD,_______,HU_LBRC,HU_RBRC,_______,
    _______,_______,HU_LPRN,HU_RPRN,HU_LCBR,HU_RCBR,_______,
    _______,HU_LESS,HU_MORE,HU_PIPE,HU_BSLS,HU_SLSH,_______,
    _______,_______,_______,_______,_______,_______,_______,
                            _______,

                                                  _______,_______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,              _______,_______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,              _______,HU_DLR ,_______,_______,_______,HU_PERC,_______,
    _______,_______,_______,_______,              _______,HU_SCLN,HU_PLUS,HU_MINS,HU_EQL ,_______,_______,
    BL_ON  ,BL_INC ,_______,_______,              _______,HU_ASTR,HU_AT  ,HU_AMPR,HU_HASH,_______,_______,
    BL_OFF ,BL_DEC ,_______,_______,              _______,_______,_______,_______,_______,_______,_______,
                                                                          _______
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
