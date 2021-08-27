#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

#define KC_FN1              MO(1)
#define KC_FN2              MO(2)
#define KC_FN1_TT           TT(1)
#define KC_FN3_TT           TT(3)
#define KC_S_LCTL           OSM(MOD_LCTL)
#define KC_S_RCTL           OSM(MOD_RCTL)
#define KC_S_LGUI           OSM(MOD_LGUI)
#define KC_FN1_R            LT(1, KC_R)
#define KC_FN1_N            LT(1, KC_N)
#define KC_FN2_G            LT(2, KC_G)
#define KC_FN2_P            LT(2, KC_P)

// Tap Dance declarations
enum {
    TD_QTLT,    // quote            ,   less than
    TD_COSC,    // comma            ,   semicolon
    TD_MIUN,    // minus            ,   underscore
    TD_OPEN,    // LPRN             ,   LBRC
    TD_DQGT,    // double quote     ,   greater than
    TD_DOCL,    // dot              ,   colon
    TD_EQPL,    // equal            ,   plus
    TD_CLOS,    // RPRN             ,   RBRC
    TD_SLSL     // slash            ,   backslash
};

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_QTLT] = ACTION_TAP_DANCE_DOUBLE(KC_QUOT, KC_LT),
    [TD_COSC] = ACTION_TAP_DANCE_DOUBLE(KC_COMM, KC_SCLN),
    [TD_MIUN] = ACTION_TAP_DANCE_DOUBLE(KC_MINS, KC_UNDS),
    [TD_OPEN] = ACTION_TAP_DANCE_DOUBLE(KC_LPRN, KC_LBRC),
    [TD_DQGT] = ACTION_TAP_DANCE_DOUBLE(KC_DQT , KC_GT),
    [TD_DOCL] = ACTION_TAP_DANCE_DOUBLE(KC_DOT , KC_COLN),
    [TD_EQPL] = ACTION_TAP_DANCE_DOUBLE(KC_EQL , KC_PLUS),
    [TD_CLOS] = ACTION_TAP_DANCE_DOUBLE(KC_RPRN, KC_RBRC),
    [TD_SLSL] = ACTION_TAP_DANCE_DOUBLE(KC_SLSH, KC_BSLS)
};

#define KC_QTLT             TD(TD_QTLT)
#define KC_COSC             TD(TD_COSC)
#define KC_MIUN             TD(TD_MIUN)
#define KC_OPEN             TD(TD_OPEN)
#define KC_DQGT             TD(TD_DQGT)
#define KC_DOCL             TD(TD_DOCL)
#define KC_EQPL             TD(TD_EQPL)
#define KC_CLOS             TD(TD_CLOS)
#define KC_SLSL             TD(TD_SLSL)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* engram */
    [0] = LAYOUT_ortho_5x12(
        /* left hand */
            ESC  , 1    , 2    , 3    , 4    , 5    ,
            TAB  , B    , Y    , O    , U    , QTLT ,
            LSFT , FN1_R, I    , E    , A    , COSC ,
            FN3_TT , FN2_G, X    , J    , K    , MIUN ,
            FN1_TT, S_LGUI, LALT , S_LCTL, SPC  , OPEN ,
        /* right hand */
            6    , 7    , 8    , 9    , 0    , PSCR ,
            DQGT , L    , D    , W    , V    , SLSL ,
            DOCL , H    , T    , S    , FN1_N, RSFT,
            EQPL , C    , M    , F    , FN2_P, ENT  ,
            CLOS , BSPC , S_RCTL, Q    , Z    , RALT
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
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
            TRNS , EXLM , QUES , AMPR , DLR  , AT   ,
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
        /* right hand */
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
            TRNS , GRV  , TILD , TRNS , TRNS , TRNS ,
            ASTR , HASH , PIPE , CIRC , PERC , TRNS ,
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS
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

