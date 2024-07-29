/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

#include <stdio.h>
#include "keymap_german.h"
#include "sendstring_german.h"
#include "raw_hid.h"

#include QMK_KEYBOARD_H


enum sofle_layers {
    _DEFAULTS = 0,
    _QWERTZ = 0,
    _SYMBOLS,
    _NUMPAD,
    _ARROWS,
    _SETTINGS
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
    * QWERTZ
    * .-----------------------------------------------.                    .-----------------------------------------------.
    * |   ^   |   1   |   2   |   3   |   4   |   5   |                    |   6   |   7   |   8   |   9   |   0   | Bspc  |
    * |-------+-------+-------+-------+-------+-------|                    |-------+-------+-------+-------+-------+-------|
    * |  Esc  |   Q   |   W   |   E   |   R   |   T   |                    |   Z   |   U   |   I   |   O   |   P   |   Ü   |
    * |-------+-------+-------+-------+-------+-------|                    |-------+-------+-------+-------+-------+-------|
    * |  Tab  |   A   |   S   |   D   |   F   |   G   |                    |   H   |   J   |   K   |   L   |   Ö   |   Ä   |
    * |-------+-------+-------+-------+-------+-------|-------.    .-------|-------+-------+-------+-------+-------+-------|
    * | Shift |   Y   |   X   |   C   |   V   |   B   |  MUTE |    |       |   N   |   M   |   ,   |   .   |   /   |   ß   |
    * '-----------------------------------------------|-------|    |-------|-----------------------------------------------'
    *                 |  WIN  |  ALT  |  CTL  |  NUM  | Space |    | Enter | SYMBL |  CTL  | ALTGR | SETTI |
    *                 |       |       |       |       |       /    \       |       |       |       |       |
    *                 \--------------------------------------/      \--------------------------------------/
    */
    [_QWERTZ] = LAYOUT(
    //,------------------------------------------------.                    ,---------------------------------------------------.
        DE_GRV,  DE_1,   DE_2,   DE_3,   DE_4,   DE_5,                         DE_6,  DE_7,   DE_8,   DE_9,   DE_0,  KC_BSPC,
    //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
        KC_ESC, DE_Q,   DE_W,   DE_E,    DE_R,   DE_T,                         DE_Z,  DE_U,   DE_I,   DE_O,   DE_P,  DE_UDIA,
    //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
        KC_TAB, DE_A,   DE_S,   DE_D,    DE_F,   DE_G,                         DE_H,  DE_J,   DE_K,   DE_L,  DE_ODIA, DE_ADIA,
    //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
        KC_LSFT, DE_Y,  DE_X,   DE_C,    DE_V,   DE_B,  KC_MUTE,     KC_NO,    DE_N,  DE_M,  DE_COMM, DE_DOT, DE_SLSH, DE_SS,
    //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
                    KC_LGUI, KC_LALT, KC_LCTL, MO(2), LCTL_T(KC_SPC), LT(3,KC_ENT), LT(1,KC_SPC), KC_RCTL, KC_RALT, MO(4)
    //            \--------+--------+--------+---------+-------|   |--------+---------+--------+---------+-------/
    ),

    /*
    * Symbols
    * .-----------------------------------------------.                    .-----------------------------------------------.
    * |   ^   |   1   |   2   |   3   |   4   |   5   |                    |   6   |   7   |   8   |   9   |   0   | Bspc  |
    * |-------+-------+-------+-------+-------+-------|                    |-------+-------+-------+-------+-------+-------|
    * |  Esc  |   '   |   <   |   >   |   "   |       |                    |       |   &   |   [   |   ]   |   %   |       |
    * |-------+-------+-------+-------+-------+-------|                    |-------+-------+-------+-------+-------+-------|
    * |  Tab  |   !   |   -   |   +   |   =   |   #   |                    |   |   |   :   |   (   |   )   |   ?   |       |
    * |-------+-------+-------+-------+-------+-------|-------.    .-------|-------+-------+-------+-------+-------+-------|
    * | Shift |   ^   |   /   |   *   |   \   |       |  MUTE |    |       |   ~   |   $   |   {   |   }   |   @   |       |
    * '-----------------------------------------------|-------|    |-------|-----------------------------------------------'
    *                 |  WIN  |  ALT  |  CTL  |  NUM  | Space |    | Enter | ARROW |  CTL  | ALTGR | Bspc  |
    *                 |       |       |       |       |       /    \       |       |       |       |       |
    *                 \--------------------------------------/      \--------------------------------------/
    */
    [_SYMBOLS] = LAYOUT(
    //,------------------------------------------------.                    ,---------------------------------------------------.
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
        KC_TRNS, DE_QUOT, KC_LT, KC_GT, KC_DQT, KC_NO,                      KC_NO, KC_AMPR, KC_LBRC, KC_RBRC, KC_PERC, KC_NO,
    //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
        KC_TRNS, KC_EXLM, KC_PMNS, KC_PPLS, DE_EQL, DE_HASH,                KC_PIPE, DE_COLN, DE_LPRN, DE_RPRN, DE_QUES, KC_NO,
    //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
        KC_LSFT, KC_CIRC, DE_SLSH, DE_ASTR, KC_BSLS, KC_NO, KC_TRNS, KC_NO, KC_TILD, DE_DLR,  KC_LCBR, KC_RCBR, KC_AT, KC_NO,
    //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    //            \--------+--------+--------+---------+-------|   |--------+---------+--------+---------+-------/
    ),

