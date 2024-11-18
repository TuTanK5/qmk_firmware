#include QMK_KEYBOARD_H

#define KC_W_CAP          MT(MOD_LGUI, KC_CAPS)
#define KC_S_SFT          OSM(MOD_LSFT)

#define KC_F1_CAPS        LT(1, KC_CAPS)
#define KC_F1_QUOT        LT(1, KC_QUOTE)
#define KC_F2_TAB         LT(2, KC_TAB)
#define KC_F2_LBRC        LT(2, KC_LBRACKET)

combo_t key_combos[COMBO_COUNT] = {};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_ortho_5x12(
        /* left hand */
            KC_GRV  , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    ,
        KC_F2_TAB   , KC_Q    , KC_W    , KC_E    , KC_R    , KC_T    ,
        KC_F1_CAPS  , KC_A    , KC_S    , KC_D    , KC_F    , KC_G    ,
            KC_LSFT , KC_Z    , KC_X    , KC_C    , KC_V    , KC_B    ,
            KC_ESC  , KC_LGUI , KC_TAB  , KC_LCTL , KC_SPC  , KC_LSFT,
        /* right hand */
            KC_6    , KC_7    , KC_8    , KC_9    , KC_0    , KC_MINS ,
            KC_Y    , KC_U    , KC_I    , KC_O    , KC_P    , KC_LBRC ,
            KC_H    , KC_J    , KC_K    , KC_L    , KC_SCLN , KC_QUOT ,
            KC_N    , KC_M    , KC_COMM , KC_DOT  , KC_SLSH , KC_EQL  ,
            KC_BSPC , KC_ENT  , KC_BSLS , KC_DOWN , KC_UP   , KC_LALT
    ),

    /* symbol */
    [1] = LAYOUT_ortho_5x12(
		/* left hand */
			KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   , KC_F6   ,
            KC_TRNS , KC_9    , KC_LBRC , KC_UP   , KC_RBRC , KC_0    ,
            KC_TRNS , KC_EQL  , KC_LEFT , KC_DOWN , KC_RGHT , KC_MINS ,
            KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,
            KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,
        /* r_ight hand */
            KC_F7   , KC_F8   , KC_F9   , KC_F10  , KC_F11  , KC_F12  ,
            KC_BSLS , KC_DEL  , KC_EQL  , KC_PSCR , KC_GRV  , KC_TRNS ,
            KC_PGUP , KC_HOME , KC_END  , KC_PGDN , KC_TRNS , KC_TRNS , 
            KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_BSLS , KC_TRNS ,
            KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS
    ),
    /* fn */
    [2] = LAYOUT_ortho_5x12(
        /* left hand */
            KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,
            KC_TRNS , KC_TRNS , KC_7    , KC_8    , KC_9    , KC_TRNS ,
            KC_TRNS , KC_TRNS , KC_4    , KC_5    , KC_6    , KC_TRNS ,
            KC_TRNS , KC_TRNS , KC_1    , KC_2    , KC_3    , KC_TRNS ,
            KC_TRNS , KC_TRNS , KC_TRNS , KC_0    , KC_TRNS , KC_TRNS ,
        /* right hand */
            KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,
            KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,
            KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,
            KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,
            KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS 
        ),
    /* fn */
    [3] = LAYOUT_ortho_5x12(
        /* left hand */
            KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,
            KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,
            KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,
            KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,
            KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,
        /* right hand */
            KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,
            KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,
            KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,
            KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,
            KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS
        )
};

