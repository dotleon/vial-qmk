// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_hungarian.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC         , HU_Q, HU_W, HU_E , HU_R  , HU_T   , HU_EACU,       HU_UACU, HU_Z , HU_U , HU_I   , HU_O  , HU_P   , KC_DEL ,
        LSFT_T(KC_BSPC), HU_A, HU_S, HU_D , HU_F  , HU_G   , HU_AACU,       HU_OACU, HU_H , HU_J , HU_K   , HU_L  , HU_ODIA, KC_ENT ,
        KC_TAB         , HU_Y, HU_X, HU_C , HU_V  , HU_B   , HU_IACU,       HU_ODAC, HU_N , HU_M , HU_COMM, HU_DOT, HU_UDIA, HU_UDAC,
                                     MO(2), KC_SPC, KC_LCTL, KC_LALT,       KC_LGUI, MO(3), MO(1), MO(2)
    ),
    [1] = LAYOUT(
		KC_TRNS, HU_QUOT, HU_DQUO, HU_GRV , HU_EXLM, HU_CIRC, HU_RNGA,       KC_TRNS, HU_DLR , HU_EURO, HU_UNDS, HU_TILD, HU_PERC, KC_TRNS,
		KC_TRNS, HU_LPRN, HU_RPRN, HU_LCBR, HU_RCBR, HU_LBRC, HU_RBRC,       KC_TRNS, HU_SCLN, HU_PLUS, HU_MINS, HU_EQL , KC_TRNS, KC_TRNS,
		KC_TRNS, HU_LABK, HU_RABK, HU_PIPE, HU_BSLS, HU_SLSH, KC_TRNS,       KC_TRNS, HU_ASTR, HU_AT  , HU_AMPR, HU_HASH, KC_TRNS, KC_TRNS,
		                           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
	),
	[2] = LAYOUT(
		KC_TRNS, KC_TAB, KC_7, KC_8   , KC_9   , KC_PAST, KC_PSLS,      KC_TRNS, KC_PGUP, KC_HOME     , KC_UP  , KC_END , KC_TRNS, KC_TRNS         ,
		KC_TRNS, KC_ENT, KC_4, KC_5   , KC_6   , KC_DOT , KC_PMNS,      KC_TRNS, KC_PGDN, KC_LEFT     , KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS         ,
		KC_TRNS, HU_0  , KC_1, KC_2   , KC_3   , KC_COMM, KC_PPLS,      KC_TRNS, KC_TRNS, LALT(KC_SPC), KC_TRNS, KC_TRNS, KC_TRNS, LGUI(LSFT(KC_S)),
		                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS     , KC_TRNS
	),
	[3] = LAYOUT(
		KC_TRNS, KC_TRNS, KC_F7, KC_F8  , KC_F9  , KC_F10 , KC_TRNS,      RGB_MOD , RGB_HUI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT,
		KC_CAPS, KC_TRNS, KC_F4, KC_F5  , KC_F6  , KC_F11 , KC_TRNS,      RGB_RMOD, RGB_HUD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_F1, KC_F2  , KC_F3  , KC_F12 , KC_NUM ,      RGB_TOG , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS , KC_TRNS, KC_TRNS, KC_TRNS
	)
};