    /*
    * Numpad
    * .-----------------------------------------------.                    .-----------------------------------------------.
    * |   ^   |       |       |       |       |       |                    |       |       |       |       |       | Bspc  |
    * |-------+-------+-------+-------+-------+-------|                    |-------+-------+-------+-------+-------+-------|
    * |  Esc  |       |       |       |       |       |                    |       |   7   |   8   |   9   |       |       |
    * |-------+-------+-------+-------+-------+-------|                    |-------+-------+-------+-------+-------+-------|
    * |  Tab  |       |       |       |       |       |                    |       |   4   |   5   |   6   |       |       |
    * |-------+-------+-------+-------+-------+-------|-------.    .-------|-------+-------+-------+-------+-------+-------|
    * | Shift |       |       |       |       |       |  MUTE |    |       |   0   |   1   |   2   |   3   |       |       |
    * '-----------------------------------------------|-------|    |-------|-----------------------------------------------'
    *                 |  WIN  |  ALT  |  CTL  |  NUM  | Space |    | Enter | ARROW |  CTL  | ALTGR | Bspc  |
    *                 |       |       |       |       |       /    \       |       |       |       |       |
    *                 \--------------------------------------/      \--------------------------------------/
    */
    [_NUMPAD] = LAYOUT(
    //,------------------------------------------------.                    ,---------------------------------------------------.
        KC_TRNS, KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_TRNS,
    //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
        KC_TRNS, KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                     KC_NO,   KC_P7,   KC_P8,   KC_P9,   KC_NO,  KC_NO,
    //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
        KC_TRNS, KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                     KC_NO,   KC_P4,   KC_P5,   KC_P6,   KC_NO,  KC_NO,
    //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
        KC_LSFT, KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, KC_TRNS,     KC_NO, KC_P0,   KC_P1,   KC_P2,   KC_P3,   KC_NO,  KC_NO,
    //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    //            \--------+--------+--------+---------+-------|   |--------+---------+--------+---------+-------/
    ),

    /*
    * Arrow
    * .-----------------------------------------------.                    .-----------------------------------------------.
    * |   ^   |       |       |       |       |       |                    |       |       |       |       |       | Bspc  |
    * |-------+-------+-------+-------+-------+-------|                    |-------+-------+-------+-------+-------+-------|
    * |  Esc  |       |       |       |       |       |                    |       |   7   |   8   |   9   |       |       |
    * |-------+-------+-------+-------+-------+-------|                    |-------+-------+-------+-------+-------+-------|
    * |  Tab  |       |       |       |       |       |                    |       |   4   |   5   |   6   |       |       |
    * |-------+-------+-------+-------+-------+-------|-------.    .-------|-------+-------+-------+-------+-------+-------|
    * | Shift |       |       |       |       |       |  MUTE |    |       |   0   |   1   |   2   |   3   |       |       |
    * '-----------------------------------------------|-------|    |-------|-----------------------------------------------'
    *                 |  WIN  |  ALT  |  CTL  |  NUM  | Space |    | Enter | ARROW |  CTL  | ALTGR | Bspc  |
    *                 |       |       |       |       |       /    \       |       |       |       |       |
    *                 \--------------------------------------/      \--------------------------------------/
    */
    [_ARROWS] = LAYOUT(
    //,------------------------------------------------.                    ,---------------------------------------------------.
        KC_TRNS, KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_TRNS,
    //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
        KC_TRNS, KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                     KC_NO,   KC_NO,   KC_UP,   KC_NO,   KC_NO,  KC_NO,
    //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
        KC_TRNS, KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                     KC_NO,   KC_LEFT, KC_DOWN, KC_RIGHT, KC_NO,  KC_NO,
    //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
        KC_LSFT, KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, KC_TRNS,     KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,
    //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    //            \--------+--------+--------+---------+-------|   |--------+---------+--------+---------+-------/
    ),

