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
            GRV  , 1    , 2    , 3    , 4    , 5    ,
         F2_TAB  , Q    , W    , E    , R    , T    ,
         F1_CAPS , A    , S    , D    , F    , G    ,
            LSFT , Z    , X    , C    , V    , B    ,
            ESC  , LGUI , TAB  , LCTL , SPC  , S_SFT,
        /* right hand */
            6    , 7    , 8    , 9    , 0    , MINS ,
            Y    , U    , I    , O    , P    , F2_LBRC ,
            H    , J    , K    , L    , SCLN , F1_QUOT ,
            N    , M    , COMM , DOT  , SLSH , EQL  ,
            BSPC , ENT  , BSLS , DOWN , UP   , LALT
    ),

    /* symbol */
    [1] = LAYOUT_ortho_5x12(
		/* left hand */
			F1   , F2   , F3   , F4   , F5   , F6   ,
            TRNS ,   9  , LBRC , UP   , RBRC , 0    ,
            TRNS , EQL  , LEFT , DOWN , RGHT , MINS ,
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
        /* right hand */
            F7   , F8   , F9   , F10  , F11  , F12  ,
            BSLS , DEL  , EQL  , PSCR , GRV  , TRNS ,
            PGUP , HOME , END  , PGDN , TRNS , TRNS , 
            TRNS , TRNS , TRNS , TRNS , BSLS , TRNS ,
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS
    ),
    /* fn */
    [2] = LAYOUT_ortho_5x12(
        /* left hand */
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
            TRNS , TRNS , 7    , 8    , 9    , TRNS ,
            TRNS , TRNS , 4    , 5    , 6    , TRNS ,
            TRNS , TRNS , 1    , 2    , 3    , TRNS ,
            TRNS , TRNS , TRNS , 0    , TRNS , TRNS ,
        /* right hand */
			TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
			TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
			TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS 
        ),
    /* fn */
    [3] = LAYOUT_ortho_5x12(
        /* left hand */
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
        /* right hand */
			TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
			TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
			TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS
        )
};

