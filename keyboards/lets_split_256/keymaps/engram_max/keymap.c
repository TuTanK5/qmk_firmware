#include QMK_KEYBOARD_H
#include "g/keymap_combo.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

#define KC_FN1              MO(1)
#define KC_FN2              MO(2)
#define KC_FN1_TT           TT(1)
#define KC_FN3_TT           TT(3)
#define KC_FN1_R            LT(1, KC_R)
#define KC_FN1_N            LT(1, KC_N)
#define KC_FN2_G            LT(2, KC_G)
#define KC_FN2_P            LT(2, KC_P)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* engram */
    [0] = LAYOUT_ortho_5x12(
        /* left hand */
            ESC  , 1    , 2    , 3    , 4    , 5    ,
            TAB  , B    , Y    , O    , U    , QUOT ,
            LSFT , FN1_R, I    , E    , A    , COMM ,
            FN3_TT, FN2_G, X    , J    , K    , MINS ,
            FN1_TT, LGUI, LALT , LCTL, SPC  , LPRN ,
        /* right hand */
            6    , 7    , 8    , 9    , 0    , PSCR ,
            DQT  , L    , D    , W    , V    , SLSH ,
            DOT  , H    , T    , S    , FN1_N, RSFT,
            EQL  , C    , M    , F    , FN2_P, ENT  ,
            RPRN , BSPC , RCTL , Q    , Z    , RALT
    ),

    /* fn */
    [1] = LAYOUT_ortho_5x12(
        /* left hand */
            TRNS , F1   , F2   , F3   , F4   , F5   ,
            CLCK , MUTE , VOLU , UP   , HOME , TRNS ,
            TRNS , TRNS , LEFT , DOWN , RIGHT, TRNS ,
            TRNS , TRNS , VOLD , TRNS , END  , TRNS ,
            TRNS , TRNS , TRNS , TRNS , TRNS , LCBR ,
        /* right hand */
            F6   , F7   , F8   , F9   , F10  , F11  ,
            INS  , HOME , UP   , PGUP , PAUS , F12  ,
            DEL  , LEFT , DOWN , RIGHT, TRNS , TRNS ,
            SLCK , END  , MENU , PGDN , TRNS , TRNS ,
            RCBR , TRNS , TRNS , TRNS , TRNS , TRNS
    ),
    /* symbols */
    [2] = LAYOUT_ortho_5x12(
        /* left hand */
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
            TRNS , TRNS , TRNS , TRNS , AT   , LT   ,
            TRNS , EXLM , QUES , AMPR , DLR  , SCLN ,
            TRNS , TRNS , TRNS , TRNS , TRNS , UNDS ,
            TRNS , TRNS , TRNS , TRNS , TRNS , LBRC ,
        /* right hand */
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
            GT   , ASTR , GRV  , TILD , TRNS , BSLS ,
            COLN , HASH , PIPE , CIRC , PERC , TRNS ,
            PLUS , TRNS , TRNS , TRNS , TRNS , TRNS ,
            RBRC , TRNS , TRNS , TRNS , TRNS , TRNS
        ),
    /* numbers */
    [3] = LAYOUT_ortho_5x12(
        /* left hand */
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
            TRNS , TRNS , TRNS , UP   , TRNS , TRNS ,
            TRNS , TRNS , LEFT , DOWN , RIGHT, TRNS ,
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
        /* right hand */
			TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
			TRNS , 7    , 8    , 9    , TRNS , TRNS ,
			TRNS , 4    , 5    , 6    , TRNS , TRNS ,
            TRNS , 1    , 2    , 3    , TRNS , TRNS ,
            TRNS , TRNS , TRNS , 0    , TRNS , TRNS
        )
};