    /*
    * SETTINGS
    * .-----------------------------------------------.                    .-----------------------------------------------.
    * |  RST  |       |       |       |       | EECLR |                    |       |       |       |       |       | Bspc  |
    * |-------+-------+-------+-------+-------+-------|                    |-------+-------+-------+-------+-------+-------|
    * |  Esc  |       |       |       |       |       |                    |       |   7   |   8   |   9   |       |       |
    * |-------+-------+-------+-------+-------+-------|                    |-------+-------+-------+-------+-------+-------|
    * |       |       |       |       |       |       |                    |       |   4   |   5   |   6   |       |       |
    * |-------+-------+-------+-------+-------+-------|-------.    .-------|-------+-------+-------+-------+-------+-------|
    * |       |       |       |       |       |       |  MUTE |    |       |   0   |   1   |   2   |   3   |       |       |
    * '-----------------------------------------------|-------|    |-------|-----------------------------------------------'
    *                 |       |       |       |       | Space |    | Enter | RGB_T | RGB_U | RGB_D |       |
    *                 |       |       |       |       |       /    \       |       |       |       |       |
    *                 \--------------------------------------/      \--------------------------------------/
    */
    [_SETTINGS] = LAYOUT(
    //,------------------------------------------------.                    ,---------------------------------------------------.
        QK_BOOT, KC_NO,  KC_NO,  KC_NO,  KC_NO,  EE_CLR,                     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_TRNS,
    //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
        KC_TRNS, KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                     KC_NO,   KC_NO,   KC_UP,   KC_NO,   KC_NO,  KC_NO,
    //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
        KC_NO, KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                     KC_NO,   KC_LEFT, KC_DOWN, KC_RIGHT, KC_NO,  KC_NO,
    //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
        KC_NO, KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, KC_TRNS,     KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,
    //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
                    KC_NO,  KC_NO,  KC_NO,  KC_NO, KC_TRNS,     KC_TRNS, RGB_TOG, RGB_MOD, RGB_RMOD, KC_NO
    //            \--------+--------+--------+---------+-------|   |--------+---------+--------+---------+-------/
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    uint8_t msg[32];
    memset(msg, 0, 32);
    msg[0] = keycode;
    msg[1] = record->event.key.col;
    msg[2] = record->event.key.row;
    msg[3] = record->event.pressed;
    msg[4] = (uint8_t) 1337;
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
}

#endif

#ifdef OLED_ENABLE

static void render_logo(void) {
    static const char PROGMEM raw_logo[] = {
        0,  0,192,192,240,240,240,240,240,240,240,243,243,243,241,241,241,243,243,243,243,231,230,206,156, 24, 56, 16,128,128,  0,  0,  0,  7,  7,  1,255,255,255,255,255,255,255,  3,  3,  3,  3,  3,  3,  3,  3,  7,  7, 31,255,255,255,255,254,248,  1,  7,255,252, 63,252,224,128,255,255,255,255,255,255,255,128,128,128,128,128,128,192,192,192,224,248,254,255,255,255,127, 63,128,224,255, 63,  0,  1,  3,  3, 15, 31, 31, 31, 31, 31, 31, 31, 31,159,159,159,159,159,223,207,207,239,103,119, 59, 25, 28, 14,  7,  3,  0,  0,
    };
    oled_write_raw_P(raw_logo, sizeof(raw_logo));
}


static void print_status_narrow(void) {
    switch (get_highest_layer(default_layer_state)) {
        case _QWERTZ:
            oled_write(PSTR("QWERT"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("\n\n"), false);
    // Print current layer
    oled_write_ln_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case _QWERTZ:
            oled_write_P(PSTR("Base\n"), false);
            break;
        case _SYMBOLS:
            oled_write_P(PSTR("Symbl\n"), false);
            break;
        case _NUMPAD:
            oled_write_P(PSTR("Nmpd\n"), false);
            break;
        case _ARROWS:
            oled_write_P(PSTR("Arrw\n"), false);
            break;
        case _SETTINGS:
            oled_write_P(PSTR("Sett\n"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undef"), false);
    }
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_270;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        render_logo();
        oled_set_cursor(0, 5);
        print_status_narrow();
    } else {
        render_logo();
    }
    return false;
}

#endif
