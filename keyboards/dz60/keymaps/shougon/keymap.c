#include QMK_KEYBOARD_H

// Make special keycodes more visible
#define ____ KC_TRNS
#define XXXX KC_NO

// Layer definition
#define L0 0
#define L1 1
// #define L2 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// Base layer - ANSI QWERTY
[L0] = LAYOUT_2_shifts(
	KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, XXXX, KC_BSPC,
	KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
	MO(L1), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
	KC_LSFT, XXXX, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_RCTL,
	KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_SPC, KC_SPC, KC_RALT, MO(L1), KC_LEFT, KC_DOWN, KC_RIGHT),

// Utility layer - RGB and multimedia control
[L1] = LAYOUT_2_shifts(
	KC_GESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, ____, ____,
	____, RGB_TOG, RGB_MOD, RGB_SAI, RGB_SAD, ____, ____, ____, KC_INS, ____, KC_PSCR, ____, ____, ____,
	____, RGB_HUI, RGB_HUD, RGB_VAI, RGB_VAD, ____, ____, ____, ____, ____, ____, ____, ____,
	____, ____, BL_TOGG, BL_INC, BL_DEC, ____, RESET, ____, ____, ____, ____, ____, KC_MPLY, KC_PGUP, KC_MUTE,
	____, KC_CAPS, ____, ____, ____, ____, ____, ____, KC_HOME, KC_PGDN, KC_END),

// Setup layer - Reset an additional "b" button
// [L2] = LAYOUT_2_shifts(
// 	____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
// 	____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
// 	____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
// 	____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
// 	____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____),

};

