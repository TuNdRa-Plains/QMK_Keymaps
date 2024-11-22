// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
	_MAIN,
	_LOWER
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	/*	┌───┬───┬───┬───┬───┬───┬───┐												┌───┬───┬───┬───┬───┬───┬───┐
	*	│ESC│ ` │ 1 │ 2 │ 3 │ 4 │ 5 │												│ 6 │ 7 │ 8 │ 9 │ 0 │ - │DEL│
	*	├───┼───┼───┼───┼───┼───┼───┤												├───┼───┼───┼───┼───┼───┼───┤
	*	│TAB│ [ │ Q │ W │ E │ R │ T │												│ Y │ U │ I │ O │ P │ ] │BSP│
	*	├───┼───┼───┼───┼───┼───┼───┤												├───┼───┼───┼───┼───┼───┼───┤
	*	│SHF│LOK│ A │ S │ D │ F │ G │												│ H │ J │ K │ L │ ; │ ' │SHF│
	*	├───┼───┼───┼───┼───┼───┼───┤												├───┼───┼───┼───┼───┼───┼───┤
	*	│LOW│ \ │ Z │ X │ C │ V │ B │												│ N │ M │ , │ . │ / │END│HOM│
	*	└───┴───┴───┼───┼───┼───┼───┼───┐										┌───┼───┼───┼───┼───┼───┴───┴───┘
	*				│CTR│WIN│ALT│LCK│RCK│										│V-	│ENT│ALT│APP│CTR│
	*				└───┴───┴───┼───┼───┤										├───┼───┼───┴───┴───┘
	*							│SPC│MCK│										│V+ │n/a│	
	*							└───┴───┘										└───┴───┘
	*/
	[_MAIN] = LAYOUT(
	KC_ESC, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5,									KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_DEL,
	KC_TAB, KC_LBRC, KC_Q, KC_W, KC_E, KC_R, KC_T,									KC_Y, KC_U, KC_I, KC_O, KC_P, KC_RBRC, KC_BSPC,
	KC_LSFT, G(KC_L), KC_A, KC_S, KC_D, KC_F, KC_G,									KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_RSFT,
	MO(_LOWER), KC_BSLS, KC_Z, KC_X, KC_C, KC_V, KC_B,								KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_END, KC_HOME,
							KC_LCTL, KC_LGUI, KC_LALT, KC_BTN1, KC_BTN2,		KC_KB_VOLUME_DOWN,KC_ENT, KC_RALT, KC_APP, KC_RCTL,
														KC_SPACE, KC_BTN3,		KC_KB_VOLUME_UP, XXXXXXX
	),
	[_LOWER] = LAYOUT(
	_______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,								KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, _______,
	_______, KC_NO, C(KC_LEFT), KC_UP, C(KC_RIGHT), KC_NO, KC_NO,					KC_NO, RGB_TOG, RGB_VAI, KC_NO, KC_NO, KC_NO, _______,
	_______, KC_NO, KC_LEFT, KC_DOWN, KC_RIGHT, KC_NO, KC_NO,						KC_NO, RGB_MOD, RGB_SAD, RGB_RMOD, KC_NO, KC_NO, _______,
	_______, KC_NO, KC_NO, KC_CUT, KC_COPY, KC_PASTE, KC_NO, 						KC_NO, KC_MPRV, KC_MPLY, KC_MNXT, KC_NO, _______, _______,
							_______, _______, _______, _______, _______,		_______, _______, _______, _______, _______,
														_______, _______,		_______, XXXXXXX
	)
};