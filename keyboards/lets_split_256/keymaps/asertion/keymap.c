#include QMK_KEYBOARD_H
#include "asertion_combo.h"

#define KC_S_SFT          OSM(MOD_LSFT)
#define KC_combo_mapping KC_A
#define KC_soft_shift KC_B
#define ACTION_TOGGLE_LAYER1 KC_1
#define ACTION_ONESHOT_LAYER1 KC_1
#define ACTION_TOGGLE_LAYER2 KC_2
#define ACTION_ONESHOT_LAYER2 KC_2
combo_t key_combos[] = {
     //Combo sets of 2 keys for left hand(s)
COMBO(combo_R_N        , KC_J),
COMBO(combo_R_O        , KC_K),
COMBO(combo_R_T        , ACTION_TOGGLE_LAYER1),
COMBO(combo_R_SPC      , KC_P),
COMBO(combo_N_O        , KC_B),
COMBO(combo_N_T        , KC_W),
COMBO(combo_N_SPC      , KC_M),
COMBO(combo_O_T        , ACTION_ONESHOT_LAYER1),
COMBO(combo_O_SPC      , KC_C),
COMBO(combo_T_SPC      , KC_L),
				
   //Combo sets of 2 keys for right hand(s)
COMBO(combo_E_A        , ACTION_ONESHOT_LAYER2),
COMBO(combo_E_I        , KC_G),
COMBO(combo_E_S        , ACTION_TOGGLE_LAYER2),
COMBO(combo_E_ENT      , KC_H),
COMBO(combo_A_I        , KC_Y),
COMBO(combo_A_S        , KC_V),
COMBO(combo_A_ENT      , KC_D),
COMBO(combo_I_S        , KC_X),
COMBO(combo_I_ENT      , KC_U),
COMBO(combo_S_ENT      , KC_F),

    //Combo sets of 3 keys for left hand(s)
COMBO(combo_R_N_O      , KC_combo_mapping),
COMBO(combo_R_N_T      , KC_combo_mapping),
COMBO(combo_R_N_SPC    , KC_combo_mapping),
COMBO(combo_R_O_T      , KC_combo_mapping),
COMBO(combo_R_O_SPC    , KC_combo_mapping),
COMBO(combo_R_T_SPC    , KC_combo_mapping),
COMBO(combo_N_O_T      , KC_Q),
COMBO(combo_N_O_SPC    , KC_combo_mapping),
COMBO(combo_N_T_SPC    , KC_combo_mapping),
COMBO(combo_O_T_SPC    , KC_soft_shift),

    //Combo sets of 3 keys for right hand(s)
COMBO(combo_E_A_I      , KC_Z),
COMBO(combo_E_A_S      , KC_DOT),
COMBO(combo_E_A_ENT    , KC_SCLN),
COMBO(combo_E_I_S      , KC_QUOT),
COMBO(combo_E_I_ENT    , KC_COMM),
COMBO(combo_E_S_ENT    , KC_SLSH),
COMBO(combo_A_I_S      , KC_LBRC),
COMBO(combo_A_I_ENT    , KC_BSPC),
COMBO(combo_A_S_ENT    , KC_BSLS),
COMBO(combo_I_S_ENT    , KC_RBRC),
};
//uint16_t COMBO_LEN = sizeof(key_combos);

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_ortho_5x12(
        /* left hand */
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
            TRNS , R    , N    , O    , T    , TRNS ,
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
            TRNS , TRNS , TRNS , TRNS , SPC  , TRNS ,
        /* right hand */
			TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
			TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
			TRNS , E    , A    , I    , S    , TRNS ,
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
            TRNS , ENT, TRNS , TRNS , TRNS , TRNS
        ),
	[1] = LAYOUT_ortho_5x12(
        /* left hand */
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
            TRNS , 8    , 4    , 2    , 1    , TRNS ,
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
            TRNS , TRNS , TRNS , TRNS , 0    , TRNS ,
        /* right hand */
			TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
			TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
			TRNS , E    , A    , I    , S    , TRNS ,
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
            TRNS , ENT, TRNS , TRNS , TRNS , TRNS
        ),
    [2] = LAYOUT_ortho_5x12(
        /* left hand */
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
            TRNS , F    , U    , D    , H    , TRNS ,
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
            TRNS , TRNS , TRNS , TRNS , SPC  , TRNS ,
        /* right hand */
			TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
			TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
			TRNS , L    , C    , M    , P    , TRNS ,
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
            TRNS , S_SFT, TRNS , TRNS , TRNS , TRNS
        )
};

