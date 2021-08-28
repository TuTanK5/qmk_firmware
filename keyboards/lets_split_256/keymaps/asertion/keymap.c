#include QMK_KEYBOARD_H
#include "asertion_combo.h"

combo_t key_combos[COMBO_COUNT] = {
  COMBO(combo_A_S, KC_D),
  COMBO(combo_T_I_O, KC_J)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_ortho_5x12(
        /* left hand */
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
            TRNS , A    , S    , E    , R    , TRNS ,
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
            TRNS , TRNS , TRNS , TRNS , SPC  , TRNS ,
        /* right hand */
			TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
			TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
			TRNS , T    , I    , O    , N    , TRNS ,
            TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,
            TRNS , ENT  , TRNS , TRNS , TRNS , TRNS
        )
};

