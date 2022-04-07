#include QMK_KEYBOARD_H

/*
	[0] = LAYOUT_split_3x5_2(
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 

    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 

    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 

    KC_NO, KC_NO, 
    KC_NO, KC_NO
  ),

*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x5_2(
    KC_Q, KC_W, KC_F, KC_P, KC_B, 
    KC_J, KC_L, KC_U, KC_Y, KC_SCLN,

    KC_A, KC_R, KC_S, KC_T, KC_G, 
    KC_M, KC_N, KC_E, KC_I, KC_O, 

    KC_Z, KC_X, KC_C, KC_D, KC_V, 
    KC_K, KC_H, KC_COMM,  KC_DOT, KC_SLSH, 

    KC_P0, KC_BSPC, 
    LT(7,KC_SPC), KC_P1
  ),

	[7] = LAYOUT_split_3x5_2(
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 

    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 

    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
    KC_NO, KC_NO, KC_NO, KC_NO, RESET, 

    KC_TRNS, KC_TRNS, 
    KC_TRNS, KC_TRNS
  ),

};

