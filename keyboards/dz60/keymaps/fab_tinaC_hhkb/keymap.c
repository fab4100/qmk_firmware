/* File       : keymap.c */
/* Created    : Sat 29 Dec 2018 11:39:20 PM CET */
/* Author     : Fabian Wermelinger */
/* Description: Tina-C HHKB layout */
/* Copyright 2018 Fabian Wermelinger. All Rights Reserved. */
#include QMK_KEYBOARD_H

// layers
enum Layers { _BASE = 0, _FN, _LIGHTS };

// special keys
enum CustomKeys
{
    RGB_HALO = SAFE_RANGE
};

// clang-format off

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* BASE LAYER
    *
    * ,-----------------------------------------------------------------------------------------.
    * | Esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |  \| | ~ ` |
    * |-----------------------------------------------------------------------------------------+
    * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |    \   |
    * |-----------------------------------------------------------------------------------------+
    * | Ctrl    |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
    * |-----------------------------------------------------------------------------------------+
    * | LShift    |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |  RShift   |  FN |
    * |-----------------------------------------------------------------------------------------+
    * |             FN    |     LAlt  |            Space       |  Esc      |    LIGHTS          |
    * `-----------------------------------------------------------------------------------------'
    */
    [_BASE] = LAYOUT_true_hhkb(
            KC_ESC,         KC_1,    KC_2,   KC_3,   KC_4,    KC_5, KC_6, KC_7, KC_8, KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS,     KC_GRV,
            KC_TAB,         KC_Q,    KC_W,   KC_E,   KC_R,    KC_T, KC_Y, KC_U, KC_I, KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
            LCTL_T(KC_ESC), KC_A,    KC_S,   KC_D,   KC_F,    KC_G, KC_H, KC_J, KC_K, KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
            SC_LSPO,        KC_NO,   KC_Z,   KC_X,   KC_C,    KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT,  KC_SLSH, SC_RSPC, MO(_LIGHTS),
            MO(_FN),        KC_LALT, KC_SPC, KC_ESC, KC_RGUI
            ),

    [_FN] = LAYOUT_true_hhkb(
            QK_BOOT, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, KC_INS,  KC_DEL,
            _______, KC_LCTL, KC_LALT, KC_LSFT, _______, _______, _______, _______, KC_PSCR, KC_LSCR, KC_PAUS, KC_HOME, KC_END, KC_BSPC,
            _______, KC_VOLD, KC_VOLU, KC_MUTE, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_PGDN, KC_PGUP, _______,
            _______, _______, _______, KC_MPLY, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
            _______, KC_LALT, KC_SPC,  KC_ESC,  _______
            ),

    [_LIGHTS] = LAYOUT_true_hhkb(
            RGB_TOG, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, RGB_M_T, _______, _______, _______, _______, _______,
            RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_HALO, _______,  _______, UML_UE,  _______, UML_OE,  _______, _______, _______, _______,
            KC_CAPS, UML_AE,  RGB_SAD, RGB_VAD, _______,  _______,  _______, _______, _______, _______, _______, _______, _______,
            BL_TOGG, RGB_HUD, BL_DOWN, BL_UP,   BL_ON ,   BL_OFF,   BL_BRTG, _______, _______, _______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______
            ),
};

// clang-format on

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
    if (record->event.pressed)
    {
        switch(keycode)
        {
            case RGB_HALO:
                rgblight_enable();
                rgblight_setrgb(255, 241, 224);
                break;
            default:
                break;
        }
    }
    return true;
};
