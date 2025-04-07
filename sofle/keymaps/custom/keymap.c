#include QMK_KEYBOARD_H
#include "keymap_german.h"
#include "sendstring_german.h"
#include "color.h"
#include "raw_hid.h"

enum layers {
    _CNRY = 0,
    _QWRTZ,
    _SYMBLS,
    _NMPD,
    _NVGTN,
    _STP,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_CNRY] = LAYOUT(
        KC_ESC, DE_1, DE_2, DE_3, DE_4, DE_5,                                           DE_6, DE_7, DE_8, DE_9, DE_0, KC_BSPC,
        KC_TAB, DE_W, DE_L, DE_Y, DE_P, DE_B,                                           DE_Z, DE_F, DE_O, DE_U, DE_ODIA, DE_ADIA,
        KC_LSFT, DE_C, DE_R, DE_S, DE_T, DE_G,                                          DE_M, DE_N, DE_E, DE_I, DE_A, DE_UDIA,
        KC_LCTL, DE_Q, DE_J, DE_V, DE_D, DE_K, DF(_STP),                            DF(_QWRTZ), DE_X, DE_H, DE_SS, DE_COMM, DE_DOT, KC_RSFT,
                KC_LALT, KC_LGUI, MO(_NVGTN), MO(_NMPD), LCTL_T(KC_SPC),            KC_ENT, MO(_SYMBLS), KC_NO, KC_NO, KC_NO),

    [_QWRTZ] = LAYOUT(
        KC_ESC, DE_1, DE_2, DE_3, DE_4, DE_5,                                           DE_6, DE_7, DE_8, DE_9, DE_0, KC_BSPC,
        KC_TAB, DE_Q, DE_W, DE_E, DE_R, DE_T,                                           DE_Z, DE_U, DE_I, DE_O, DE_P, DE_UDIA,
        KC_LSFT, DE_A, DE_S, DE_D, DE_F, DE_G,                                          DE_H, DE_J, DE_K, DE_L, DE_ODIA, DE_ADIA,
        KC_LCTL, DE_Y, DE_X, DE_C, DE_V, DE_B, DF(_STP),                            DF(_CNRY), DE_N, DE_M, DE_COMM, DE_DOT, DE_MINS, KC_RSFT,
                KC_LALT, KC_LGUI, MO(_NVGTN), MO(_NMPD), LCTL_T(KC_SPC),            KC_ENT, MO(_SYMBLS), KC_NO, KC_NO, KC_NO),

    [_SYMBLS] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                       KC_HOME, KC_PGUP, KC_PGDN, KC_END, KC_NO, KC_TRNS,
        KC_TRNS, DE_QUOT, DE_AMPR, KC_NO, DE_DQUO, DE_DOT,                              DE_LABK, DE_LPRN, DE_LBRC, DE_LCBR, DE_PERC, KC_NO,
        KC_TRNS, DE_EXLM, KC_PMNS, KC_PPLS, DE_EQL, KC_NUHS,                            DE_RABK, DE_RPRN, DE_RBRC, DE_RCBR, DE_QUES, KC_NO,
        KC_TRNS, DE_CIRC, DE_SLSH, DE_ASTR, KC_BSLS, KC_NO, KC_NO,                  KC_NO, DE_TILD, DE_DLR, DE_PIPE, DE_GRV, KC_AT, KC_NO,
                KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

    [_NMPD] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
        KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_NO,                                     KC_NO, KC_P7, KC_P8, KC_P9, KC_PMNS, KC_NO,
        KC_TRNS, KC_F5, KC_F6, KC_F7, KC_F8, KC_NO,                                     KC_NO, KC_P4, KC_P5, KC_P6, KC_PPLS, KC_NO,
        KC_TRNS, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO,                       KC_NO, KC_P0, KC_P1, KC_P2, KC_P3, KC_NO, KC_NO,
                KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

    [_NVGTN] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                       KC_NO, KC_NO, KC_UP, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                       KC_NO, KC_LEFT, KC_DOWN, KC_RIGHT, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

    [_STP] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_TOG,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                       RGB_HUD, RGB_HUI, KC_NO, KC_NO, RGB_RMOD, RGB_MOD,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                       RGB_SAD, RGB_SAI, KC_NO, KC_NO, RGB_SPD, RGB_SPI,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                            DF(_CNRY), RGB_VAD, RGB_VAI, KC_NO, KC_NO, KC_NO, KC_NO,
                KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
};


void post_process_record_user(uint16_t keycode, keyrecord_t *record) {
    uint8_t msg[32];
    memset(msg, 0, 32);
    msg[0] = record->event.key.col;
    msg[1] = record->event.key.row;
    msg[2] = record->event.pressed;
    msg[3] = get_highest_layer(default_layer_state);
    msg[4] = get_highest_layer(layer_state);
    raw_hid_send(msg, 32);
}

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

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_270;
};

static void print_status_narrow(void) {
    switch (get_highest_layer(default_layer_state)) {
        case _CNRY:
            oled_write(PSTR("CNRY\n"), false);
            break;
        case _QWRTZ:
            oled_write(PSTR("QWRTZ\n"), false);
            break;
        default:
            oled_write(PSTR("UNDEF\n"), false);
    }
    oled_write_P(PSTR("-----"), false);
    oled_write_P(PSTR("\n\n"), false);

    oled_write_ln_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case _CNRY:
        case _QWRTZ:
            oled_write_P(PSTR("Base\n"), false);
            break;
        case _SYMBLS:
            oled_write_P(PSTR("Symbl\n"), false);
            break;
        case _NMPD:
            oled_write_P(PSTR("Nmpd\n"), false);
            break;
        case _NVGTN:
            oled_write_P(PSTR("Nvgtn\n"), false);
            break;
        case _STP:
            oled_write_P(PSTR("Setup\n"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undef"), false);
    }
};

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_set_cursor(0, 5);
        print_status_narrow();
    }

    return false;
};

#endif


