#include QMK_KEYBOARD_H
#include <stdio.h>
#include "color.h"
#include "keymap_german.h"
#include "sendstring_german.h"
#include "raw_hid.h"

enum sofle_layers {
    _NOTED = 0,
    _QWERTZ,
    _SYMBOLS,
    _NUMPAD,
    _FKEYS,
    _SETUP,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_NOTED] = LAYOUT(
        LT(_SETUP, KC_ESC), DE_1, DE_2, DE_3, DE_4, DE_5,                   DE_6, DE_7, DE_8, DE_9, DE_0, KC_BSPC,
        KC_TAB, DE_Z, DE_Y, DE_U, DE_A, DE_Q,                               DE_P, DE_B, DE_M, DE_L, DE_F, DE_J,
        KC_LSFT, DE_C, DE_S, DE_I, DE_E, DE_O,                              DE_D, DE_T, DE_N, DE_R, DE_H, DE_SS,
        KC_LCTL, DE_V, DE_X, DE_UDIA, DE_ADIA, DE_ODIA, KC_MUTE,    DF(_QWERTZ), DE_W, DE_G, DE_COMM, DE_DOT, DE_K, DE_GRV,
        MO(_FKEYS), MO(_NUMPAD), KC_LGUI, KC_LALT, LT(_SYMBOLS, KC_SPC),    KC_ENT, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT),

    [_QWERTZ] = LAYOUT(
        LT(_SETUP, KC_ESC), DE_1, DE_2, DE_3, DE_4, DE_5,                   DE_6, DE_7, DE_8, DE_9, DE_0, KC_BSPC,
        KC_TAB, DE_Q, DE_W, DE_E, DE_R, DE_T,                               DE_Z, DE_U, DE_I, DE_O, DE_P, DE_UDIA,
        KC_LSFT, DE_A, DE_S, DE_D, DE_F, DE_G,                              DE_H, DE_J, DE_K, DE_L, DE_ODIA, DE_ADIA,
        KC_LCTL, DE_Y, DE_X, DE_C, DE_V, DE_B, KC_NO,               DF(_NOTED), DE_N, DE_M, DE_COMM, DE_DOT, DE_MINS, KC_RSFT,
        MO(_FKEYS), MO(_NUMPAD), KC_LGUI, KC_LALT, LT(_SYMBOLS, KC_SPC),    KC_ENT, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT),

    [_SYMBOLS] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                           KC_HOME, KC_PGUP, KC_PGDN, KC_END, KC_NO, KC_TRNS,
        KC_TRNS, DE_QUOT, KC_LT, KC_GT, DE_DQUO, DE_DOT,                      DE_AMPR, KC_NO, DE_LBRC, DE_RBRC, DE_PERC, KC_NO,
        KC_TRNS, DE_EXLM, KC_PMNS, KC_PPLS, DE_EQL, KC_NUHS,                  DE_PIPE, DE_COLN, DE_LPRN, DE_RPRN, DE_QUES, KC_NO,
        KC_TRNS, KC_CIRC, DE_SLSH, DE_ASTR, KC_BSLS, KC_NO, KC_NO,    KC_NO, DE_TILD, DE_DLR, DE_LCBR, DE_RCBR, KC_AT, KC_NO,
                      KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

    [_NUMPAD] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                           KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                           KC_NO, KC_P7, KC_P8, KC_P9, KC_PMNS, KC_NO,
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                           KC_NO, KC_P4, KC_P5, KC_P6, KC_PPLS, KC_NO,
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,            KC_NO, KC_P0, KC_P1, KC_P2, KC_P3, KC_NO, KC_NO,
                      KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

    [_FKEYS] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                           KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                           KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_NO,
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                           KC_NO,KC_F5, KC_F6, KC_F7, KC_F8, KC_NO,
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,            KC_NO, KC_NO, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO,
                      KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

    [_SETUP] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                           KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_TOG,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                           RGB_HUD, RGB_HUI, KC_NO, KC_NO, RGB_RMOD, RGB_MOD,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                           RGB_SAD, RGB_SAI, KC_NO, KC_NO, RGB_SPD, RGB_SPI,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,            KC_NO, RGB_VAD, RGB_VAI, KC_NO, KC_NO, KC_NO, KC_NO,
                      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    uint8_t msg[32];
    memset(msg, 0, 32);
    msg[0] = record->event.key.col;
    msg[1] = record->event.key.row;
    msg[2] = record->event.pressed;
    msg[3] = keycode >> 8;
    msg[4] = keycode & 0xff;
    raw_hid_send(msg, 32);
    return true;
};

#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
	} else if (index == 1) {
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    }
    return true;
};

#endif

#ifdef OLED_ENABLE

static void render_logo(void) {
    static const char PROGMEM raw_logo[] = {
        0,  0,192,192,240,240,240,240,240,240,240,243,243,243,241,241,241,243,243,243,243,231,230,206,156, 24, 56, 16,128,128,  0,  0,  0,  7,  7,  1,255,255,255,255,255,255,255,  3,  3,  3,  3,  3,  3,  3,  3,  7,  7, 31,255,255,255,255,254,248,  1,  7,255,252, 63,252,224,128,255,255,255,255,255,255,255,128,128,128,128,128,128,192,192,192,224,248,254,255,255,255,127, 63,128,224,255, 63,  0,  1,  3,  3, 15, 31, 31, 31, 31, 31, 31, 31, 31,159,159,159,159,159,223,207,207,239,103,119, 59, 25, 28, 14,  7,  3,  0,  0,
    };
    oled_write_raw_P(raw_logo, sizeof(raw_logo));
};

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_270;
};

static void print_status_narrow(void) {
    switch (get_highest_layer(default_layer_state)) {
        case _QWERTZ:
            oled_write(PSTR("QWRTZ\n"), false);
            break;
        case _NOTED:
            oled_write(PSTR("NOTED\n"), false);
            break;
        default:
            oled_write_ln_P(PSTR("UNDEF"), false);
    }
    oled_write_P(PSTR("-----"), false);
    oled_write_P(PSTR("\n\n"), false);

    oled_write_ln_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case _QWERTZ:
        case _NOTED:
            oled_write_P(PSTR("Base\n"), false);
            break;
        case _SYMBOLS:
            oled_write_P(PSTR("Symbl\n"), false);
            break;
        case _NUMPAD:
            oled_write_P(PSTR("Nmpd\n"), false);
            break;
        case _FKEYS:
            oled_write_P(PSTR("FKeys\n"), false);
            break;
        case _SETUP:
            oled_write_P(PSTR("Setup\n"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undef"), false);
    }
};

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        render_logo();
        oled_set_cursor(0, 5);
        print_status_narrow();
    } else {
        render_logo();
    }
    return false;
};

#endif


