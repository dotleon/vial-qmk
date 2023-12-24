// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_A    ,
        RGB_TOG ,KC_B    ,KC_C    ,KC_D    ,KC_E    ,KC_F    ,KC_G    ,KC_H    ,KC_I    ,KC_J    ,KC_K    ,KC_L    ,
        KC_A    ,KC_B    ,KC_C    ,KC_D    ,KC_E    ,KC_F    ,KC_G    ,KC_H    ,KC_I    ,KC_J    ,KC_K    ,
        KC_A    ,KC_B    ,KC_C    ,KC_D    ,KC_E    ,KC_F    ,KC_G    ,KC_H    ,KC_I    ,KC_J    ,KC_K    ,
        KC_A    ,KC_B    ,KC_C    ,KC_D    ,KC_E    ,KC_F    ,KC_G    ,KC_H    ,KC_I    ,KC_J    ,KC_K    ,
        KC_A    ,KC_B    ,KC_C    ,KC_D    ,         KC_SPC  ,KC_F    ,KC_G    ,KC_H    ,KC_I    ,KC_J
    )
};

void keyboard_post_init_user(void) {
  // Call the post init code.
  rgblight_enable(); // enables Rgb, without saving settings
  rgblight_sethsv(79, 221, 255); // sets the color to teal/cyan without saving
}


layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
    case 0:
        rgblight_sethsv(79, 221, 255);
        break;
    case 1:
        rgblight_sethsv(170, 255, 255);
        break;
    case 2:
        rgblight_sethsv(194, 255, 255);
        break;
    case 3:
        rgblight_sethsv(0, 255, 255);
        break;
    default: //  for any other layers, or the default layer
        rgblight_sethsv(79, 221, 255);
        break;
    }
  return state;
}
