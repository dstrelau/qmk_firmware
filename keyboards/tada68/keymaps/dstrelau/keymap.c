#include "tada68.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BL 0
#define _FL 1

#define ______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap _BL: (Base Layer)
   * ,---------------------------------------------------------------.
   * | `~ | 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  Bksp |Esc|
   * |---------------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |PgU|
   * |---------------------------------------------------------------|
   * |Ctrl   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return |PgD|
   * |---------------------------------------------------------------|
   * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift | ^ |Fn |
   * |---------------------------------------------------------------|
   * | Fn | Opt| Cmd|        Space           |Cmd|Opt|Ctl| < | v | > |
   * `---------------------------------------------------------------'
   * Keymap _FL: Function Layer
   * ,---------------------------------------------------------------.
   * |   | F1|F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12|   Del |   |
   * |---------------------------------------------------------------|
   * |     |   | ^ |   |   |   |   |   |   |   |   |   |   |     |Hme|
   * |---------------------------------------------------------------|
   * |      | < | v | > |   |   |   |   |   |   |   |   |        |End|
   * |---------------------------------------------------------------|
   * |        |<< |P/P| >>|   |   |   |   |Vl+|Vl-|Mut|      |   |   |
   * |---------------------------------------------------------------|
   * |    |    |    |                       |   |   |    |   |   |   |
   * `---------------------------------------------------------------'
   */
[_BL] = KEYMAP_ANSI(
  KC_GRV,  KC_1,    KC_2,    KC_3,     KC_4,    KC_5,   KC_6,   KC_7,   KC_8,    KC_9,     KC_0,    KC_MINS,  KC_EQL,  KC_BSPC, KC_ESC,
  KC_TAB,  KC_Q,    KC_W,    KC_E,     KC_R,    KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,     KC_P,    KC_LBRC,  KC_RBRC, KC_BSLS, KC_PGUP,
  KC_LCTL, KC_A,    KC_S,    KC_D,     KC_F,    KC_G,   KC_H,   KC_J,   KC_K,    KC_L,     KC_SCLN, KC_QUOT,           KC_ENT,  KC_PGDN,
  KC_LSFT, KC_Z,    KC_X,    KC_C,     KC_V,    KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,   KC_SLSH, KC_RSFT,           KC_UP,   MO(_FL),
  MO(_FL), KC_LALT, KC_LGUI,                    KC_SPC,                          KC_RGUI,  KC_RALT, KC_RCTRL, KC_LEFT, KC_DOWN, KC_RGHT),

[_FL] = KEYMAP_ANSI(
  ______,  KC_F1 ,  KC_F2,   KC_F3,    KC_F4,   KC_F5,  KC_F6,  KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  KC_DEL,  KC_INS , \
  ______,  ______,  KC_UP,   ______,   ______,  ______, ______, ______,  ______,  ______,  ______,   BL_DEC,  BL_INC,  BL_TOGG, KC_HOME, \
  ______,  KC_LEFT, KC_DOWN, KC_RIGHT, ______,  ______, ______, ______,  ______,  ______,  ______,   ______,           ______,  KC_END,  \
  ______,  KC_MPRV, KC_MPLY, KC_MNXT,  ______,  ______, ______, ______, KC_VOLD, KC_VOLU, KC_MUTE,   ______,           ______,  ______,  \
  ______,  ______,  ______,                     ______,                           ______,  ______,   ______,  ______,  ______,  ______)
};
