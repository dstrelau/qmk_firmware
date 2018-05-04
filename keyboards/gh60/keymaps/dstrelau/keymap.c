#include "gh60.h"
#include "action_layer.h"

#define _QW 0
#define _DV 1
#define _FN 2

// make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /*
     *  _QW: Qwerty Layer
     * ,-----------------------------------------------------------.
     * |Esc| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | = | \ | ` |
     * |-----------------------------------------------------------|
     * | Tab | Q | W | E | R | T | Y | U | I | O | P | [ | ] |   \ |
     * |-----------------------------------------------------------|
     * |Ctrl   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '| Return|
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /| Shift| Fn|
     * |-----------------------------------------------------------|
     * |    |Alt |Gui |           Space             |Gui |Alt |    |
     * `-----------------------------------------------------------'
     */
[_QW] = KEYMAP_HHKB( /* Layer 0: Qwerty */
    ALL_T(KC_ESC), KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV, \
    KC_TAB,        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC , \
    KC_LCTL,       KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT  , \
    KC_LSFT,       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          TT(_FN) , \
    XXXXXXX,       KC_LALT, KC_LGUI,                            KC_SPC,                                      XXXXXXX, KC_RALT, KC_RGUI, XXXXXXX \
  ),

    /*
     *  _DV: Dvorak Layer
     * ,-----------------------------------------------------------.
     * |ESC | 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  [|  ]| Backsp|
     * |-----------------------------------------------------------|
     * |Tab  |  '|  ,|  .|  P|  Y|  F|  G|  C|  R|  L|  /|  =|    \|
     * |-----------------------------------------------------------|
     * |Ctrl   |  A|  O|  E|  U|  I|  D|  H|  T|  N|  S|  -| Return|
     * |-----------------------------------------------------------|
     * |Shift   |  ;|  Q|  J|  K|  X|  B|  M|  W|  V|  Z| Shift| Fn|
     * |-----------------------------------------------------------|
     * |    |Alt |Gui |           Space             |Gui |Alt |    |
     * `-----------------------------------------------------------'
     */
[_DV] = KEYMAP_HHKB( /* Layer 1: Dvorak */
    ALL_T(KC_ESC), KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV , \
    KC_TAB,        KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_SLSH, KC_EQL,  KC_BSPC , \
    KC_LCTL,       KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_MINS,          KC_ENT  , \
    KC_LSFT,       KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_RSFT,          TT(_FN) , \
    XXXXXXX,       KC_LALT, KC_LGUI,                            KC_SPC,                                      XXXXXXX, KC_RALT, KC_RGUI, XXXXXXX \
  ),

    /*
     *  _FN: Function Layer
     * ,-----------------------------------------------------------.
     * |    |F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|_QW|_DV|
     * |-----------------------------------------------------------|
     * |     |PgU| ^ |PgD|   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |       | < | v | > |   |   | < | v | ^ | > |   |   |       |
     * |-----------------------------------------------------------|
     * |CAPS    |Prv|Ply|Nxt|   |   |   |   |VoD|VoU|Mut|      |   |
     * |-----------------------------------------------------------|
     * |    |    |    |                             |    |    |    |
     * `-----------------------------------------------------------'
     */
[_FN] = KEYMAP_HHKB( /* Layer 3: Functions */
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  M(_QW),  M(_DV),
    _______, KC_PGUP, KC_UP,   KC_PGDN, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_DEL,
    _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,          _______,
    KC_CAPS, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______, _______, KC_VOLD, KC_VOLU, KC_MUTE, _______,          _______,
    _______, _______, _______,                            _______,                                     _______, _______, _______, _______ \
  ),
};

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
      switch(id) {
        case _QW:
          if (record->event.pressed) {
            persistent_default_layer_set(1UL<<_QW);
          }
          break;
        case _DV:
          if (record->event.pressed) {
            persistent_default_layer_set(1UL<<_DV);
          }
          break;
      }
    return MACRO_NONE;
};
