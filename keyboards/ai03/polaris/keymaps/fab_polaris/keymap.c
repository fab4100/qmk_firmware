// File       : keymap.c
// Created    : Wed Jan 03 2024 17:53:57 (+0100)
// Author     : Fabian Wermelinger
// Description: Custom polaris layout
// Copyright 2024 Fabian Wermelinger. All Rights Reserved.
#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _FN
};

// clang-format off

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* BASE LAYER
    *
    * ,-----------------------------------------------------------------------------------------.
    * | Esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |  \| | ~ ` |
    * |-----------------------------------------------------------------------------------------+
    * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |  BSPC  |
    * |-----------------------------------------------------------------------------------------+
    * | Ctrl    |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
    * |-----------------------------------------------------------------------------------------+
    * | LShift    |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |      RShift     |
    * |-----------------------------------------------------------------------------------------+
    * | LGUI  |  FN  |  LAlt  |              Space            |  Esc  |  RGUI  |  APP  |  RCtl  |
    * `-----------------------------------------------------------------------------------------'
    */
    [_BASE] = LAYOUT_all(
            KC_ESC,         KC_1,    KC_2,    KC_3,   KC_4,   KC_5,   KC_6,   KC_7,    KC_8,   KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
            KC_TAB,         KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,    KC_I,   KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
            LCTL_T(KC_ESC), KC_A,    KC_S,    KC_D,   KC_F,   KC_G,   KC_H,   KC_J,    KC_K,   KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
            SC_LSPO,        KC_NO,   KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,   KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH, SC_RSPC, KC_NO,
            KC_LGUI,        MO(_FN), KC_LALT, KC_SPC, KC_SPC, KC_SPC, KC_ESC, KC_RGUI, KC_APP, KC_RCTL
            ),

    [_FN] = LAYOUT_all(
            QK_BOOT, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, KC_INS, KC_DEL,
            _______, KC_LCTL, KC_LALT, KC_DEL,  _______, _______, _______, _______, KC_PSCR, KC_LSCR, KC_PAUS, KC_HOME, KC_END, KC_BSPC,
            KC_CAPS, KC_VOLD, KC_VOLU, KC_MUTE, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_PGDN, KC_PGUP, _______,
            BL_STEP, _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, _______, _______,
            _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
            ),
};

// clang-format on
