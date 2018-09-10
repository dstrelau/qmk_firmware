#include QMK_KEYBOARD_H

#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	LAYOUT( // 0
		ALL_T(KC_ESC), KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
		KC_TAB,        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
		KC_LCTL,       KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
		KC_LSFT,       KC_NO,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, MO(1),
		//KC_LCTL,       KC_LALT, KC_LGUI,          KC_SPC,  KC_SPC,  KC_SPC,                    KC_RGUI, KC_RALT, XXXXXXX, KC_HYPR,   KC_RCTL),
		KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_SPC, KC_SPC, KC_RALT, MO(2), KC_NO, MO(1), KC_RCTL),
		//KC_1,       KC_2, KC_3,          KC_SPC,  KC_SPC,  KC_SPC,                    KC_4, KC_5, KC_6, KC_7, KC_8),

	LAYOUT( // 1
		KC_GRV,        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______,
		_______,       KC_PGUP, KC_UP,   KC_PGDN, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_DEL,
		_______,       KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		KC_CAPS,       _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______, _______, KC_VOLD, KC_VOLU, KC_MUTE, _______, _______,
		_______,       _______, _______,          _______, _______, _______,                   _______, _______, _______,   MO(2), _______),

	LAYOUT( // 2
		_______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______,
		_______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, _______, _______, RESET,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, BL_DEC,  BL_TOGG, BL_INC,  BL_STEP, _______, _______, _______, _______, _______, _______,
		_______, _______, _______,          _______, _______, _______,                   _______, _______, _______, _______, _______),
};
