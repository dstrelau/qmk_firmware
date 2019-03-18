#include QMK_KEYBOARD_H

#define BL 0
#define FN 1
#define SY 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│ Esc │  1  │  2  │  3  │  4  │  5  │  6  │  7  │  8  │  9  │  0  │  -  │  =  │  \  │  `  │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┴─────┤
│ Tab │  Q  │  W  │  E  │  R  │  T  │  Y  │  U  │  I  │  O  │  P  │  [  │  ]  │   BkSpc   │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┴───────────┤
│Ctrl │  A  │  S  │  D  │  F  │  G  │  H  │  J  │  K  │  L  │  ;  │  '  │      Enter      │
├─────┴─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼───────────┬─────┤
│ Shift     │  Z  │  X  │  C  │  V  │  B  │  N  │  M  │  ,  │  .  │  /  │   Shift   │ Fn  │
└──────┬────┴┬────┴──┬──┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴──┬──┴────┬─────┬┴─────┘
       │ Alt │  Gui  │                     Space                     │  Gui  │ Alt │
       └─────┴───────┴───────────────────────────────────────────────┴───────┴─────┘ */
[BL] = LAYOUT_60_hhkb(
        ALL_T(KC_ESC),  KC_1,  KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,     KC_9,    KC_0,    KC_MINS,  KC_EQL,   KC_BSLS, KC_GRV,  \
        LT(SY, KC_TAB),        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,     KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC, KC_BSPC, \
        KC_LCTL,        KC_A,  KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,     KC_L,    KC_SCLN, KC_QUOT,            KC_ENT,           \
        KC_LSFT,        KC_Z,  KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,  KC_DOT,  KC_SLSH,           KC_RSFT,  MO(FN),           \
                        KC_LALT, KC_LGUI,                        KC_SPC,                                              KC_RGUI, KC_RALT          ),

/*
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│RESET│ F1  │ F2  │ F3  │ F4  │ F5  │ F6  │ F7  │ F8  │ F9  │ F10 │ F11 │ F12 │ Ins │ Del │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┴─────┤
│     │ PgD │  ↑  │ PgU │     │     │     │     │     │     │     │RGBBK│RGBFW│   RGBTOG  │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┴───────────┤
│     │  ←  │  ↓  │  →  │     │     │     │     │     │     │     │     │                 │
├─────┴─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼───────────┬─────┤
│  CpsLck   │MPrvs│MPlPs│MNext│     │     │     │     │     │     │     │           │     │
└──────┬────┴┬────┴──┬──┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴──┬──┴────┬─────┬┴─────┘
       │     │       │                                               │       │     │
       └─────┴───────┴───────────────────────────────────────────────┴───────┴─────┘ */
[FN] = LAYOUT_60_hhkb(
         RESET,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,    KC_F11,  KC_F12,  KC_INS,  KC_DEL, \
       _______, KC_PGDN,   KC_UP, KC_PGUP, _______, _______, _______, _______, _______, _______, _______,  RGB_RMOD, RGB_MOD, RGB_TOG,          \
       _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, _______, _______, _______, _______,  _______,           _______,          \
       KC_CAPS, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______, _______, KC_VOLD, KC_VOLU, KC_MUTE,            _______, _______,          \
                _______, _______,                            _______,                                                         _______, _______  ),

/*
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│     │     │     │     │     │     │     │     │     │     │     │     │     │     │     │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┴─────┤
│     │     │     │     │     │     │     │  {  │  }  │     │     │     │     │           │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┴───────────┤
│     │     │     │     │     │     │     │  (  │  )  │     │     │     │                 │
├─────┴─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼───────────┬─────┤
│           │     │     │     │     │     │  [  │  ]  │     │     │     │           │     │
└──────┬────┴┬────┴──┬──┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴──┬──┴────┬─────┬┴─────┘
       │     │       │                                               │       │     │
       └─────┴───────┴───────────────────────────────────────────────┴───────┴─────┘ */
[SY] = LAYOUT_60_hhkb(
       _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______,  _______, \
       _______, _______,  _______, _______, _______, _______, _______, KC_UNDS, KC_PLUS, _______, _______,  _______, _______, _______,          \
       _______, _______,  _______, _______, _______, _______, _______, KC_LPRN, KC_RPRN, _______, _______,  _______,          _______,          \
       _______, _______,  _______, _______, _______, _______, _______, KC_MINS, KC_EQL,  _______, _______,           _______, _______,          \
                _______, _______,                            _______,                                                         _______, _______  ),
};
