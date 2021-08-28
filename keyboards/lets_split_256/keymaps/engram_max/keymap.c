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

enum combo_events {
    YU_COPY,
    IA_PASTE,
    XK_CUT,
    IEA_CLIP_HISTORY,
    YO_SELECT_HOME,
    OU_SELECT_END,
    IE_SELECT_LSTART,
    EA_SELECT_LEND,
    HT_NEW_TAB,
    TS_NEW_ICOG_TAB,
    HTS_REOPEN_TAB,
    LD_MOVE_LINE_UP,
    CM_MOVE_LINE_DOWN,
    DW_SAVE,
    MF_UNDO,
    FP_REDO,
    JK_MARK_READ
};

const uint16_t PROGMEM copy_combo[] = {KC_Y, KC_U, COMBO_END};
const uint16_t PROGMEM paste_combo[] = {KC_I, KC_A, COMBO_END};
const uint16_t PROGMEM cut_combo[] = {KC_X, KC_K, COMBO_END};
const uint16_t PROGMEM clip_history_combo[] = {KC_I, KC_E, KC_A, COMBO_END};
const uint16_t PROGMEM select_home_combo[] = {KC_Y, KC_O, COMBO_END};
const uint16_t PROGMEM select_end_combo[] = {KC_O, KC_U, COMBO_END};
const uint16_t PROGMEM select_lstart_combo[] = {KC_I, KC_E, COMBO_END};
const uint16_t PROGMEM select_lend_combo[] = {KC_E, KC_A, COMBO_END};
const uint16_t PROGMEM new_tab_combo[] = {KC_H, KC_T, COMBO_END};
const uint16_t PROGMEM new_icog_tab_combo[] = {KC_T, KC_S, COMBO_END};
const uint16_t PROGMEM reopen_tab_combo[] = {KC_H, KC_T, KC_S, COMBO_END};
const uint16_t PROGMEM move_line_up_combo[] = {KC_L, KC_D, COMBO_END};
const uint16_t PROGMEM move_line_down_combo[] = {KC_C, KC_M, COMBO_END};
const uint16_t PROGMEM save_combo[] = {KC_D, KC_W, COMBO_END};
const uint16_t PROGMEM undo_combo[] = {KC_M, KC_F, COMBO_END};
const uint16_t PROGMEM redo_combo[] = {KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM mark_read_combo[] = {KC_J, KC_K, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [YU_COPY] = COMBO_ACTION(copy_combo),
  [IA_PASTE] = COMBO_ACTION(paste_combo),
  [XK_CUT] = COMBO_ACTION(cut_combo),
  [IEA_CLIP_HISTORY] = COMBO_ACTION(clip_history_combo),
  [YO_SELECT_HOME] = COMBO_ACTION(select_home_combo),
  [OU_SELECT_END] = COMBO_ACTION(select_end_combo),
  [IE_SELECT_LSTART] = COMBO_ACTION(select_lstart_combo),
  [EA_SELECT_LEND] = COMBO_ACTION(select_lend_combo),
  [HT_NEW_TAB] = COMBO_ACTION(new_tab_combo),
  [TS_NEW_ICOG_TAB] = COMBO_ACTION(new_icog_tab_combo),
  [HTS_REOPEN_TAB] = COMBO_ACTION(reopen_tab_combo),
  [LD_MOVE_LINE_UP] = COMBO_ACTION(move_line_up_combo),
  [CM_MOVE_LINE_DOWN] = COMBO_ACTION(move_line_down_combo),
  [DW_SAVE] = COMBO_ACTION(save_combo),
  [MF_UNDO] = COMBO_ACTION(undo_combo),
  [FP_REDO] = COMBO_ACTION(redo_combo),
  [JK_MARK_READ] = COMBO_ACTION(mark_read_combo)
};

void process_combo_event(uint16_t combo_index, bool pressed) {
    switch(combo_index) {
        case YU_COPY:
            if (pressed) {
                tap_code16(C(KC_C));
            }
            break;
        case IA_PASTE:
            if (pressed) {
                tap_code16(C(KC_V));
            }
            break;
        case XK_CUT:
            if (pressed) {
                tap_code16(C(KC_X));
            }
            break;
        case IEA_CLIP_HISTORY:
            if (pressed) {
                tap_code16(G(KC_V));
            }
            break;
        case YO_SELECT_HOME:
            if (pressed) {
                tap_code16(C(S(KC_HOME)));
            }
            break;
        case OU_SELECT_END:
            if (pressed) {
                tap_code16(C(S(KC_END)));
            }
            break;
        case IE_SELECT_LSTART:
            if (pressed) {
                tap_code16(S(KC_HOME));
            }
            break;
        case EA_SELECT_LEND:
            if (pressed) {
                tap_code16(S(KC_END));
            }
            break;
        case HT_NEW_TAB:
            if (pressed) {
                tap_code16(C(KC_T));
            }
            break;
        case TS_NEW_ICOG_TAB:
            if (pressed) {
                tap_code16(C(S(KC_N)));
            }
            break;
        case HTS_REOPEN_TAB:
            if (pressed) {
                tap_code16(C(S(KC_T)));
            }
            break;
        case LD_MOVE_LINE_UP:
            if (pressed) {
                tap_code16(C(S(KC_UP)));
            }
            break;
        case CM_MOVE_LINE_DOWN:
            if (pressed) {
                tap_code16(C(S(KC_DOWN)));
            }
            break;
        case DW_SAVE:
            if (pressed) {
                tap_code16(C(KC_S));
            }
            break;
        case MF_UNDO:
            if (pressed) {
                tap_code16(C(KC_Z));
            }
            break;
        case FP_REDO:
            if (pressed) {
                tap_code16(C(KC_Y));
            }
            break;
        case JK_MARK_READ:
            if (pressed) {
                tap_code16(C(KC_ENT));
            }
            break;
    }
}
