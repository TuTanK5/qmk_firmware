#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

#define KC_FN             MO(1)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_ortho_5x12(
        /* left hand */
            ESC  , 1    , 2    , 3    , 4    , 5    ,
            TAB  , Q    , W    , E    , R    , T    ,
            CAPS , A    , S    , D    , F    , G    ,
            LSFT , Z    , X    , C    , V    , B    ,
            LCTL , LGUI , LALT , BSPC , FN  , SPACE,
        /* right hand */
            6    , 7    , 8    , 9    , 0    , MINS ,
            Y    , U    , I    , O    , P    , BSLS ,
            H    , J    , K    , L    , SCLN , QUOT ,
            N    , M    , COMM , DOT  , SLSH , RSFT ,
            SPACE, FN  , BSPC , RALT , RCTL , DEL
    ),

    /* fn */
    [1] = LAYOUT_ortho_5x12(
        /* left hand */
            GRAVE, F1   , F2   , F3   , F4   , F5   ,
            TRNS , TRNS , UP   , LBRC , RBRC , EQUAL,
            TRNS , LEFT , DOWN , RIGHT, MUTE , VOLU ,
            TRNS , MSTP , MPRV , MNXT , MPLY , VOLD ,
            TRNS , TRNS , TRNS , TRNS , TRNS , ENT  ,
        /* right hand */
            F6   , F7   , F8   , F9   , F10  , F11  ,
            PSCR , SLCK , PAUS , TRNS , UP   , F12  ,
            INS  , HOME , PGUP , LEFT , DOWN , RIGHT,
            DEL  , END  , PGDN , MSTP , MPLY , TRNS ,
            ENT  , TRNS , TRNS , TRNS , TRNS , TRNS
    ),
    /* fn */
    [2] = LAYOUT_ortho_5x12(
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

