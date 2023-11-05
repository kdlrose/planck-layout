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
    /* Qwerty
    * ,-----------------------------------------------------------------------------------.
    * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  '   |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * | Fn   | Ctrl | Alt  | GUI  | Lower| Vim  |Space |Raise | Left | Down |  Up  |Right |
    * `-----------------------------------------------------------------------------------'
    */
    [_QWERTY] = LAYOUT_planck_grid(
        KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_BSPC,
        KC_ESC,     KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,
        KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_ENT,
        FN,         KC_LCTL,    KC_LGUI,    KC_LALT,    LOWER,      VIM,        KC_SPC,     RAISE,      KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT
    ),
    /* Lower
    * ,-----------------------------------------------------------------------------------.
    * |   ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Del  |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |      |      |      |      |   _  |   +  |   {  |   }  |  |   |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |      |      |      |      |      |      |      |      |      |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |      |      |      |      |Adjust| Mute | Vol- | Vol+ | Play |
    * `-----------------------------------------------------------------------------------'
    */
    [_LOWER] = LAYOUT_planck_grid(
        KC_TILD,    KC_EXLM,    KC_AT,      KC_HASH,    KC_DLR,     KC_PERC,    KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_LPRN,    KC_RPRN,     KC_DEL,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_UNDS,    KC_PLUS,    KC_LCBR,    KC_RCBR,     KC_PIPE,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    ADJUST,     KC_MUTE,    KC_VOLD,    KC_VOLU,     KC_MPLY
    ),
    /* Raise
    * ,-----------------------------------------------------------------------------------.
    * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Del  |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |      |      |      |      |   -  |   =  |   [  |   ]  |  \   |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |      |      |      |      |      |      |      |      |      |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |      |Adjust|      |      |      |      |      |      |      |
    * `-----------------------------------------------------------------------------------'
    */
    [_RAISE] = LAYOUT_planck_grid(
        KC_GRV,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_9,       KC_0,        KC_DEL,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_MINS,    KC_EQL,     KC_LBRC,    KC_RBRC,     KC_BSLS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    ADJUST,     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS
    ),
    /* Vim
    * ,-----------------------------------------------------------------------------------.
    * |      |      |      |      |      |      |      |      |      |      |      |      |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |      | Pg Dn| Home | Left | Down |  Up  |Right |      |      |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |      |      | Pg Up|  End |      |      |      |      |      |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |      |      |      |      |      |      |      |      |      |
    * `-----------------------------------------------------------------------------------'
    */
    [_VIM] = LAYOUT_planck_grid(
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_PGDN,    KC_HOME,    KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT,    KC_TRNS,     KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_PGUP,    KC_END,     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS
    ),
    /* Function
    * ,-----------------------------------------------------------------------------------.
    * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  | F10  | F11  | F12  |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |      |      |      |      |      |      |      |      |      |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |      |      |      |      |      |      |      |      |      |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |      |      |      |      |      |      |      |      |      |
    * `-----------------------------------------------------------------------------------'
    */
    [_FUNCTION] = LAYOUT_planck_grid(
        KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,      KC_F12,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS
    ),
    /* Adjust (Lower + Raise)
    *                      v------------------------RGB CONTROL--------------------v
    * ,-----------------------------------------------------------------------------------.
    * |      | Reset|Debug | RGB  |RGBMOD| HUE+ | HUE- | SAT+ | SAT- |BRGTH+|BRGTH-|      |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |MUSmod|Aud on|Audoff|AGnorm|AGswap|      |      |      |      |      |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |Voice-|Voice+|Mus on|Musoff|MIDIon|MIDIof|      |      |      |      |      |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |      |      |      |      |      |CELLO |      |      | GTR  |
    * `-----------------------------------------------------------------------------------'
    */
    [_ADJUST] = LAYOUT_planck_grid(
        KC_NO,      QK_BOOT,    DB_TOGG,    RGB_TOG,    RGB_MOD,    RGB_HUI,    RGB_HUD,    RGB_SAI,    RGB_SAD,    RGB_VAI,    RGB_VAD,    KC_NO,
        KC_NO,      KC_NO,      MU_NEXT,    AU_ON,      AU_OFF,     KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
        KC_NO,      AU_NEXT,    AU_PREV,    MU_ON,      MU_OFF,     MI_ON,      MI_OFF,     KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    CELLO,      KC_TRNS,    KC_TRNS,    GUITAR
    ),
    /* Cello
    * ,-----------------------------------------------------------------------------------.
    * |  C4  |  Db4 |  D4  |  Eb4 |  E4  |  F4  |  Gb4 |  G4  |  Ab4 |  A4  | Bb4  |  B4  |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |  C3  |  Db3 |  D3  |  Eb3 |  E3  |  F3  |  Gb3 |  G3  |  Ab3 |  A3  | Bb3  |  B3  |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |  C2  |  Db2 |  D2  |  Eb2 |  E2  |  F2  |  Gb2 |  G2  |  Ab2 |  A2  | Bb2  |  B2  |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |  Fn  |      |      |  Vim | Lower|      |      |Raise |close | OCT- | OCT+ | GTR  |
    * `-----------------------------------------------------------------------------------'
    */
    [_CELLO] = LAYOUT_planck_grid(
        MI_C2,      MI_Cs2,     MI_D2,      MI_Ds2,     MI_E2,      MI_F2,      MI_Fs2,     MI_G2,      MI_Gs2,     MI_A2,      MI_As2,     MI_B2,
        MI_C1,      MI_Cs1,     MI_D1,      MI_Ds1,     MI_E1,      MI_F1,      MI_Fs1,     MI_G1,      MI_Gs1,     MI_A1,      MI_As1,     MI_B1,
        MI_C,       MI_Cs,      MI_D,       MI_Ds,      MI_E,       MI_F,       MI_Fs,      MI_G,       MI_Gs,      MI_A,       MI_As,      MI_B,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    MI_OCTD,    MI_OCTU,    KC_TRNS
    ),
    /* Guitar
    * ,-----------------------------------------------------------------------------------.
    * |  E4  |  F4  |  F#4 |  G4  |  G#4 |  A4  | A#4  |  B4  |  C5  |  C#5 |  D5  | D#5  |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |  E3  |  F3  |  F#3 |  G3  |  G#3 |  A3  | A#3  |  B3  |  C4  |  C#4 |  D4  | D#4  |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |  E2  |  F2  |  F#2 |  G2  |  G#2 |  A2  | A#2  |  B2  |  C3  |  C#3 |  D3  | D#3  |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |  Fn  |      |      |  Vim | Lower|      |      |Raise |CELLO | OCT- | OCT+ |close |
    * `-----------------------------------------------------------------------------------'
    */
    [_GUITAR] = LAYOUT_planck_grid(
        MI_E2,      MI_F2,      MI_Fs2,     MI_G2,      MI_Gs2,     MI_A2,      MI_As2,     MI_B2,      MI_C3,      MI_Cs3,     MI_D3,      MI_Ds3,
        MI_E1,      MI_F1,      MI_Fs1,     MI_G1,      MI_Gs1,     MI_A1,      MI_As1,     MI_B1,      MI_C2,      MI_Cs2,     MI_D2,      MI_Ds2,
        MI_E,       MI_F,       MI_Fs,      MI_G,       MI_Gs,      MI_A,       MI_As,      MI_B,       MI_C1,      MI_Cs1,     MI_D1,      MI_Ds1,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS
    )
};
