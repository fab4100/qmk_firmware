/*  -*-  eval: (turn-on-orgtbl); -*-
 * default HHKB Layout
 */
#include QMK_KEYBOARD_H

// layers
enum Layers
{
    _DEFAULT = 0,
    _FN,
    _MAC
};

// special keys
/* enum CustomKeys */
/* { */
/*     RGB_HALO = SAFE_RANGE */
/* }; */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_DEFAULT] = LAYOUT(
            KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS, KC_GRV,
            KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSPC,
            MT(MOD_LCTL, KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
            KC_LSPO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSPC, MO(_FN),
            MO(_FN), KC_LALT, LT(_MAC,KC_SPC), KC_ESC, KC_RGUI
            ),

    [_FN] = LAYOUT(
            _______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_INS, _______,
            _______, _______, _______, _______, _______, _______, _______, _______, KC_PSCR, KC_SLCK, KC_PAUS, KC_HOME, _______, KC_DEL,
            KC_CAPS, KC_VOLD, KC_VOLU, KC_MUTE, _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_PGDN, KC_PGUP, _______,
            _______, _______, KC_MPLY, _______, _______, _______, _______, _______, _______, _______, KC_END, _______, _______,
            _______, _______, _______, _______, _______
            ),

    /* [_MAC] = LAYOUT( */
    /*         _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, */
    /*         _______, _______, _______, _______, _______, _______, _______, _______, KC_PSCR, KC_SLCK, KC_PAUS, KC_HOME, _______, KC_DEL, */
    /*         KC_CAPS, KC_VOLD, KC_VOLU, KC_MUTE, _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_PGDN, KC_PGUP, _______, */
    /*         _______, _______, KC_MPLY, _______, _______, _______, _______, _______, _______, _______, KC_END, _______, _______, */
    /*         KC_LGUI, _______, _______, _______, _______ */
    /*         ), */
};
