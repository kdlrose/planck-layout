#include QMK_KEYBOARD_H

enum planck_layers {
    _QWERTY,
    _LOWER,
    _RAISE,
    _VIM,
    _FUNCTION,
    _ADJUST,
    _CELLO,
    _GUITAR
};

enum planck_keycodes {
    QWERTY = SAFE_RANGE
};

#define LOWER   MO(_LOWER)
#define RAISE   MO(_RAISE)
#define VIM     MO(_VIM)
#define FN      MO(_FUNCTION)
#define ADJUST  MO(_ADJUST)
#define CELLO   TG(_CELLO)
#define GUITAR  TG(_GUITAR)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_planck_grid(
        KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_BSPC,
        KC_ESC,     KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,
        KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_ENT,
        FN,         KC_LCTL,    KC_LGUI,    KC_LALT,    LOWER,      VIM,        KC_SPC,     RAISE,      KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT
    ),
    [_LOWER] = LAYOUT_planck_grid(
        KC_TILD,    KC_EXLM,    KC_AT,      KC_HASH,    KC_DLR,     KC_PERC,    KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_LPRN,    KC_RPRN,     KC_DEL,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_UNDS,    KC_PLUS,    KC_LCBR,    KC_RCBR,     KC_PIPE,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    ADJUST,     KC_MUTE,    KC_VOLD,    KC_VOLU,     KC_MPLY
    ),
    [_RAISE] = LAYOUT_planck_grid(
        KC_GRV,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_9,       KC_0,        KC_DEL,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_MINS,    KC_EQL,     KC_LBRC,    KC_RBRC,     KC_BSLS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    ADJUST,     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS
    ),
    [_VIM] = LAYOUT_planck_grid(
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_BSPC,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_PGDN,    KC_HOME,    KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT,    KC_TRNS,     KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_PGUP,    KC_END,     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS
    ),
    [_FUNCTION] = LAYOUT_planck_grid(
        KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS
    ),
    [_ADJUST] = LAYOUT_planck_grid(
        KC_NO,      QK_BOOT,    DB_TOGG,    RGB_TOG,    RGB_MOD,    RGB_HUI,    RGB_HUD,    RGB_SAI,    RGB_SAD,    RGB_VAI,    RGB_VAD,    KC_NO,
        KC_NO,      KC_NO,      MU_NEXT,    AU_ON,      AU_OFF,     KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
        KC_NO,      AU_NEXT,    AU_PREV,    MU_ON,      MU_OFF,     MI_ON,      MI_OFF,     KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    CELLO,      MI_OCTD,    MI_OCTU,    GUITAR
    ),
    [_CELLO] = LAYOUT_planck_grid(
        MI_C4,      MI_Cs4,     MI_D4,      MI_Ds4,     MI_E4,      MI_F4,      MI_Fs4,     MI_G4,      MI_Gs4,     MI_A5,      MI_As5,     MI_B5,
        MI_C3,      MI_Cs3,     MI_D3,      MI_Ds3,     MI_E3,      MI_F3,      MI_Fs3,     MI_G3,      MI_Gs3,     MI_A4,      MI_As4,     MI_B4,
        MI_C2,      MI_Cs2,     MI_D2,      MI_Ds2,     MI_E2,      MI_F2,      MI_Fs2,     MI_G2,      MI_Gs2,     MI_A3,      MI_As3,     MI_B3,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS
    ),
    [_GUITAR] = LAYOUT_planck_grid(
        MI_E4,      MI_F4,      MI_Fs4,     MI_G4,      MI_Gs4,     MI_A5,      MI_As5,     MI_B5,      MI_C5,      MI_Cs5,     MI_D5,      MI_Ds5,
        MI_E3,      MI_F3,      MI_Fs3,     MI_G3,      MI_Gs3,     MI_A4,      MI_As4,     MI_B4,      MI_C4,      MI_Cs4,     MI_D4,      MI_Ds4,
        MI_E2,      MI_F2,      MI_Fs2,     MI_G2,      MI_Gs2,     MI_A3,      MI_As3,     MI_B3,      MI_C3,      MI_Cs3,     MI_D3,      MI_Ds3,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS
    )
};
