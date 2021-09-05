#define GET_MACRO(_1, _2, _3, _4, _5, NAME,...) NAME
#define SET_COMBO(...) GET_MACRO(__VA_ARGS__, COMBO5, COMBO4, COMBO3, COMBO2)(__VA_ARGS__)

#define COMBO2(K1, K2) {KC_##K1, KC_##K2, COMBO_END}
#define COMBO3(K1, K2, K3) {KC_##K1, KC_##K2, KC_##K3, COMBO_END}
#define COMBO4(K1, K2, K3, K4) {KC_##K1, KC_##K2, KC_##K3, KC_##K4, COMBO_END}
#define COMBO5(K1, K2, K3, K4, K5) {KC_##K1, KC_##K2, KC_##K3, KC_##K4, KC_##K5, COMBO_END}


//===================================================================
//Combo sets for left hand(s)
//===================================================================

    //Combo sets of 2 keys for left hand(s)
const uint16_t PROGMEM combo_R_N[] = SET_COMBO(R,N);
const uint16_t PROGMEM combo_R_O[] = SET_COMBO(R,O);
const uint16_t PROGMEM combo_R_T[] = SET_COMBO(R,T);
const uint16_t PROGMEM combo_R_SPC[] = SET_COMBO(R,SPC);
const uint16_t PROGMEM combo_N_O[] = SET_COMBO(N,O);
const uint16_t PROGMEM combo_N_T[] = SET_COMBO(N,T);
const uint16_t PROGMEM combo_N_SPC[] = SET_COMBO(N,SPC);
const uint16_t PROGMEM combo_O_T[] = SET_COMBO(O,T);
const uint16_t PROGMEM combo_O_SPC[] = SET_COMBO(O,SPC);
const uint16_t PROGMEM combo_T_SPC[] = SET_COMBO(T,SPC);

    //Copy this section into keymap.c under "combo_t key_combos[] = {" then uncomment to use
    //Combo sets of 2 keys for left hand(s)
//COMBO(combo_R_N        , KC_combo_mapping),
//COMBO(combo_R_O        , KC_combo_mapping),
//COMBO(combo_R_T        , KC_combo_mapping),
//COMBO(combo_R_SPC        , KC_combo_mapping),
//COMBO(combo_N_O        , KC_combo_mapping),
//COMBO(combo_N_T        , KC_combo_mapping),
//COMBO(combo_N_SPC        , KC_combo_mapping),
//COMBO(combo_O_T        , KC_combo_mapping),
//COMBO(combo_O_SPC        , KC_combo_mapping),
//COMBO(combo_T_SPC        , KC_combo_mapping),

    //Combo sets of 3 keys for left hand(s)
const uint16_t PROGMEM combo_R_N_O[] = SET_COMBO(R,N,O);
const uint16_t PROGMEM combo_R_N_T[] = SET_COMBO(R,N,T);
const uint16_t PROGMEM combo_R_N_SPC[] = SET_COMBO(R,N,SPC);
const uint16_t PROGMEM combo_R_O_T[] = SET_COMBO(R,O,T);
const uint16_t PROGMEM combo_R_O_SPC[] = SET_COMBO(R,O,SPC);
const uint16_t PROGMEM combo_R_T_SPC[] = SET_COMBO(R,T,SPC);
const uint16_t PROGMEM combo_N_O_T[] = SET_COMBO(N,O,T);
const uint16_t PROGMEM combo_N_O_SPC[] = SET_COMBO(N,O,SPC);
const uint16_t PROGMEM combo_N_T_SPC[] = SET_COMBO(N,T,SPC);
const uint16_t PROGMEM combo_O_T_SPC[] = SET_COMBO(O,T,SPC);

    //Copy this section into keymap.c under "combo_t key_combos[] = {" then uncomment to use
    //Combo sets of 3 keys for left hand(s)
//COMBO(combo_R_N_O        , KC_combo_mapping),
//COMBO(combo_R_N_T        , KC_combo_mapping),
//COMBO(combo_R_N_SPC        , KC_combo_mapping),
//COMBO(combo_R_O_T        , KC_combo_mapping),
//COMBO(combo_R_O_SPC        , KC_combo_mapping),
//COMBO(combo_R_T_SPC        , KC_combo_mapping),
//COMBO(combo_N_O_T        , KC_combo_mapping),
//COMBO(combo_N_O_SPC        , KC_combo_mapping),
//COMBO(combo_N_T_SPC        , KC_combo_mapping),
//COMBO(combo_O_T_SPC        , KC_combo_mapping),

    //Combo sets of 4 keys for left hand(s)
const uint16_t PROGMEM combo_R_N_O_T[] = SET_COMBO(R,N,O,T);
const uint16_t PROGMEM combo_R_N_O_SPC[] = SET_COMBO(R,N,O,SPC);
const uint16_t PROGMEM combo_R_N_T_SPC[] = SET_COMBO(R,N,T,SPC);
const uint16_t PROGMEM combo_R_O_T_SPC[] = SET_COMBO(R,O,T,SPC);
const uint16_t PROGMEM combo_N_O_T_SPC[] = SET_COMBO(N,O,T,SPC);

    //Copy this section into keymap.c under "combo_t key_combos[] = {" then uncomment to use
    //Combo sets of 4 keys for left hand(s)
//COMBO(combo_R_N_O_T        , KC_combo_mapping),
//COMBO(combo_R_N_O_SPC        , KC_combo_mapping),
//COMBO(combo_R_N_T_SPC        , KC_combo_mapping),
//COMBO(combo_R_O_T_SPC        , KC_combo_mapping),
//COMBO(combo_N_O_T_SPC        , KC_combo_mapping),

    //Combo sets of 5 keys for left hand(s)
const uint16_t PROGMEM combo_R_N_O_T_SPC[] = SET_COMBO(R,N,O,T,SPC);

    //Copy this section into keymap.c under "combo_t key_combos[] = {" then uncomment to use
    //Combo sets of 5 keys for left hand(s)
//COMBO(combo_R_N_O_T_SPC        , KC_combo_mapping),

//===================================================================
//Combo sets for right hand(s)
//===================================================================

    //Combo sets of 2 keys for right hand(s)
const uint16_t PROGMEM combo_E_A[] = SET_COMBO(E,A);
const uint16_t PROGMEM combo_E_I[] = SET_COMBO(E,I);
const uint16_t PROGMEM combo_E_S[] = SET_COMBO(E,S);
const uint16_t PROGMEM combo_E_ENT[] = SET_COMBO(E,ENT);
const uint16_t PROGMEM combo_A_I[] = SET_COMBO(A,I);
const uint16_t PROGMEM combo_A_S[] = SET_COMBO(A,S);
const uint16_t PROGMEM combo_A_ENT[] = SET_COMBO(A,ENT);
const uint16_t PROGMEM combo_I_S[] = SET_COMBO(I,S);
const uint16_t PROGMEM combo_I_ENT[] = SET_COMBO(I,ENT);
const uint16_t PROGMEM combo_S_ENT[] = SET_COMBO(S,ENT);

    //Copy this section into keymap.c under "combo_t key_combos[] = {" then uncomment to use
    //Combo sets of 2 keys for right hand(s)
//COMBO(combo_E_A        , KC_combo_mapping),
//COMBO(combo_E_I        , KC_combo_mapping),
//COMBO(combo_E_S        , KC_combo_mapping),
//COMBO(combo_E_ENT        , KC_combo_mapping),
//COMBO(combo_A_I        , KC_combo_mapping),
//COMBO(combo_A_S        , KC_combo_mapping),
//COMBO(combo_A_ENT        , KC_combo_mapping),
//COMBO(combo_I_S        , KC_combo_mapping),
//COMBO(combo_I_ENT        , KC_combo_mapping),
//COMBO(combo_S_ENT        , KC_combo_mapping),

    //Combo sets of 3 keys for right hand(s)
const uint16_t PROGMEM combo_E_A_I[] = SET_COMBO(E,A,I);
const uint16_t PROGMEM combo_E_A_S[] = SET_COMBO(E,A,S);
const uint16_t PROGMEM combo_E_A_ENT[] = SET_COMBO(E,A,ENT);
const uint16_t PROGMEM combo_E_I_S[] = SET_COMBO(E,I,S);
const uint16_t PROGMEM combo_E_I_ENT[] = SET_COMBO(E,I,ENT);
const uint16_t PROGMEM combo_E_S_ENT[] = SET_COMBO(E,S,ENT);
const uint16_t PROGMEM combo_A_I_S[] = SET_COMBO(A,I,S);
const uint16_t PROGMEM combo_A_I_ENT[] = SET_COMBO(A,I,ENT);
const uint16_t PROGMEM combo_A_S_ENT[] = SET_COMBO(A,S,ENT);
const uint16_t PROGMEM combo_I_S_ENT[] = SET_COMBO(I,S,ENT);

    //Copy this section into keymap.c under "combo_t key_combos[] = {" then uncomment to use
    //Combo sets of 3 keys for right hand(s)
//COMBO(combo_E_A_I        , KC_combo_mapping),
//COMBO(combo_E_A_S        , KC_combo_mapping),
//COMBO(combo_E_A_ENT        , KC_combo_mapping),
//COMBO(combo_E_I_S        , KC_combo_mapping),
//COMBO(combo_E_I_ENT        , KC_combo_mapping),
//COMBO(combo_E_S_ENT        , KC_combo_mapping),
//COMBO(combo_A_I_S        , KC_combo_mapping),
//COMBO(combo_A_I_ENT        , KC_combo_mapping),
//COMBO(combo_A_S_ENT        , KC_combo_mapping),
//COMBO(combo_I_S_ENT        , KC_combo_mapping),

    //Combo sets of 4 keys for right hand(s)
const uint16_t PROGMEM combo_E_A_I_S[] = SET_COMBO(E,A,I,S);
const uint16_t PROGMEM combo_E_A_I_ENT[] = SET_COMBO(E,A,I,ENT);
const uint16_t PROGMEM combo_E_A_S_ENT[] = SET_COMBO(E,A,S,ENT);
const uint16_t PROGMEM combo_E_I_S_ENT[] = SET_COMBO(E,I,S,ENT);
const uint16_t PROGMEM combo_A_I_S_ENT[] = SET_COMBO(A,I,S,ENT);

    //Copy this section into keymap.c under "combo_t key_combos[] = {" then uncomment to use
    //Combo sets of 4 keys for right hand(s)
//COMBO(combo_E_A_I_S        , KC_combo_mapping),
//COMBO(combo_E_A_I_ENT        , KC_combo_mapping),
//COMBO(combo_E_A_S_ENT        , KC_combo_mapping),
//COMBO(combo_E_I_S_ENT        , KC_combo_mapping),
//COMBO(combo_A_I_S_ENT        , KC_combo_mapping),

    //Combo sets of 5 keys for right hand(s)
const uint16_t PROGMEM combo_E_A_I_S_ENT[] = SET_COMBO(E,A,I,S,ENT);

    //Copy this section into keymap.c under "combo_t key_combos[] = {" then uncomment to use
    //Combo sets of 5 keys for right hand(s)
//COMBO(combo_E_A_I_S_ENT        , KC_combo_mapping),

//===================================================================
//Combo sets for both hand(s)
//===================================================================

    //Combo sets of 2 keys for both hand(s)
const uint16_t PROGMEM combo_R_E[] = SET_COMBO(R,E);
const uint16_t PROGMEM combo_R_A[] = SET_COMBO(R,A);
const uint16_t PROGMEM combo_R_I[] = SET_COMBO(R,I);
const uint16_t PROGMEM combo_R_S[] = SET_COMBO(R,S);
const uint16_t PROGMEM combo_R_ENT[] = SET_COMBO(R,ENT);
const uint16_t PROGMEM combo_N_E[] = SET_COMBO(N,E);
const uint16_t PROGMEM combo_N_A[] = SET_COMBO(N,A);
const uint16_t PROGMEM combo_N_I[] = SET_COMBO(N,I);
const uint16_t PROGMEM combo_N_S[] = SET_COMBO(N,S);
const uint16_t PROGMEM combo_N_ENT[] = SET_COMBO(N,ENT);
const uint16_t PROGMEM combo_O_E[] = SET_COMBO(O,E);
const uint16_t PROGMEM combo_O_A[] = SET_COMBO(O,A);
const uint16_t PROGMEM combo_O_I[] = SET_COMBO(O,I);
const uint16_t PROGMEM combo_O_S[] = SET_COMBO(O,S);
const uint16_t PROGMEM combo_O_ENT[] = SET_COMBO(O,ENT);
const uint16_t PROGMEM combo_T_E[] = SET_COMBO(T,E);
const uint16_t PROGMEM combo_T_A[] = SET_COMBO(T,A);
const uint16_t PROGMEM combo_T_I[] = SET_COMBO(T,I);
const uint16_t PROGMEM combo_T_S[] = SET_COMBO(T,S);
const uint16_t PROGMEM combo_T_ENT[] = SET_COMBO(T,ENT);
const uint16_t PROGMEM combo_SPC_E[] = SET_COMBO(SPC,E);
const uint16_t PROGMEM combo_SPC_A[] = SET_COMBO(SPC,A);
const uint16_t PROGMEM combo_SPC_I[] = SET_COMBO(SPC,I);
const uint16_t PROGMEM combo_SPC_S[] = SET_COMBO(SPC,S);
const uint16_t PROGMEM combo_SPC_ENT[] = SET_COMBO(SPC,ENT);

    //Copy this section into keymap.c under "combo_t key_combos[] = {" then uncomment to use
    //Combo sets of 2 keys for both hand(s)
//COMBO(combo_R_E        , KC_combo_mapping),
//COMBO(combo_R_A        , KC_combo_mapping),
//COMBO(combo_R_I        , KC_combo_mapping),
//COMBO(combo_R_S        , KC_combo_mapping),
//COMBO(combo_R_ENT        , KC_combo_mapping),
//COMBO(combo_N_E        , KC_combo_mapping),
//COMBO(combo_N_A        , KC_combo_mapping),
//COMBO(combo_N_I        , KC_combo_mapping),
//COMBO(combo_N_S        , KC_combo_mapping),
//COMBO(combo_N_ENT        , KC_combo_mapping),
//COMBO(combo_O_E        , KC_combo_mapping),
//COMBO(combo_O_A        , KC_combo_mapping),
//COMBO(combo_O_I        , KC_combo_mapping),
//COMBO(combo_O_S        , KC_combo_mapping),
//COMBO(combo_O_ENT        , KC_combo_mapping),
//COMBO(combo_T_E        , KC_combo_mapping),
//COMBO(combo_T_A        , KC_combo_mapping),
//COMBO(combo_T_I        , KC_combo_mapping),
//COMBO(combo_T_S        , KC_combo_mapping),
//COMBO(combo_T_ENT        , KC_combo_mapping),
//COMBO(combo_SPC_E        , KC_combo_mapping),
//COMBO(combo_SPC_A        , KC_combo_mapping),
//COMBO(combo_SPC_I        , KC_combo_mapping),
//COMBO(combo_SPC_S        , KC_combo_mapping),
//COMBO(combo_SPC_ENT        , KC_combo_mapping),

    //Combo sets of 3 keys for both hand(s)
const uint16_t PROGMEM combo_R_N_E[] = SET_COMBO(R,N,E);
const uint16_t PROGMEM combo_R_N_A[] = SET_COMBO(R,N,A);
const uint16_t PROGMEM combo_R_N_I[] = SET_COMBO(R,N,I);
const uint16_t PROGMEM combo_R_N_S[] = SET_COMBO(R,N,S);
const uint16_t PROGMEM combo_R_N_ENT[] = SET_COMBO(R,N,ENT);
const uint16_t PROGMEM combo_R_O_E[] = SET_COMBO(R,O,E);
const uint16_t PROGMEM combo_R_O_A[] = SET_COMBO(R,O,A);
const uint16_t PROGMEM combo_R_O_I[] = SET_COMBO(R,O,I);
const uint16_t PROGMEM combo_R_O_S[] = SET_COMBO(R,O,S);
const uint16_t PROGMEM combo_R_O_ENT[] = SET_COMBO(R,O,ENT);
const uint16_t PROGMEM combo_R_T_E[] = SET_COMBO(R,T,E);
const uint16_t PROGMEM combo_R_T_A[] = SET_COMBO(R,T,A);
const uint16_t PROGMEM combo_R_T_I[] = SET_COMBO(R,T,I);
const uint16_t PROGMEM combo_R_T_S[] = SET_COMBO(R,T,S);
const uint16_t PROGMEM combo_R_T_ENT[] = SET_COMBO(R,T,ENT);
const uint16_t PROGMEM combo_R_SPC_E[] = SET_COMBO(R,SPC,E);
const uint16_t PROGMEM combo_R_SPC_A[] = SET_COMBO(R,SPC,A);
const uint16_t PROGMEM combo_R_SPC_I[] = SET_COMBO(R,SPC,I);
const uint16_t PROGMEM combo_R_SPC_S[] = SET_COMBO(R,SPC,S);
const uint16_t PROGMEM combo_R_SPC_ENT[] = SET_COMBO(R,SPC,ENT);
const uint16_t PROGMEM combo_R_E_A[] = SET_COMBO(R,E,A);
const uint16_t PROGMEM combo_R_E_I[] = SET_COMBO(R,E,I);
const uint16_t PROGMEM combo_R_E_S[] = SET_COMBO(R,E,S);
const uint16_t PROGMEM combo_R_E_ENT[] = SET_COMBO(R,E,ENT);
const uint16_t PROGMEM combo_R_A_I[] = SET_COMBO(R,A,I);
const uint16_t PROGMEM combo_R_A_S[] = SET_COMBO(R,A,S);
const uint16_t PROGMEM combo_R_A_ENT[] = SET_COMBO(R,A,ENT);
const uint16_t PROGMEM combo_R_I_S[] = SET_COMBO(R,I,S);
const uint16_t PROGMEM combo_R_I_ENT[] = SET_COMBO(R,I,ENT);
const uint16_t PROGMEM combo_R_S_ENT[] = SET_COMBO(R,S,ENT);
const uint16_t PROGMEM combo_N_O_E[] = SET_COMBO(N,O,E);
const uint16_t PROGMEM combo_N_O_A[] = SET_COMBO(N,O,A);
const uint16_t PROGMEM combo_N_O_I[] = SET_COMBO(N,O,I);
const uint16_t PROGMEM combo_N_O_S[] = SET_COMBO(N,O,S);
const uint16_t PROGMEM combo_N_O_ENT[] = SET_COMBO(N,O,ENT);
const uint16_t PROGMEM combo_N_T_E[] = SET_COMBO(N,T,E);
const uint16_t PROGMEM combo_N_T_A[] = SET_COMBO(N,T,A);
const uint16_t PROGMEM combo_N_T_I[] = SET_COMBO(N,T,I);
const uint16_t PROGMEM combo_N_T_S[] = SET_COMBO(N,T,S);
const uint16_t PROGMEM combo_N_T_ENT[] = SET_COMBO(N,T,ENT);
const uint16_t PROGMEM combo_N_SPC_E[] = SET_COMBO(N,SPC,E);
const uint16_t PROGMEM combo_N_SPC_A[] = SET_COMBO(N,SPC,A);
const uint16_t PROGMEM combo_N_SPC_I[] = SET_COMBO(N,SPC,I);
const uint16_t PROGMEM combo_N_SPC_S[] = SET_COMBO(N,SPC,S);
const uint16_t PROGMEM combo_N_SPC_ENT[] = SET_COMBO(N,SPC,ENT);
const uint16_t PROGMEM combo_N_E_A[] = SET_COMBO(N,E,A);
const uint16_t PROGMEM combo_N_E_I[] = SET_COMBO(N,E,I);
const uint16_t PROGMEM combo_N_E_S[] = SET_COMBO(N,E,S);
const uint16_t PROGMEM combo_N_E_ENT[] = SET_COMBO(N,E,ENT);
const uint16_t PROGMEM combo_N_A_I[] = SET_COMBO(N,A,I);
const uint16_t PROGMEM combo_N_A_S[] = SET_COMBO(N,A,S);
const uint16_t PROGMEM combo_N_A_ENT[] = SET_COMBO(N,A,ENT);
const uint16_t PROGMEM combo_N_I_S[] = SET_COMBO(N,I,S);
const uint16_t PROGMEM combo_N_I_ENT[] = SET_COMBO(N,I,ENT);
const uint16_t PROGMEM combo_N_S_ENT[] = SET_COMBO(N,S,ENT);
const uint16_t PROGMEM combo_O_T_E[] = SET_COMBO(O,T,E);
const uint16_t PROGMEM combo_O_T_A[] = SET_COMBO(O,T,A);
const uint16_t PROGMEM combo_O_T_I[] = SET_COMBO(O,T,I);
const uint16_t PROGMEM combo_O_T_S[] = SET_COMBO(O,T,S);
const uint16_t PROGMEM combo_O_T_ENT[] = SET_COMBO(O,T,ENT);
const uint16_t PROGMEM combo_O_SPC_E[] = SET_COMBO(O,SPC,E);
const uint16_t PROGMEM combo_O_SPC_A[] = SET_COMBO(O,SPC,A);
const uint16_t PROGMEM combo_O_SPC_I[] = SET_COMBO(O,SPC,I);
const uint16_t PROGMEM combo_O_SPC_S[] = SET_COMBO(O,SPC,S);
const uint16_t PROGMEM combo_O_SPC_ENT[] = SET_COMBO(O,SPC,ENT);
const uint16_t PROGMEM combo_O_E_A[] = SET_COMBO(O,E,A);
const uint16_t PROGMEM combo_O_E_I[] = SET_COMBO(O,E,I);
const uint16_t PROGMEM combo_O_E_S[] = SET_COMBO(O,E,S);
const uint16_t PROGMEM combo_O_E_ENT[] = SET_COMBO(O,E,ENT);
const uint16_t PROGMEM combo_O_A_I[] = SET_COMBO(O,A,I);
const uint16_t PROGMEM combo_O_A_S[] = SET_COMBO(O,A,S);
const uint16_t PROGMEM combo_O_A_ENT[] = SET_COMBO(O,A,ENT);
const uint16_t PROGMEM combo_O_I_S[] = SET_COMBO(O,I,S);
const uint16_t PROGMEM combo_O_I_ENT[] = SET_COMBO(O,I,ENT);
const uint16_t PROGMEM combo_O_S_ENT[] = SET_COMBO(O,S,ENT);
const uint16_t PROGMEM combo_T_SPC_E[] = SET_COMBO(T,SPC,E);
const uint16_t PROGMEM combo_T_SPC_A[] = SET_COMBO(T,SPC,A);
const uint16_t PROGMEM combo_T_SPC_I[] = SET_COMBO(T,SPC,I);
const uint16_t PROGMEM combo_T_SPC_S[] = SET_COMBO(T,SPC,S);
const uint16_t PROGMEM combo_T_SPC_ENT[] = SET_COMBO(T,SPC,ENT);
const uint16_t PROGMEM combo_T_E_A[] = SET_COMBO(T,E,A);
const uint16_t PROGMEM combo_T_E_I[] = SET_COMBO(T,E,I);
const uint16_t PROGMEM combo_T_E_S[] = SET_COMBO(T,E,S);
const uint16_t PROGMEM combo_T_E_ENT[] = SET_COMBO(T,E,ENT);
const uint16_t PROGMEM combo_T_A_I[] = SET_COMBO(T,A,I);
const uint16_t PROGMEM combo_T_A_S[] = SET_COMBO(T,A,S);
const uint16_t PROGMEM combo_T_A_ENT[] = SET_COMBO(T,A,ENT);
const uint16_t PROGMEM combo_T_I_S[] = SET_COMBO(T,I,S);
const uint16_t PROGMEM combo_T_I_ENT[] = SET_COMBO(T,I,ENT);
const uint16_t PROGMEM combo_T_S_ENT[] = SET_COMBO(T,S,ENT);
const uint16_t PROGMEM combo_SPC_E_A[] = SET_COMBO(SPC,E,A);
const uint16_t PROGMEM combo_SPC_E_I[] = SET_COMBO(SPC,E,I);
const uint16_t PROGMEM combo_SPC_E_S[] = SET_COMBO(SPC,E,S);
const uint16_t PROGMEM combo_SPC_E_ENT[] = SET_COMBO(SPC,E,ENT);
const uint16_t PROGMEM combo_SPC_A_I[] = SET_COMBO(SPC,A,I);
const uint16_t PROGMEM combo_SPC_A_S[] = SET_COMBO(SPC,A,S);
const uint16_t PROGMEM combo_SPC_A_ENT[] = SET_COMBO(SPC,A,ENT);
const uint16_t PROGMEM combo_SPC_I_S[] = SET_COMBO(SPC,I,S);
const uint16_t PROGMEM combo_SPC_I_ENT[] = SET_COMBO(SPC,I,ENT);
const uint16_t PROGMEM combo_SPC_S_ENT[] = SET_COMBO(SPC,S,ENT);

    //Copy this section into keymap.c under "combo_t key_combos[] = {" then uncomment to use
    //Combo sets of 3 keys for both hand(s)
//COMBO(combo_R_N_E        , KC_combo_mapping),
//COMBO(combo_R_N_A        , KC_combo_mapping),
//COMBO(combo_R_N_I        , KC_combo_mapping),
//COMBO(combo_R_N_S        , KC_combo_mapping),
//COMBO(combo_R_N_ENT        , KC_combo_mapping),
//COMBO(combo_R_O_E        , KC_combo_mapping),
//COMBO(combo_R_O_A        , KC_combo_mapping),
//COMBO(combo_R_O_I        , KC_combo_mapping),
//COMBO(combo_R_O_S        , KC_combo_mapping),
//COMBO(combo_R_O_ENT        , KC_combo_mapping),
//COMBO(combo_R_T_E        , KC_combo_mapping),
//COMBO(combo_R_T_A        , KC_combo_mapping),
//COMBO(combo_R_T_I        , KC_combo_mapping),
//COMBO(combo_R_T_S        , KC_combo_mapping),
//COMBO(combo_R_T_ENT        , KC_combo_mapping),
//COMBO(combo_R_SPC_E        , KC_combo_mapping),
//COMBO(combo_R_SPC_A        , KC_combo_mapping),
//COMBO(combo_R_SPC_I        , KC_combo_mapping),
//COMBO(combo_R_SPC_S        , KC_combo_mapping),
//COMBO(combo_R_SPC_ENT        , KC_combo_mapping),
//COMBO(combo_R_E_A        , KC_combo_mapping),
//COMBO(combo_R_E_I        , KC_combo_mapping),
//COMBO(combo_R_E_S        , KC_combo_mapping),
//COMBO(combo_R_E_ENT        , KC_combo_mapping),
//COMBO(combo_R_A_I        , KC_combo_mapping),
//COMBO(combo_R_A_S        , KC_combo_mapping),
//COMBO(combo_R_A_ENT        , KC_combo_mapping),
//COMBO(combo_R_I_S        , KC_combo_mapping),
//COMBO(combo_R_I_ENT        , KC_combo_mapping),
//COMBO(combo_R_S_ENT        , KC_combo_mapping),
//COMBO(combo_N_O_E        , KC_combo_mapping),
//COMBO(combo_N_O_A        , KC_combo_mapping),
//COMBO(combo_N_O_I        , KC_combo_mapping),
//COMBO(combo_N_O_S        , KC_combo_mapping),
//COMBO(combo_N_O_ENT        , KC_combo_mapping),
//COMBO(combo_N_T_E        , KC_combo_mapping),
//COMBO(combo_N_T_A        , KC_combo_mapping),
//COMBO(combo_N_T_I        , KC_combo_mapping),
//COMBO(combo_N_T_S        , KC_combo_mapping),
//COMBO(combo_N_T_ENT        , KC_combo_mapping),
//COMBO(combo_N_SPC_E        , KC_combo_mapping),
//COMBO(combo_N_SPC_A        , KC_combo_mapping),
//COMBO(combo_N_SPC_I        , KC_combo_mapping),
//COMBO(combo_N_SPC_S        , KC_combo_mapping),
//COMBO(combo_N_SPC_ENT        , KC_combo_mapping),
//COMBO(combo_N_E_A        , KC_combo_mapping),
//COMBO(combo_N_E_I        , KC_combo_mapping),
//COMBO(combo_N_E_S        , KC_combo_mapping),
//COMBO(combo_N_E_ENT        , KC_combo_mapping),
//COMBO(combo_N_A_I        , KC_combo_mapping),
//COMBO(combo_N_A_S        , KC_combo_mapping),
//COMBO(combo_N_A_ENT        , KC_combo_mapping),
//COMBO(combo_N_I_S        , KC_combo_mapping),
//COMBO(combo_N_I_ENT        , KC_combo_mapping),
//COMBO(combo_N_S_ENT        , KC_combo_mapping),
//COMBO(combo_O_T_E        , KC_combo_mapping),
//COMBO(combo_O_T_A        , KC_combo_mapping),
//COMBO(combo_O_T_I        , KC_combo_mapping),
//COMBO(combo_O_T_S        , KC_combo_mapping),
//COMBO(combo_O_T_ENT        , KC_combo_mapping),
//COMBO(combo_O_SPC_E        , KC_combo_mapping),
//COMBO(combo_O_SPC_A        , KC_combo_mapping),
//COMBO(combo_O_SPC_I        , KC_combo_mapping),
//COMBO(combo_O_SPC_S        , KC_combo_mapping),
//COMBO(combo_O_SPC_ENT        , KC_combo_mapping),
//COMBO(combo_O_E_A        , KC_combo_mapping),
//COMBO(combo_O_E_I        , KC_combo_mapping),
//COMBO(combo_O_E_S        , KC_combo_mapping),
//COMBO(combo_O_E_ENT        , KC_combo_mapping),
//COMBO(combo_O_A_I        , KC_combo_mapping),
//COMBO(combo_O_A_S        , KC_combo_mapping),
//COMBO(combo_O_A_ENT        , KC_combo_mapping),
//COMBO(combo_O_I_S        , KC_combo_mapping),
//COMBO(combo_O_I_ENT        , KC_combo_mapping),
//COMBO(combo_O_S_ENT        , KC_combo_mapping),
//COMBO(combo_T_SPC_E        , KC_combo_mapping),
//COMBO(combo_T_SPC_A        , KC_combo_mapping),
//COMBO(combo_T_SPC_I        , KC_combo_mapping),
//COMBO(combo_T_SPC_S        , KC_combo_mapping),
//COMBO(combo_T_SPC_ENT        , KC_combo_mapping),
//COMBO(combo_T_E_A        , KC_combo_mapping),
//COMBO(combo_T_E_I        , KC_combo_mapping),
//COMBO(combo_T_E_S        , KC_combo_mapping),
//COMBO(combo_T_E_ENT        , KC_combo_mapping),
//COMBO(combo_T_A_I        , KC_combo_mapping),
//COMBO(combo_T_A_S        , KC_combo_mapping),
//COMBO(combo_T_A_ENT        , KC_combo_mapping),
//COMBO(combo_T_I_S        , KC_combo_mapping),
//COMBO(combo_T_I_ENT        , KC_combo_mapping),
//COMBO(combo_T_S_ENT        , KC_combo_mapping),
//COMBO(combo_SPC_E_A        , KC_combo_mapping),
//COMBO(combo_SPC_E_I        , KC_combo_mapping),
//COMBO(combo_SPC_E_S        , KC_combo_mapping),
//COMBO(combo_SPC_E_ENT        , KC_combo_mapping),
//COMBO(combo_SPC_A_I        , KC_combo_mapping),
//COMBO(combo_SPC_A_S        , KC_combo_mapping),
//COMBO(combo_SPC_A_ENT        , KC_combo_mapping),
//COMBO(combo_SPC_I_S        , KC_combo_mapping),
//COMBO(combo_SPC_I_ENT        , KC_combo_mapping),
//COMBO(combo_SPC_S_ENT        , KC_combo_mapping),

    //Combo sets of 4 keys for both hand(s)
const uint16_t PROGMEM combo_R_N_O_E[] = SET_COMBO(R,N,O,E);
const uint16_t PROGMEM combo_R_N_O_A[] = SET_COMBO(R,N,O,A);
const uint16_t PROGMEM combo_R_N_O_I[] = SET_COMBO(R,N,O,I);
const uint16_t PROGMEM combo_R_N_O_S[] = SET_COMBO(R,N,O,S);
const uint16_t PROGMEM combo_R_N_O_ENT[] = SET_COMBO(R,N,O,ENT);
const uint16_t PROGMEM combo_R_N_T_E[] = SET_COMBO(R,N,T,E);
const uint16_t PROGMEM combo_R_N_T_A[] = SET_COMBO(R,N,T,A);
const uint16_t PROGMEM combo_R_N_T_I[] = SET_COMBO(R,N,T,I);
const uint16_t PROGMEM combo_R_N_T_S[] = SET_COMBO(R,N,T,S);
const uint16_t PROGMEM combo_R_N_T_ENT[] = SET_COMBO(R,N,T,ENT);
const uint16_t PROGMEM combo_R_N_SPC_E[] = SET_COMBO(R,N,SPC,E);
const uint16_t PROGMEM combo_R_N_SPC_A[] = SET_COMBO(R,N,SPC,A);
const uint16_t PROGMEM combo_R_N_SPC_I[] = SET_COMBO(R,N,SPC,I);
const uint16_t PROGMEM combo_R_N_SPC_S[] = SET_COMBO(R,N,SPC,S);
const uint16_t PROGMEM combo_R_N_SPC_ENT[] = SET_COMBO(R,N,SPC,ENT);
const uint16_t PROGMEM combo_R_N_E_A[] = SET_COMBO(R,N,E,A);
const uint16_t PROGMEM combo_R_N_E_I[] = SET_COMBO(R,N,E,I);
const uint16_t PROGMEM combo_R_N_E_S[] = SET_COMBO(R,N,E,S);
const uint16_t PROGMEM combo_R_N_E_ENT[] = SET_COMBO(R,N,E,ENT);
const uint16_t PROGMEM combo_R_N_A_I[] = SET_COMBO(R,N,A,I);
const uint16_t PROGMEM combo_R_N_A_S[] = SET_COMBO(R,N,A,S);
const uint16_t PROGMEM combo_R_N_A_ENT[] = SET_COMBO(R,N,A,ENT);
const uint16_t PROGMEM combo_R_N_I_S[] = SET_COMBO(R,N,I,S);
const uint16_t PROGMEM combo_R_N_I_ENT[] = SET_COMBO(R,N,I,ENT);
const uint16_t PROGMEM combo_R_N_S_ENT[] = SET_COMBO(R,N,S,ENT);
const uint16_t PROGMEM combo_R_O_T_E[] = SET_COMBO(R,O,T,E);
const uint16_t PROGMEM combo_R_O_T_A[] = SET_COMBO(R,O,T,A);
const uint16_t PROGMEM combo_R_O_T_I[] = SET_COMBO(R,O,T,I);
const uint16_t PROGMEM combo_R_O_T_S[] = SET_COMBO(R,O,T,S);
const uint16_t PROGMEM combo_R_O_T_ENT[] = SET_COMBO(R,O,T,ENT);
const uint16_t PROGMEM combo_R_O_SPC_E[] = SET_COMBO(R,O,SPC,E);
const uint16_t PROGMEM combo_R_O_SPC_A[] = SET_COMBO(R,O,SPC,A);
const uint16_t PROGMEM combo_R_O_SPC_I[] = SET_COMBO(R,O,SPC,I);
const uint16_t PROGMEM combo_R_O_SPC_S[] = SET_COMBO(R,O,SPC,S);
const uint16_t PROGMEM combo_R_O_SPC_ENT[] = SET_COMBO(R,O,SPC,ENT);
const uint16_t PROGMEM combo_R_O_E_A[] = SET_COMBO(R,O,E,A);
const uint16_t PROGMEM combo_R_O_E_I[] = SET_COMBO(R,O,E,I);
const uint16_t PROGMEM combo_R_O_E_S[] = SET_COMBO(R,O,E,S);
const uint16_t PROGMEM combo_R_O_E_ENT[] = SET_COMBO(R,O,E,ENT);
const uint16_t PROGMEM combo_R_O_A_I[] = SET_COMBO(R,O,A,I);
const uint16_t PROGMEM combo_R_O_A_S[] = SET_COMBO(R,O,A,S);
const uint16_t PROGMEM combo_R_O_A_ENT[] = SET_COMBO(R,O,A,ENT);
const uint16_t PROGMEM combo_R_O_I_S[] = SET_COMBO(R,O,I,S);
const uint16_t PROGMEM combo_R_O_I_ENT[] = SET_COMBO(R,O,I,ENT);
const uint16_t PROGMEM combo_R_O_S_ENT[] = SET_COMBO(R,O,S,ENT);
const uint16_t PROGMEM combo_R_T_SPC_E[] = SET_COMBO(R,T,SPC,E);
const uint16_t PROGMEM combo_R_T_SPC_A[] = SET_COMBO(R,T,SPC,A);
const uint16_t PROGMEM combo_R_T_SPC_I[] = SET_COMBO(R,T,SPC,I);
const uint16_t PROGMEM combo_R_T_SPC_S[] = SET_COMBO(R,T,SPC,S);
const uint16_t PROGMEM combo_R_T_SPC_ENT[] = SET_COMBO(R,T,SPC,ENT);
const uint16_t PROGMEM combo_R_T_E_A[] = SET_COMBO(R,T,E,A);
const uint16_t PROGMEM combo_R_T_E_I[] = SET_COMBO(R,T,E,I);
const uint16_t PROGMEM combo_R_T_E_S[] = SET_COMBO(R,T,E,S);
const uint16_t PROGMEM combo_R_T_E_ENT[] = SET_COMBO(R,T,E,ENT);
const uint16_t PROGMEM combo_R_T_A_I[] = SET_COMBO(R,T,A,I);
const uint16_t PROGMEM combo_R_T_A_S[] = SET_COMBO(R,T,A,S);
const uint16_t PROGMEM combo_R_T_A_ENT[] = SET_COMBO(R,T,A,ENT);
const uint16_t PROGMEM combo_R_T_I_S[] = SET_COMBO(R,T,I,S);
const uint16_t PROGMEM combo_R_T_I_ENT[] = SET_COMBO(R,T,I,ENT);
const uint16_t PROGMEM combo_R_T_S_ENT[] = SET_COMBO(R,T,S,ENT);
const uint16_t PROGMEM combo_R_SPC_E_A[] = SET_COMBO(R,SPC,E,A);
const uint16_t PROGMEM combo_R_SPC_E_I[] = SET_COMBO(R,SPC,E,I);
const uint16_t PROGMEM combo_R_SPC_E_S[] = SET_COMBO(R,SPC,E,S);
const uint16_t PROGMEM combo_R_SPC_E_ENT[] = SET_COMBO(R,SPC,E,ENT);
const uint16_t PROGMEM combo_R_SPC_A_I[] = SET_COMBO(R,SPC,A,I);
const uint16_t PROGMEM combo_R_SPC_A_S[] = SET_COMBO(R,SPC,A,S);
const uint16_t PROGMEM combo_R_SPC_A_ENT[] = SET_COMBO(R,SPC,A,ENT);
const uint16_t PROGMEM combo_R_SPC_I_S[] = SET_COMBO(R,SPC,I,S);
const uint16_t PROGMEM combo_R_SPC_I_ENT[] = SET_COMBO(R,SPC,I,ENT);
const uint16_t PROGMEM combo_R_SPC_S_ENT[] = SET_COMBO(R,SPC,S,ENT);
const uint16_t PROGMEM combo_R_E_A_I[] = SET_COMBO(R,E,A,I);
const uint16_t PROGMEM combo_R_E_A_S[] = SET_COMBO(R,E,A,S);
const uint16_t PROGMEM combo_R_E_A_ENT[] = SET_COMBO(R,E,A,ENT);
const uint16_t PROGMEM combo_R_E_I_S[] = SET_COMBO(R,E,I,S);
const uint16_t PROGMEM combo_R_E_I_ENT[] = SET_COMBO(R,E,I,ENT);
const uint16_t PROGMEM combo_R_E_S_ENT[] = SET_COMBO(R,E,S,ENT);
const uint16_t PROGMEM combo_R_A_I_S[] = SET_COMBO(R,A,I,S);
const uint16_t PROGMEM combo_R_A_I_ENT[] = SET_COMBO(R,A,I,ENT);
const uint16_t PROGMEM combo_R_A_S_ENT[] = SET_COMBO(R,A,S,ENT);
const uint16_t PROGMEM combo_R_I_S_ENT[] = SET_COMBO(R,I,S,ENT);
const uint16_t PROGMEM combo_N_O_T_E[] = SET_COMBO(N,O,T,E);
const uint16_t PROGMEM combo_N_O_T_A[] = SET_COMBO(N,O,T,A);
const uint16_t PROGMEM combo_N_O_T_I[] = SET_COMBO(N,O,T,I);
const uint16_t PROGMEM combo_N_O_T_S[] = SET_COMBO(N,O,T,S);
const uint16_t PROGMEM combo_N_O_T_ENT[] = SET_COMBO(N,O,T,ENT);
const uint16_t PROGMEM combo_N_O_SPC_E[] = SET_COMBO(N,O,SPC,E);
const uint16_t PROGMEM combo_N_O_SPC_A[] = SET_COMBO(N,O,SPC,A);
const uint16_t PROGMEM combo_N_O_SPC_I[] = SET_COMBO(N,O,SPC,I);
const uint16_t PROGMEM combo_N_O_SPC_S[] = SET_COMBO(N,O,SPC,S);
const uint16_t PROGMEM combo_N_O_SPC_ENT[] = SET_COMBO(N,O,SPC,ENT);
const uint16_t PROGMEM combo_N_O_E_A[] = SET_COMBO(N,O,E,A);
const uint16_t PROGMEM combo_N_O_E_I[] = SET_COMBO(N,O,E,I);
const uint16_t PROGMEM combo_N_O_E_S[] = SET_COMBO(N,O,E,S);
const uint16_t PROGMEM combo_N_O_E_ENT[] = SET_COMBO(N,O,E,ENT);
const uint16_t PROGMEM combo_N_O_A_I[] = SET_COMBO(N,O,A,I);
const uint16_t PROGMEM combo_N_O_A_S[] = SET_COMBO(N,O,A,S);
const uint16_t PROGMEM combo_N_O_A_ENT[] = SET_COMBO(N,O,A,ENT);
const uint16_t PROGMEM combo_N_O_I_S[] = SET_COMBO(N,O,I,S);
const uint16_t PROGMEM combo_N_O_I_ENT[] = SET_COMBO(N,O,I,ENT);
const uint16_t PROGMEM combo_N_O_S_ENT[] = SET_COMBO(N,O,S,ENT);
const uint16_t PROGMEM combo_N_T_SPC_E[] = SET_COMBO(N,T,SPC,E);
const uint16_t PROGMEM combo_N_T_SPC_A[] = SET_COMBO(N,T,SPC,A);
const uint16_t PROGMEM combo_N_T_SPC_I[] = SET_COMBO(N,T,SPC,I);
const uint16_t PROGMEM combo_N_T_SPC_S[] = SET_COMBO(N,T,SPC,S);
const uint16_t PROGMEM combo_N_T_SPC_ENT[] = SET_COMBO(N,T,SPC,ENT);
const uint16_t PROGMEM combo_N_T_E_A[] = SET_COMBO(N,T,E,A);
const uint16_t PROGMEM combo_N_T_E_I[] = SET_COMBO(N,T,E,I);
const uint16_t PROGMEM combo_N_T_E_S[] = SET_COMBO(N,T,E,S);
const uint16_t PROGMEM combo_N_T_E_ENT[] = SET_COMBO(N,T,E,ENT);
const uint16_t PROGMEM combo_N_T_A_I[] = SET_COMBO(N,T,A,I);
const uint16_t PROGMEM combo_N_T_A_S[] = SET_COMBO(N,T,A,S);
const uint16_t PROGMEM combo_N_T_A_ENT[] = SET_COMBO(N,T,A,ENT);
const uint16_t PROGMEM combo_N_T_I_S[] = SET_COMBO(N,T,I,S);
const uint16_t PROGMEM combo_N_T_I_ENT[] = SET_COMBO(N,T,I,ENT);
const uint16_t PROGMEM combo_N_T_S_ENT[] = SET_COMBO(N,T,S,ENT);
const uint16_t PROGMEM combo_N_SPC_E_A[] = SET_COMBO(N,SPC,E,A);
const uint16_t PROGMEM combo_N_SPC_E_I[] = SET_COMBO(N,SPC,E,I);
const uint16_t PROGMEM combo_N_SPC_E_S[] = SET_COMBO(N,SPC,E,S);
const uint16_t PROGMEM combo_N_SPC_E_ENT[] = SET_COMBO(N,SPC,E,ENT);
const uint16_t PROGMEM combo_N_SPC_A_I[] = SET_COMBO(N,SPC,A,I);
const uint16_t PROGMEM combo_N_SPC_A_S[] = SET_COMBO(N,SPC,A,S);
const uint16_t PROGMEM combo_N_SPC_A_ENT[] = SET_COMBO(N,SPC,A,ENT);
const uint16_t PROGMEM combo_N_SPC_I_S[] = SET_COMBO(N,SPC,I,S);
const uint16_t PROGMEM combo_N_SPC_I_ENT[] = SET_COMBO(N,SPC,I,ENT);
const uint16_t PROGMEM combo_N_SPC_S_ENT[] = SET_COMBO(N,SPC,S,ENT);
const uint16_t PROGMEM combo_N_E_A_I[] = SET_COMBO(N,E,A,I);
const uint16_t PROGMEM combo_N_E_A_S[] = SET_COMBO(N,E,A,S);
const uint16_t PROGMEM combo_N_E_A_ENT[] = SET_COMBO(N,E,A,ENT);
const uint16_t PROGMEM combo_N_E_I_S[] = SET_COMBO(N,E,I,S);
const uint16_t PROGMEM combo_N_E_I_ENT[] = SET_COMBO(N,E,I,ENT);
const uint16_t PROGMEM combo_N_E_S_ENT[] = SET_COMBO(N,E,S,ENT);
const uint16_t PROGMEM combo_N_A_I_S[] = SET_COMBO(N,A,I,S);
const uint16_t PROGMEM combo_N_A_I_ENT[] = SET_COMBO(N,A,I,ENT);
const uint16_t PROGMEM combo_N_A_S_ENT[] = SET_COMBO(N,A,S,ENT);
const uint16_t PROGMEM combo_N_I_S_ENT[] = SET_COMBO(N,I,S,ENT);
const uint16_t PROGMEM combo_O_T_SPC_E[] = SET_COMBO(O,T,SPC,E);
const uint16_t PROGMEM combo_O_T_SPC_A[] = SET_COMBO(O,T,SPC,A);
const uint16_t PROGMEM combo_O_T_SPC_I[] = SET_COMBO(O,T,SPC,I);
const uint16_t PROGMEM combo_O_T_SPC_S[] = SET_COMBO(O,T,SPC,S);
const uint16_t PROGMEM combo_O_T_SPC_ENT[] = SET_COMBO(O,T,SPC,ENT);
const uint16_t PROGMEM combo_O_T_E_A[] = SET_COMBO(O,T,E,A);
const uint16_t PROGMEM combo_O_T_E_I[] = SET_COMBO(O,T,E,I);
const uint16_t PROGMEM combo_O_T_E_S[] = SET_COMBO(O,T,E,S);
const uint16_t PROGMEM combo_O_T_E_ENT[] = SET_COMBO(O,T,E,ENT);
const uint16_t PROGMEM combo_O_T_A_I[] = SET_COMBO(O,T,A,I);
const uint16_t PROGMEM combo_O_T_A_S[] = SET_COMBO(O,T,A,S);
const uint16_t PROGMEM combo_O_T_A_ENT[] = SET_COMBO(O,T,A,ENT);
const uint16_t PROGMEM combo_O_T_I_S[] = SET_COMBO(O,T,I,S);
const uint16_t PROGMEM combo_O_T_I_ENT[] = SET_COMBO(O,T,I,ENT);
const uint16_t PROGMEM combo_O_T_S_ENT[] = SET_COMBO(O,T,S,ENT);
const uint16_t PROGMEM combo_O_SPC_E_A[] = SET_COMBO(O,SPC,E,A);
const uint16_t PROGMEM combo_O_SPC_E_I[] = SET_COMBO(O,SPC,E,I);
const uint16_t PROGMEM combo_O_SPC_E_S[] = SET_COMBO(O,SPC,E,S);
const uint16_t PROGMEM combo_O_SPC_E_ENT[] = SET_COMBO(O,SPC,E,ENT);
const uint16_t PROGMEM combo_O_SPC_A_I[] = SET_COMBO(O,SPC,A,I);
const uint16_t PROGMEM combo_O_SPC_A_S[] = SET_COMBO(O,SPC,A,S);
const uint16_t PROGMEM combo_O_SPC_A_ENT[] = SET_COMBO(O,SPC,A,ENT);
const uint16_t PROGMEM combo_O_SPC_I_S[] = SET_COMBO(O,SPC,I,S);
const uint16_t PROGMEM combo_O_SPC_I_ENT[] = SET_COMBO(O,SPC,I,ENT);
const uint16_t PROGMEM combo_O_SPC_S_ENT[] = SET_COMBO(O,SPC,S,ENT);
const uint16_t PROGMEM combo_O_E_A_I[] = SET_COMBO(O,E,A,I);
const uint16_t PROGMEM combo_O_E_A_S[] = SET_COMBO(O,E,A,S);
const uint16_t PROGMEM combo_O_E_A_ENT[] = SET_COMBO(O,E,A,ENT);
const uint16_t PROGMEM combo_O_E_I_S[] = SET_COMBO(O,E,I,S);
const uint16_t PROGMEM combo_O_E_I_ENT[] = SET_COMBO(O,E,I,ENT);
const uint16_t PROGMEM combo_O_E_S_ENT[] = SET_COMBO(O,E,S,ENT);
const uint16_t PROGMEM combo_O_A_I_S[] = SET_COMBO(O,A,I,S);
const uint16_t PROGMEM combo_O_A_I_ENT[] = SET_COMBO(O,A,I,ENT);
const uint16_t PROGMEM combo_O_A_S_ENT[] = SET_COMBO(O,A,S,ENT);
const uint16_t PROGMEM combo_O_I_S_ENT[] = SET_COMBO(O,I,S,ENT);
const uint16_t PROGMEM combo_T_SPC_E_A[] = SET_COMBO(T,SPC,E,A);
const uint16_t PROGMEM combo_T_SPC_E_I[] = SET_COMBO(T,SPC,E,I);
const uint16_t PROGMEM combo_T_SPC_E_S[] = SET_COMBO(T,SPC,E,S);
const uint16_t PROGMEM combo_T_SPC_E_ENT[] = SET_COMBO(T,SPC,E,ENT);
const uint16_t PROGMEM combo_T_SPC_A_I[] = SET_COMBO(T,SPC,A,I);
const uint16_t PROGMEM combo_T_SPC_A_S[] = SET_COMBO(T,SPC,A,S);
const uint16_t PROGMEM combo_T_SPC_A_ENT[] = SET_COMBO(T,SPC,A,ENT);
const uint16_t PROGMEM combo_T_SPC_I_S[] = SET_COMBO(T,SPC,I,S);
const uint16_t PROGMEM combo_T_SPC_I_ENT[] = SET_COMBO(T,SPC,I,ENT);
const uint16_t PROGMEM combo_T_SPC_S_ENT[] = SET_COMBO(T,SPC,S,ENT);
const uint16_t PROGMEM combo_T_E_A_I[] = SET_COMBO(T,E,A,I);
const uint16_t PROGMEM combo_T_E_A_S[] = SET_COMBO(T,E,A,S);
const uint16_t PROGMEM combo_T_E_A_ENT[] = SET_COMBO(T,E,A,ENT);
const uint16_t PROGMEM combo_T_E_I_S[] = SET_COMBO(T,E,I,S);
const uint16_t PROGMEM combo_T_E_I_ENT[] = SET_COMBO(T,E,I,ENT);
const uint16_t PROGMEM combo_T_E_S_ENT[] = SET_COMBO(T,E,S,ENT);
const uint16_t PROGMEM combo_T_A_I_S[] = SET_COMBO(T,A,I,S);
const uint16_t PROGMEM combo_T_A_I_ENT[] = SET_COMBO(T,A,I,ENT);
const uint16_t PROGMEM combo_T_A_S_ENT[] = SET_COMBO(T,A,S,ENT);
const uint16_t PROGMEM combo_T_I_S_ENT[] = SET_COMBO(T,I,S,ENT);
const uint16_t PROGMEM combo_SPC_E_A_I[] = SET_COMBO(SPC,E,A,I);
const uint16_t PROGMEM combo_SPC_E_A_S[] = SET_COMBO(SPC,E,A,S);
const uint16_t PROGMEM combo_SPC_E_A_ENT[] = SET_COMBO(SPC,E,A,ENT);
const uint16_t PROGMEM combo_SPC_E_I_S[] = SET_COMBO(SPC,E,I,S);
const uint16_t PROGMEM combo_SPC_E_I_ENT[] = SET_COMBO(SPC,E,I,ENT);
const uint16_t PROGMEM combo_SPC_E_S_ENT[] = SET_COMBO(SPC,E,S,ENT);
const uint16_t PROGMEM combo_SPC_A_I_S[] = SET_COMBO(SPC,A,I,S);
const uint16_t PROGMEM combo_SPC_A_I_ENT[] = SET_COMBO(SPC,A,I,ENT);
const uint16_t PROGMEM combo_SPC_A_S_ENT[] = SET_COMBO(SPC,A,S,ENT);
const uint16_t PROGMEM combo_SPC_I_S_ENT[] = SET_COMBO(SPC,I,S,ENT);

    //Copy this section into keymap.c under "combo_t key_combos[] = {" then uncomment to use
    //Combo sets of 4 keys for both hand(s)
//COMBO(combo_R_N_O_E        , KC_combo_mapping),
//COMBO(combo_R_N_O_A        , KC_combo_mapping),
//COMBO(combo_R_N_O_I        , KC_combo_mapping),
//COMBO(combo_R_N_O_S        , KC_combo_mapping),
//COMBO(combo_R_N_O_ENT        , KC_combo_mapping),
//COMBO(combo_R_N_T_E        , KC_combo_mapping),
//COMBO(combo_R_N_T_A        , KC_combo_mapping),
//COMBO(combo_R_N_T_I        , KC_combo_mapping),
//COMBO(combo_R_N_T_S        , KC_combo_mapping),
//COMBO(combo_R_N_T_ENT        , KC_combo_mapping),
//COMBO(combo_R_N_SPC_E        , KC_combo_mapping),
//COMBO(combo_R_N_SPC_A        , KC_combo_mapping),
//COMBO(combo_R_N_SPC_I        , KC_combo_mapping),
//COMBO(combo_R_N_SPC_S        , KC_combo_mapping),
//COMBO(combo_R_N_SPC_ENT        , KC_combo_mapping),
//COMBO(combo_R_N_E_A        , KC_combo_mapping),
//COMBO(combo_R_N_E_I        , KC_combo_mapping),
//COMBO(combo_R_N_E_S        , KC_combo_mapping),
//COMBO(combo_R_N_E_ENT        , KC_combo_mapping),
//COMBO(combo_R_N_A_I        , KC_combo_mapping),
//COMBO(combo_R_N_A_S        , KC_combo_mapping),
//COMBO(combo_R_N_A_ENT        , KC_combo_mapping),
//COMBO(combo_R_N_I_S        , KC_combo_mapping),
//COMBO(combo_R_N_I_ENT        , KC_combo_mapping),
//COMBO(combo_R_N_S_ENT        , KC_combo_mapping),
//COMBO(combo_R_O_T_E        , KC_combo_mapping),
//COMBO(combo_R_O_T_A        , KC_combo_mapping),
//COMBO(combo_R_O_T_I        , KC_combo_mapping),
//COMBO(combo_R_O_T_S        , KC_combo_mapping),
//COMBO(combo_R_O_T_ENT        , KC_combo_mapping),
//COMBO(combo_R_O_SPC_E        , KC_combo_mapping),
//COMBO(combo_R_O_SPC_A        , KC_combo_mapping),
//COMBO(combo_R_O_SPC_I        , KC_combo_mapping),
//COMBO(combo_R_O_SPC_S        , KC_combo_mapping),
//COMBO(combo_R_O_SPC_ENT        , KC_combo_mapping),
//COMBO(combo_R_O_E_A        , KC_combo_mapping),
//COMBO(combo_R_O_E_I        , KC_combo_mapping),
//COMBO(combo_R_O_E_S        , KC_combo_mapping),
//COMBO(combo_R_O_E_ENT        , KC_combo_mapping),
//COMBO(combo_R_O_A_I        , KC_combo_mapping),
//COMBO(combo_R_O_A_S        , KC_combo_mapping),
//COMBO(combo_R_O_A_ENT        , KC_combo_mapping),
//COMBO(combo_R_O_I_S        , KC_combo_mapping),
//COMBO(combo_R_O_I_ENT        , KC_combo_mapping),
//COMBO(combo_R_O_S_ENT        , KC_combo_mapping),
//COMBO(combo_R_T_SPC_E        , KC_combo_mapping),
//COMBO(combo_R_T_SPC_A        , KC_combo_mapping),
//COMBO(combo_R_T_SPC_I        , KC_combo_mapping),
//COMBO(combo_R_T_SPC_S        , KC_combo_mapping),
//COMBO(combo_R_T_SPC_ENT        , KC_combo_mapping),
//COMBO(combo_R_T_E_A        , KC_combo_mapping),
//COMBO(combo_R_T_E_I        , KC_combo_mapping),
//COMBO(combo_R_T_E_S        , KC_combo_mapping),
//COMBO(combo_R_T_E_ENT        , KC_combo_mapping),
//COMBO(combo_R_T_A_I        , KC_combo_mapping),
//COMBO(combo_R_T_A_S        , KC_combo_mapping),
//COMBO(combo_R_T_A_ENT        , KC_combo_mapping),
//COMBO(combo_R_T_I_S        , KC_combo_mapping),
//COMBO(combo_R_T_I_ENT        , KC_combo_mapping),
//COMBO(combo_R_T_S_ENT        , KC_combo_mapping),
//COMBO(combo_R_SPC_E_A        , KC_combo_mapping),
//COMBO(combo_R_SPC_E_I        , KC_combo_mapping),
//COMBO(combo_R_SPC_E_S        , KC_combo_mapping),
//COMBO(combo_R_SPC_E_ENT        , KC_combo_mapping),
//COMBO(combo_R_SPC_A_I        , KC_combo_mapping),
//COMBO(combo_R_SPC_A_S        , KC_combo_mapping),
//COMBO(combo_R_SPC_A_ENT        , KC_combo_mapping),
//COMBO(combo_R_SPC_I_S        , KC_combo_mapping),
//COMBO(combo_R_SPC_I_ENT        , KC_combo_mapping),
//COMBO(combo_R_SPC_S_ENT        , KC_combo_mapping),
//COMBO(combo_R_E_A_I        , KC_combo_mapping),
//COMBO(combo_R_E_A_S        , KC_combo_mapping),
//COMBO(combo_R_E_A_ENT        , KC_combo_mapping),
//COMBO(combo_R_E_I_S        , KC_combo_mapping),
//COMBO(combo_R_E_I_ENT        , KC_combo_mapping),
//COMBO(combo_R_E_S_ENT        , KC_combo_mapping),
//COMBO(combo_R_A_I_S        , KC_combo_mapping),
//COMBO(combo_R_A_I_ENT        , KC_combo_mapping),
//COMBO(combo_R_A_S_ENT        , KC_combo_mapping),
//COMBO(combo_R_I_S_ENT        , KC_combo_mapping),
//COMBO(combo_N_O_T_E        , KC_combo_mapping),
//COMBO(combo_N_O_T_A        , KC_combo_mapping),
//COMBO(combo_N_O_T_I        , KC_combo_mapping),
//COMBO(combo_N_O_T_S        , KC_combo_mapping),
//COMBO(combo_N_O_T_ENT        , KC_combo_mapping),
//COMBO(combo_N_O_SPC_E        , KC_combo_mapping),
//COMBO(combo_N_O_SPC_A        , KC_combo_mapping),
//COMBO(combo_N_O_SPC_I        , KC_combo_mapping),
//COMBO(combo_N_O_SPC_S        , KC_combo_mapping),
//COMBO(combo_N_O_SPC_ENT        , KC_combo_mapping),
//COMBO(combo_N_O_E_A        , KC_combo_mapping),
//COMBO(combo_N_O_E_I        , KC_combo_mapping),
//COMBO(combo_N_O_E_S        , KC_combo_mapping),
//COMBO(combo_N_O_E_ENT        , KC_combo_mapping),
//COMBO(combo_N_O_A_I        , KC_combo_mapping),
//COMBO(combo_N_O_A_S        , KC_combo_mapping),
//COMBO(combo_N_O_A_ENT        , KC_combo_mapping),
//COMBO(combo_N_O_I_S        , KC_combo_mapping),
//COMBO(combo_N_O_I_ENT        , KC_combo_mapping),
//COMBO(combo_N_O_S_ENT        , KC_combo_mapping),
//COMBO(combo_N_T_SPC_E        , KC_combo_mapping),
//COMBO(combo_N_T_SPC_A        , KC_combo_mapping),
//COMBO(combo_N_T_SPC_I        , KC_combo_mapping),
//COMBO(combo_N_T_SPC_S        , KC_combo_mapping),
//COMBO(combo_N_T_SPC_ENT        , KC_combo_mapping),
//COMBO(combo_N_T_E_A        , KC_combo_mapping),
//COMBO(combo_N_T_E_I        , KC_combo_mapping),
//COMBO(combo_N_T_E_S        , KC_combo_mapping),
//COMBO(combo_N_T_E_ENT        , KC_combo_mapping),
//COMBO(combo_N_T_A_I        , KC_combo_mapping),
//COMBO(combo_N_T_A_S        , KC_combo_mapping),
//COMBO(combo_N_T_A_ENT        , KC_combo_mapping),
//COMBO(combo_N_T_I_S        , KC_combo_mapping),
//COMBO(combo_N_T_I_ENT        , KC_combo_mapping),
//COMBO(combo_N_T_S_ENT        , KC_combo_mapping),
//COMBO(combo_N_SPC_E_A        , KC_combo_mapping),
//COMBO(combo_N_SPC_E_I        , KC_combo_mapping),
//COMBO(combo_N_SPC_E_S        , KC_combo_mapping),
//COMBO(combo_N_SPC_E_ENT        , KC_combo_mapping),
//COMBO(combo_N_SPC_A_I        , KC_combo_mapping),
//COMBO(combo_N_SPC_A_S        , KC_combo_mapping),
//COMBO(combo_N_SPC_A_ENT        , KC_combo_mapping),
//COMBO(combo_N_SPC_I_S        , KC_combo_mapping),
//COMBO(combo_N_SPC_I_ENT        , KC_combo_mapping),
//COMBO(combo_N_SPC_S_ENT        , KC_combo_mapping),
//COMBO(combo_N_E_A_I        , KC_combo_mapping),
//COMBO(combo_N_E_A_S        , KC_combo_mapping),
//COMBO(combo_N_E_A_ENT        , KC_combo_mapping),
//COMBO(combo_N_E_I_S        , KC_combo_mapping),
//COMBO(combo_N_E_I_ENT        , KC_combo_mapping),
//COMBO(combo_N_E_S_ENT        , KC_combo_mapping),
//COMBO(combo_N_A_I_S        , KC_combo_mapping),
//COMBO(combo_N_A_I_ENT        , KC_combo_mapping),
//COMBO(combo_N_A_S_ENT        , KC_combo_mapping),
//COMBO(combo_N_I_S_ENT        , KC_combo_mapping),
//COMBO(combo_O_T_SPC_E        , KC_combo_mapping),
//COMBO(combo_O_T_SPC_A        , KC_combo_mapping),
//COMBO(combo_O_T_SPC_I        , KC_combo_mapping),
//COMBO(combo_O_T_SPC_S        , KC_combo_mapping),
//COMBO(combo_O_T_SPC_ENT        , KC_combo_mapping),
//COMBO(combo_O_T_E_A        , KC_combo_mapping),
//COMBO(combo_O_T_E_I        , KC_combo_mapping),
//COMBO(combo_O_T_E_S        , KC_combo_mapping),
//COMBO(combo_O_T_E_ENT        , KC_combo_mapping),
//COMBO(combo_O_T_A_I        , KC_combo_mapping),
//COMBO(combo_O_T_A_S        , KC_combo_mapping),
//COMBO(combo_O_T_A_ENT        , KC_combo_mapping),
//COMBO(combo_O_T_I_S        , KC_combo_mapping),
//COMBO(combo_O_T_I_ENT        , KC_combo_mapping),
//COMBO(combo_O_T_S_ENT        , KC_combo_mapping),
//COMBO(combo_O_SPC_E_A        , KC_combo_mapping),
//COMBO(combo_O_SPC_E_I        , KC_combo_mapping),
//COMBO(combo_O_SPC_E_S        , KC_combo_mapping),
//COMBO(combo_O_SPC_E_ENT        , KC_combo_mapping),
//COMBO(combo_O_SPC_A_I        , KC_combo_mapping),
//COMBO(combo_O_SPC_A_S        , KC_combo_mapping),
//COMBO(combo_O_SPC_A_ENT        , KC_combo_mapping),
//COMBO(combo_O_SPC_I_S        , KC_combo_mapping),
//COMBO(combo_O_SPC_I_ENT        , KC_combo_mapping),
//COMBO(combo_O_SPC_S_ENT        , KC_combo_mapping),
//COMBO(combo_O_E_A_I        , KC_combo_mapping),
//COMBO(combo_O_E_A_S        , KC_combo_mapping),
//COMBO(combo_O_E_A_ENT        , KC_combo_mapping),
//COMBO(combo_O_E_I_S        , KC_combo_mapping),
//COMBO(combo_O_E_I_ENT        , KC_combo_mapping),
//COMBO(combo_O_E_S_ENT        , KC_combo_mapping),
//COMBO(combo_O_A_I_S        , KC_combo_mapping),
//COMBO(combo_O_A_I_ENT        , KC_combo_mapping),
//COMBO(combo_O_A_S_ENT        , KC_combo_mapping),
//COMBO(combo_O_I_S_ENT        , KC_combo_mapping),
//COMBO(combo_T_SPC_E_A        , KC_combo_mapping),
//COMBO(combo_T_SPC_E_I        , KC_combo_mapping),
//COMBO(combo_T_SPC_E_S        , KC_combo_mapping),
//COMBO(combo_T_SPC_E_ENT        , KC_combo_mapping),
//COMBO(combo_T_SPC_A_I        , KC_combo_mapping),
//COMBO(combo_T_SPC_A_S        , KC_combo_mapping),
//COMBO(combo_T_SPC_A_ENT        , KC_combo_mapping),
//COMBO(combo_T_SPC_I_S        , KC_combo_mapping),
//COMBO(combo_T_SPC_I_ENT        , KC_combo_mapping),
//COMBO(combo_T_SPC_S_ENT        , KC_combo_mapping),
//COMBO(combo_T_E_A_I        , KC_combo_mapping),
//COMBO(combo_T_E_A_S        , KC_combo_mapping),
//COMBO(combo_T_E_A_ENT        , KC_combo_mapping),
//COMBO(combo_T_E_I_S        , KC_combo_mapping),
//COMBO(combo_T_E_I_ENT        , KC_combo_mapping),
//COMBO(combo_T_E_S_ENT        , KC_combo_mapping),
//COMBO(combo_T_A_I_S        , KC_combo_mapping),
//COMBO(combo_T_A_I_ENT        , KC_combo_mapping),
//COMBO(combo_T_A_S_ENT        , KC_combo_mapping),
//COMBO(combo_T_I_S_ENT        , KC_combo_mapping),
//COMBO(combo_SPC_E_A_I        , KC_combo_mapping),
//COMBO(combo_SPC_E_A_S        , KC_combo_mapping),
//COMBO(combo_SPC_E_A_ENT        , KC_combo_mapping),
//COMBO(combo_SPC_E_I_S        , KC_combo_mapping),
//COMBO(combo_SPC_E_I_ENT        , KC_combo_mapping),
//COMBO(combo_SPC_E_S_ENT        , KC_combo_mapping),
//COMBO(combo_SPC_A_I_S        , KC_combo_mapping),
//COMBO(combo_SPC_A_I_ENT        , KC_combo_mapping),
//COMBO(combo_SPC_A_S_ENT        , KC_combo_mapping),
//COMBO(combo_SPC_I_S_ENT        , KC_combo_mapping),

    //Combo sets of 5 keys for both hand(s)
const uint16_t PROGMEM combo_R_N_O_T_E[] = SET_COMBO(R,N,O,T,E);
const uint16_t PROGMEM combo_R_N_O_T_A[] = SET_COMBO(R,N,O,T,A);
const uint16_t PROGMEM combo_R_N_O_T_I[] = SET_COMBO(R,N,O,T,I);
const uint16_t PROGMEM combo_R_N_O_T_S[] = SET_COMBO(R,N,O,T,S);
const uint16_t PROGMEM combo_R_N_O_T_ENT[] = SET_COMBO(R,N,O,T,ENT);
const uint16_t PROGMEM combo_R_N_O_SPC_E[] = SET_COMBO(R,N,O,SPC,E);
const uint16_t PROGMEM combo_R_N_O_SPC_A[] = SET_COMBO(R,N,O,SPC,A);
const uint16_t PROGMEM combo_R_N_O_SPC_I[] = SET_COMBO(R,N,O,SPC,I);
const uint16_t PROGMEM combo_R_N_O_SPC_S[] = SET_COMBO(R,N,O,SPC,S);
const uint16_t PROGMEM combo_R_N_O_SPC_ENT[] = SET_COMBO(R,N,O,SPC,ENT);
const uint16_t PROGMEM combo_R_N_O_E_A[] = SET_COMBO(R,N,O,E,A);
const uint16_t PROGMEM combo_R_N_O_E_I[] = SET_COMBO(R,N,O,E,I);
const uint16_t PROGMEM combo_R_N_O_E_S[] = SET_COMBO(R,N,O,E,S);
const uint16_t PROGMEM combo_R_N_O_E_ENT[] = SET_COMBO(R,N,O,E,ENT);
const uint16_t PROGMEM combo_R_N_O_A_I[] = SET_COMBO(R,N,O,A,I);
const uint16_t PROGMEM combo_R_N_O_A_S[] = SET_COMBO(R,N,O,A,S);
const uint16_t PROGMEM combo_R_N_O_A_ENT[] = SET_COMBO(R,N,O,A,ENT);
const uint16_t PROGMEM combo_R_N_O_I_S[] = SET_COMBO(R,N,O,I,S);
const uint16_t PROGMEM combo_R_N_O_I_ENT[] = SET_COMBO(R,N,O,I,ENT);
const uint16_t PROGMEM combo_R_N_O_S_ENT[] = SET_COMBO(R,N,O,S,ENT);
const uint16_t PROGMEM combo_R_N_T_SPC_E[] = SET_COMBO(R,N,T,SPC,E);
const uint16_t PROGMEM combo_R_N_T_SPC_A[] = SET_COMBO(R,N,T,SPC,A);
const uint16_t PROGMEM combo_R_N_T_SPC_I[] = SET_COMBO(R,N,T,SPC,I);
const uint16_t PROGMEM combo_R_N_T_SPC_S[] = SET_COMBO(R,N,T,SPC,S);
const uint16_t PROGMEM combo_R_N_T_SPC_ENT[] = SET_COMBO(R,N,T,SPC,ENT);
const uint16_t PROGMEM combo_R_N_T_E_A[] = SET_COMBO(R,N,T,E,A);
const uint16_t PROGMEM combo_R_N_T_E_I[] = SET_COMBO(R,N,T,E,I);
const uint16_t PROGMEM combo_R_N_T_E_S[] = SET_COMBO(R,N,T,E,S);
const uint16_t PROGMEM combo_R_N_T_E_ENT[] = SET_COMBO(R,N,T,E,ENT);
const uint16_t PROGMEM combo_R_N_T_A_I[] = SET_COMBO(R,N,T,A,I);
const uint16_t PROGMEM combo_R_N_T_A_S[] = SET_COMBO(R,N,T,A,S);
const uint16_t PROGMEM combo_R_N_T_A_ENT[] = SET_COMBO(R,N,T,A,ENT);
const uint16_t PROGMEM combo_R_N_T_I_S[] = SET_COMBO(R,N,T,I,S);
const uint16_t PROGMEM combo_R_N_T_I_ENT[] = SET_COMBO(R,N,T,I,ENT);
const uint16_t PROGMEM combo_R_N_T_S_ENT[] = SET_COMBO(R,N,T,S,ENT);
const uint16_t PROGMEM combo_R_N_SPC_E_A[] = SET_COMBO(R,N,SPC,E,A);
const uint16_t PROGMEM combo_R_N_SPC_E_I[] = SET_COMBO(R,N,SPC,E,I);
const uint16_t PROGMEM combo_R_N_SPC_E_S[] = SET_COMBO(R,N,SPC,E,S);
const uint16_t PROGMEM combo_R_N_SPC_E_ENT[] = SET_COMBO(R,N,SPC,E,ENT);
const uint16_t PROGMEM combo_R_N_SPC_A_I[] = SET_COMBO(R,N,SPC,A,I);
const uint16_t PROGMEM combo_R_N_SPC_A_S[] = SET_COMBO(R,N,SPC,A,S);
const uint16_t PROGMEM combo_R_N_SPC_A_ENT[] = SET_COMBO(R,N,SPC,A,ENT);
const uint16_t PROGMEM combo_R_N_SPC_I_S[] = SET_COMBO(R,N,SPC,I,S);
const uint16_t PROGMEM combo_R_N_SPC_I_ENT[] = SET_COMBO(R,N,SPC,I,ENT);
const uint16_t PROGMEM combo_R_N_SPC_S_ENT[] = SET_COMBO(R,N,SPC,S,ENT);
const uint16_t PROGMEM combo_R_N_E_A_I[] = SET_COMBO(R,N,E,A,I);
const uint16_t PROGMEM combo_R_N_E_A_S[] = SET_COMBO(R,N,E,A,S);
const uint16_t PROGMEM combo_R_N_E_A_ENT[] = SET_COMBO(R,N,E,A,ENT);
const uint16_t PROGMEM combo_R_N_E_I_S[] = SET_COMBO(R,N,E,I,S);
const uint16_t PROGMEM combo_R_N_E_I_ENT[] = SET_COMBO(R,N,E,I,ENT);
const uint16_t PROGMEM combo_R_N_E_S_ENT[] = SET_COMBO(R,N,E,S,ENT);
const uint16_t PROGMEM combo_R_N_A_I_S[] = SET_COMBO(R,N,A,I,S);
const uint16_t PROGMEM combo_R_N_A_I_ENT[] = SET_COMBO(R,N,A,I,ENT);
const uint16_t PROGMEM combo_R_N_A_S_ENT[] = SET_COMBO(R,N,A,S,ENT);
const uint16_t PROGMEM combo_R_N_I_S_ENT[] = SET_COMBO(R,N,I,S,ENT);
const uint16_t PROGMEM combo_R_O_T_SPC_E[] = SET_COMBO(R,O,T,SPC,E);
const uint16_t PROGMEM combo_R_O_T_SPC_A[] = SET_COMBO(R,O,T,SPC,A);
const uint16_t PROGMEM combo_R_O_T_SPC_I[] = SET_COMBO(R,O,T,SPC,I);
const uint16_t PROGMEM combo_R_O_T_SPC_S[] = SET_COMBO(R,O,T,SPC,S);
const uint16_t PROGMEM combo_R_O_T_SPC_ENT[] = SET_COMBO(R,O,T,SPC,ENT);
const uint16_t PROGMEM combo_R_O_T_E_A[] = SET_COMBO(R,O,T,E,A);
const uint16_t PROGMEM combo_R_O_T_E_I[] = SET_COMBO(R,O,T,E,I);
const uint16_t PROGMEM combo_R_O_T_E_S[] = SET_COMBO(R,O,T,E,S);
const uint16_t PROGMEM combo_R_O_T_E_ENT[] = SET_COMBO(R,O,T,E,ENT);
const uint16_t PROGMEM combo_R_O_T_A_I[] = SET_COMBO(R,O,T,A,I);
const uint16_t PROGMEM combo_R_O_T_A_S[] = SET_COMBO(R,O,T,A,S);
const uint16_t PROGMEM combo_R_O_T_A_ENT[] = SET_COMBO(R,O,T,A,ENT);
const uint16_t PROGMEM combo_R_O_T_I_S[] = SET_COMBO(R,O,T,I,S);
const uint16_t PROGMEM combo_R_O_T_I_ENT[] = SET_COMBO(R,O,T,I,ENT);
const uint16_t PROGMEM combo_R_O_T_S_ENT[] = SET_COMBO(R,O,T,S,ENT);
const uint16_t PROGMEM combo_R_O_SPC_E_A[] = SET_COMBO(R,O,SPC,E,A);
const uint16_t PROGMEM combo_R_O_SPC_E_I[] = SET_COMBO(R,O,SPC,E,I);
const uint16_t PROGMEM combo_R_O_SPC_E_S[] = SET_COMBO(R,O,SPC,E,S);
const uint16_t PROGMEM combo_R_O_SPC_E_ENT[] = SET_COMBO(R,O,SPC,E,ENT);
const uint16_t PROGMEM combo_R_O_SPC_A_I[] = SET_COMBO(R,O,SPC,A,I);
const uint16_t PROGMEM combo_R_O_SPC_A_S[] = SET_COMBO(R,O,SPC,A,S);
const uint16_t PROGMEM combo_R_O_SPC_A_ENT[] = SET_COMBO(R,O,SPC,A,ENT);
const uint16_t PROGMEM combo_R_O_SPC_I_S[] = SET_COMBO(R,O,SPC,I,S);
const uint16_t PROGMEM combo_R_O_SPC_I_ENT[] = SET_COMBO(R,O,SPC,I,ENT);
const uint16_t PROGMEM combo_R_O_SPC_S_ENT[] = SET_COMBO(R,O,SPC,S,ENT);
const uint16_t PROGMEM combo_R_O_E_A_I[] = SET_COMBO(R,O,E,A,I);
const uint16_t PROGMEM combo_R_O_E_A_S[] = SET_COMBO(R,O,E,A,S);
const uint16_t PROGMEM combo_R_O_E_A_ENT[] = SET_COMBO(R,O,E,A,ENT);
const uint16_t PROGMEM combo_R_O_E_I_S[] = SET_COMBO(R,O,E,I,S);
const uint16_t PROGMEM combo_R_O_E_I_ENT[] = SET_COMBO(R,O,E,I,ENT);
const uint16_t PROGMEM combo_R_O_E_S_ENT[] = SET_COMBO(R,O,E,S,ENT);
const uint16_t PROGMEM combo_R_O_A_I_S[] = SET_COMBO(R,O,A,I,S);
const uint16_t PROGMEM combo_R_O_A_I_ENT[] = SET_COMBO(R,O,A,I,ENT);
const uint16_t PROGMEM combo_R_O_A_S_ENT[] = SET_COMBO(R,O,A,S,ENT);
const uint16_t PROGMEM combo_R_O_I_S_ENT[] = SET_COMBO(R,O,I,S,ENT);
const uint16_t PROGMEM combo_R_T_SPC_E_A[] = SET_COMBO(R,T,SPC,E,A);
const uint16_t PROGMEM combo_R_T_SPC_E_I[] = SET_COMBO(R,T,SPC,E,I);
const uint16_t PROGMEM combo_R_T_SPC_E_S[] = SET_COMBO(R,T,SPC,E,S);
const uint16_t PROGMEM combo_R_T_SPC_E_ENT[] = SET_COMBO(R,T,SPC,E,ENT);
const uint16_t PROGMEM combo_R_T_SPC_A_I[] = SET_COMBO(R,T,SPC,A,I);
const uint16_t PROGMEM combo_R_T_SPC_A_S[] = SET_COMBO(R,T,SPC,A,S);
const uint16_t PROGMEM combo_R_T_SPC_A_ENT[] = SET_COMBO(R,T,SPC,A,ENT);
const uint16_t PROGMEM combo_R_T_SPC_I_S[] = SET_COMBO(R,T,SPC,I,S);
const uint16_t PROGMEM combo_R_T_SPC_I_ENT[] = SET_COMBO(R,T,SPC,I,ENT);
const uint16_t PROGMEM combo_R_T_SPC_S_ENT[] = SET_COMBO(R,T,SPC,S,ENT);
const uint16_t PROGMEM combo_R_T_E_A_I[] = SET_COMBO(R,T,E,A,I);
const uint16_t PROGMEM combo_R_T_E_A_S[] = SET_COMBO(R,T,E,A,S);
const uint16_t PROGMEM combo_R_T_E_A_ENT[] = SET_COMBO(R,T,E,A,ENT);
const uint16_t PROGMEM combo_R_T_E_I_S[] = SET_COMBO(R,T,E,I,S);
const uint16_t PROGMEM combo_R_T_E_I_ENT[] = SET_COMBO(R,T,E,I,ENT);
const uint16_t PROGMEM combo_R_T_E_S_ENT[] = SET_COMBO(R,T,E,S,ENT);
const uint16_t PROGMEM combo_R_T_A_I_S[] = SET_COMBO(R,T,A,I,S);
const uint16_t PROGMEM combo_R_T_A_I_ENT[] = SET_COMBO(R,T,A,I,ENT);
const uint16_t PROGMEM combo_R_T_A_S_ENT[] = SET_COMBO(R,T,A,S,ENT);
const uint16_t PROGMEM combo_R_T_I_S_ENT[] = SET_COMBO(R,T,I,S,ENT);
const uint16_t PROGMEM combo_R_SPC_E_A_I[] = SET_COMBO(R,SPC,E,A,I);
const uint16_t PROGMEM combo_R_SPC_E_A_S[] = SET_COMBO(R,SPC,E,A,S);
const uint16_t PROGMEM combo_R_SPC_E_A_ENT[] = SET_COMBO(R,SPC,E,A,ENT);
const uint16_t PROGMEM combo_R_SPC_E_I_S[] = SET_COMBO(R,SPC,E,I,S);
const uint16_t PROGMEM combo_R_SPC_E_I_ENT[] = SET_COMBO(R,SPC,E,I,ENT);
const uint16_t PROGMEM combo_R_SPC_E_S_ENT[] = SET_COMBO(R,SPC,E,S,ENT);
const uint16_t PROGMEM combo_R_SPC_A_I_S[] = SET_COMBO(R,SPC,A,I,S);
const uint16_t PROGMEM combo_R_SPC_A_I_ENT[] = SET_COMBO(R,SPC,A,I,ENT);
const uint16_t PROGMEM combo_R_SPC_A_S_ENT[] = SET_COMBO(R,SPC,A,S,ENT);
const uint16_t PROGMEM combo_R_SPC_I_S_ENT[] = SET_COMBO(R,SPC,I,S,ENT);
const uint16_t PROGMEM combo_R_E_A_I_S[] = SET_COMBO(R,E,A,I,S);
const uint16_t PROGMEM combo_R_E_A_I_ENT[] = SET_COMBO(R,E,A,I,ENT);
const uint16_t PROGMEM combo_R_E_A_S_ENT[] = SET_COMBO(R,E,A,S,ENT);
const uint16_t PROGMEM combo_R_E_I_S_ENT[] = SET_COMBO(R,E,I,S,ENT);
const uint16_t PROGMEM combo_R_A_I_S_ENT[] = SET_COMBO(R,A,I,S,ENT);
const uint16_t PROGMEM combo_N_O_T_SPC_E[] = SET_COMBO(N,O,T,SPC,E);
const uint16_t PROGMEM combo_N_O_T_SPC_A[] = SET_COMBO(N,O,T,SPC,A);
const uint16_t PROGMEM combo_N_O_T_SPC_I[] = SET_COMBO(N,O,T,SPC,I);
const uint16_t PROGMEM combo_N_O_T_SPC_S[] = SET_COMBO(N,O,T,SPC,S);
const uint16_t PROGMEM combo_N_O_T_SPC_ENT[] = SET_COMBO(N,O,T,SPC,ENT);
const uint16_t PROGMEM combo_N_O_T_E_A[] = SET_COMBO(N,O,T,E,A);
const uint16_t PROGMEM combo_N_O_T_E_I[] = SET_COMBO(N,O,T,E,I);
const uint16_t PROGMEM combo_N_O_T_E_S[] = SET_COMBO(N,O,T,E,S);
const uint16_t PROGMEM combo_N_O_T_E_ENT[] = SET_COMBO(N,O,T,E,ENT);
const uint16_t PROGMEM combo_N_O_T_A_I[] = SET_COMBO(N,O,T,A,I);
const uint16_t PROGMEM combo_N_O_T_A_S[] = SET_COMBO(N,O,T,A,S);
const uint16_t PROGMEM combo_N_O_T_A_ENT[] = SET_COMBO(N,O,T,A,ENT);
const uint16_t PROGMEM combo_N_O_T_I_S[] = SET_COMBO(N,O,T,I,S);
const uint16_t PROGMEM combo_N_O_T_I_ENT[] = SET_COMBO(N,O,T,I,ENT);
const uint16_t PROGMEM combo_N_O_T_S_ENT[] = SET_COMBO(N,O,T,S,ENT);
const uint16_t PROGMEM combo_N_O_SPC_E_A[] = SET_COMBO(N,O,SPC,E,A);
const uint16_t PROGMEM combo_N_O_SPC_E_I[] = SET_COMBO(N,O,SPC,E,I);
const uint16_t PROGMEM combo_N_O_SPC_E_S[] = SET_COMBO(N,O,SPC,E,S);
const uint16_t PROGMEM combo_N_O_SPC_E_ENT[] = SET_COMBO(N,O,SPC,E,ENT);
const uint16_t PROGMEM combo_N_O_SPC_A_I[] = SET_COMBO(N,O,SPC,A,I);
const uint16_t PROGMEM combo_N_O_SPC_A_S[] = SET_COMBO(N,O,SPC,A,S);
const uint16_t PROGMEM combo_N_O_SPC_A_ENT[] = SET_COMBO(N,O,SPC,A,ENT);
const uint16_t PROGMEM combo_N_O_SPC_I_S[] = SET_COMBO(N,O,SPC,I,S);
const uint16_t PROGMEM combo_N_O_SPC_I_ENT[] = SET_COMBO(N,O,SPC,I,ENT);
const uint16_t PROGMEM combo_N_O_SPC_S_ENT[] = SET_COMBO(N,O,SPC,S,ENT);
const uint16_t PROGMEM combo_N_O_E_A_I[] = SET_COMBO(N,O,E,A,I);
const uint16_t PROGMEM combo_N_O_E_A_S[] = SET_COMBO(N,O,E,A,S);
const uint16_t PROGMEM combo_N_O_E_A_ENT[] = SET_COMBO(N,O,E,A,ENT);
const uint16_t PROGMEM combo_N_O_E_I_S[] = SET_COMBO(N,O,E,I,S);
const uint16_t PROGMEM combo_N_O_E_I_ENT[] = SET_COMBO(N,O,E,I,ENT);
const uint16_t PROGMEM combo_N_O_E_S_ENT[] = SET_COMBO(N,O,E,S,ENT);
const uint16_t PROGMEM combo_N_O_A_I_S[] = SET_COMBO(N,O,A,I,S);
const uint16_t PROGMEM combo_N_O_A_I_ENT[] = SET_COMBO(N,O,A,I,ENT);
const uint16_t PROGMEM combo_N_O_A_S_ENT[] = SET_COMBO(N,O,A,S,ENT);
const uint16_t PROGMEM combo_N_O_I_S_ENT[] = SET_COMBO(N,O,I,S,ENT);
const uint16_t PROGMEM combo_N_T_SPC_E_A[] = SET_COMBO(N,T,SPC,E,A);
const uint16_t PROGMEM combo_N_T_SPC_E_I[] = SET_COMBO(N,T,SPC,E,I);
const uint16_t PROGMEM combo_N_T_SPC_E_S[] = SET_COMBO(N,T,SPC,E,S);
const uint16_t PROGMEM combo_N_T_SPC_E_ENT[] = SET_COMBO(N,T,SPC,E,ENT);
const uint16_t PROGMEM combo_N_T_SPC_A_I[] = SET_COMBO(N,T,SPC,A,I);
const uint16_t PROGMEM combo_N_T_SPC_A_S[] = SET_COMBO(N,T,SPC,A,S);
const uint16_t PROGMEM combo_N_T_SPC_A_ENT[] = SET_COMBO(N,T,SPC,A,ENT);
const uint16_t PROGMEM combo_N_T_SPC_I_S[] = SET_COMBO(N,T,SPC,I,S);
const uint16_t PROGMEM combo_N_T_SPC_I_ENT[] = SET_COMBO(N,T,SPC,I,ENT);
const uint16_t PROGMEM combo_N_T_SPC_S_ENT[] = SET_COMBO(N,T,SPC,S,ENT);
const uint16_t PROGMEM combo_N_T_E_A_I[] = SET_COMBO(N,T,E,A,I);
const uint16_t PROGMEM combo_N_T_E_A_S[] = SET_COMBO(N,T,E,A,S);
const uint16_t PROGMEM combo_N_T_E_A_ENT[] = SET_COMBO(N,T,E,A,ENT);
const uint16_t PROGMEM combo_N_T_E_I_S[] = SET_COMBO(N,T,E,I,S);
const uint16_t PROGMEM combo_N_T_E_I_ENT[] = SET_COMBO(N,T,E,I,ENT);
const uint16_t PROGMEM combo_N_T_E_S_ENT[] = SET_COMBO(N,T,E,S,ENT);
const uint16_t PROGMEM combo_N_T_A_I_S[] = SET_COMBO(N,T,A,I,S);
const uint16_t PROGMEM combo_N_T_A_I_ENT[] = SET_COMBO(N,T,A,I,ENT);
const uint16_t PROGMEM combo_N_T_A_S_ENT[] = SET_COMBO(N,T,A,S,ENT);
const uint16_t PROGMEM combo_N_T_I_S_ENT[] = SET_COMBO(N,T,I,S,ENT);
const uint16_t PROGMEM combo_N_SPC_E_A_I[] = SET_COMBO(N,SPC,E,A,I);
const uint16_t PROGMEM combo_N_SPC_E_A_S[] = SET_COMBO(N,SPC,E,A,S);
const uint16_t PROGMEM combo_N_SPC_E_A_ENT[] = SET_COMBO(N,SPC,E,A,ENT);
const uint16_t PROGMEM combo_N_SPC_E_I_S[] = SET_COMBO(N,SPC,E,I,S);
const uint16_t PROGMEM combo_N_SPC_E_I_ENT[] = SET_COMBO(N,SPC,E,I,ENT);
const uint16_t PROGMEM combo_N_SPC_E_S_ENT[] = SET_COMBO(N,SPC,E,S,ENT);
const uint16_t PROGMEM combo_N_SPC_A_I_S[] = SET_COMBO(N,SPC,A,I,S);
const uint16_t PROGMEM combo_N_SPC_A_I_ENT[] = SET_COMBO(N,SPC,A,I,ENT);
const uint16_t PROGMEM combo_N_SPC_A_S_ENT[] = SET_COMBO(N,SPC,A,S,ENT);
const uint16_t PROGMEM combo_N_SPC_I_S_ENT[] = SET_COMBO(N,SPC,I,S,ENT);
const uint16_t PROGMEM combo_N_E_A_I_S[] = SET_COMBO(N,E,A,I,S);
const uint16_t PROGMEM combo_N_E_A_I_ENT[] = SET_COMBO(N,E,A,I,ENT);
const uint16_t PROGMEM combo_N_E_A_S_ENT[] = SET_COMBO(N,E,A,S,ENT);
const uint16_t PROGMEM combo_N_E_I_S_ENT[] = SET_COMBO(N,E,I,S,ENT);
const uint16_t PROGMEM combo_N_A_I_S_ENT[] = SET_COMBO(N,A,I,S,ENT);
const uint16_t PROGMEM combo_O_T_SPC_E_A[] = SET_COMBO(O,T,SPC,E,A);
const uint16_t PROGMEM combo_O_T_SPC_E_I[] = SET_COMBO(O,T,SPC,E,I);
const uint16_t PROGMEM combo_O_T_SPC_E_S[] = SET_COMBO(O,T,SPC,E,S);
const uint16_t PROGMEM combo_O_T_SPC_E_ENT[] = SET_COMBO(O,T,SPC,E,ENT);
const uint16_t PROGMEM combo_O_T_SPC_A_I[] = SET_COMBO(O,T,SPC,A,I);
const uint16_t PROGMEM combo_O_T_SPC_A_S[] = SET_COMBO(O,T,SPC,A,S);
const uint16_t PROGMEM combo_O_T_SPC_A_ENT[] = SET_COMBO(O,T,SPC,A,ENT);
const uint16_t PROGMEM combo_O_T_SPC_I_S[] = SET_COMBO(O,T,SPC,I,S);
const uint16_t PROGMEM combo_O_T_SPC_I_ENT[] = SET_COMBO(O,T,SPC,I,ENT);
const uint16_t PROGMEM combo_O_T_SPC_S_ENT[] = SET_COMBO(O,T,SPC,S,ENT);
const uint16_t PROGMEM combo_O_T_E_A_I[] = SET_COMBO(O,T,E,A,I);
const uint16_t PROGMEM combo_O_T_E_A_S[] = SET_COMBO(O,T,E,A,S);
const uint16_t PROGMEM combo_O_T_E_A_ENT[] = SET_COMBO(O,T,E,A,ENT);
const uint16_t PROGMEM combo_O_T_E_I_S[] = SET_COMBO(O,T,E,I,S);
const uint16_t PROGMEM combo_O_T_E_I_ENT[] = SET_COMBO(O,T,E,I,ENT);
const uint16_t PROGMEM combo_O_T_E_S_ENT[] = SET_COMBO(O,T,E,S,ENT);
const uint16_t PROGMEM combo_O_T_A_I_S[] = SET_COMBO(O,T,A,I,S);
const uint16_t PROGMEM combo_O_T_A_I_ENT[] = SET_COMBO(O,T,A,I,ENT);
const uint16_t PROGMEM combo_O_T_A_S_ENT[] = SET_COMBO(O,T,A,S,ENT);
const uint16_t PROGMEM combo_O_T_I_S_ENT[] = SET_COMBO(O,T,I,S,ENT);
const uint16_t PROGMEM combo_O_SPC_E_A_I[] = SET_COMBO(O,SPC,E,A,I);
const uint16_t PROGMEM combo_O_SPC_E_A_S[] = SET_COMBO(O,SPC,E,A,S);
const uint16_t PROGMEM combo_O_SPC_E_A_ENT[] = SET_COMBO(O,SPC,E,A,ENT);
const uint16_t PROGMEM combo_O_SPC_E_I_S[] = SET_COMBO(O,SPC,E,I,S);
const uint16_t PROGMEM combo_O_SPC_E_I_ENT[] = SET_COMBO(O,SPC,E,I,ENT);
const uint16_t PROGMEM combo_O_SPC_E_S_ENT[] = SET_COMBO(O,SPC,E,S,ENT);
const uint16_t PROGMEM combo_O_SPC_A_I_S[] = SET_COMBO(O,SPC,A,I,S);
const uint16_t PROGMEM combo_O_SPC_A_I_ENT[] = SET_COMBO(O,SPC,A,I,ENT);
const uint16_t PROGMEM combo_O_SPC_A_S_ENT[] = SET_COMBO(O,SPC,A,S,ENT);
const uint16_t PROGMEM combo_O_SPC_I_S_ENT[] = SET_COMBO(O,SPC,I,S,ENT);
const uint16_t PROGMEM combo_O_E_A_I_S[] = SET_COMBO(O,E,A,I,S);
const uint16_t PROGMEM combo_O_E_A_I_ENT[] = SET_COMBO(O,E,A,I,ENT);
const uint16_t PROGMEM combo_O_E_A_S_ENT[] = SET_COMBO(O,E,A,S,ENT);
const uint16_t PROGMEM combo_O_E_I_S_ENT[] = SET_COMBO(O,E,I,S,ENT);
const uint16_t PROGMEM combo_O_A_I_S_ENT[] = SET_COMBO(O,A,I,S,ENT);
const uint16_t PROGMEM combo_T_SPC_E_A_I[] = SET_COMBO(T,SPC,E,A,I);
const uint16_t PROGMEM combo_T_SPC_E_A_S[] = SET_COMBO(T,SPC,E,A,S);
const uint16_t PROGMEM combo_T_SPC_E_A_ENT[] = SET_COMBO(T,SPC,E,A,ENT);
const uint16_t PROGMEM combo_T_SPC_E_I_S[] = SET_COMBO(T,SPC,E,I,S);
const uint16_t PROGMEM combo_T_SPC_E_I_ENT[] = SET_COMBO(T,SPC,E,I,ENT);
const uint16_t PROGMEM combo_T_SPC_E_S_ENT[] = SET_COMBO(T,SPC,E,S,ENT);
const uint16_t PROGMEM combo_T_SPC_A_I_S[] = SET_COMBO(T,SPC,A,I,S);
const uint16_t PROGMEM combo_T_SPC_A_I_ENT[] = SET_COMBO(T,SPC,A,I,ENT);
const uint16_t PROGMEM combo_T_SPC_A_S_ENT[] = SET_COMBO(T,SPC,A,S,ENT);
const uint16_t PROGMEM combo_T_SPC_I_S_ENT[] = SET_COMBO(T,SPC,I,S,ENT);
const uint16_t PROGMEM combo_T_E_A_I_S[] = SET_COMBO(T,E,A,I,S);
const uint16_t PROGMEM combo_T_E_A_I_ENT[] = SET_COMBO(T,E,A,I,ENT);
const uint16_t PROGMEM combo_T_E_A_S_ENT[] = SET_COMBO(T,E,A,S,ENT);
const uint16_t PROGMEM combo_T_E_I_S_ENT[] = SET_COMBO(T,E,I,S,ENT);
const uint16_t PROGMEM combo_T_A_I_S_ENT[] = SET_COMBO(T,A,I,S,ENT);
const uint16_t PROGMEM combo_SPC_E_A_I_S[] = SET_COMBO(SPC,E,A,I,S);
const uint16_t PROGMEM combo_SPC_E_A_I_ENT[] = SET_COMBO(SPC,E,A,I,ENT);
const uint16_t PROGMEM combo_SPC_E_A_S_ENT[] = SET_COMBO(SPC,E,A,S,ENT);
const uint16_t PROGMEM combo_SPC_E_I_S_ENT[] = SET_COMBO(SPC,E,I,S,ENT);
const uint16_t PROGMEM combo_SPC_A_I_S_ENT[] = SET_COMBO(SPC,A,I,S,ENT);

    //Copy this section into keymap.c under "combo_t key_combos[] = {" then uncomment to use
    //Combo sets of 5 keys for both hand(s)
//COMBO(combo_R_N_O_T_E        , KC_combo_mapping),
//COMBO(combo_R_N_O_T_A        , KC_combo_mapping),
//COMBO(combo_R_N_O_T_I        , KC_combo_mapping),
//COMBO(combo_R_N_O_T_S        , KC_combo_mapping),
//COMBO(combo_R_N_O_T_ENT        , KC_combo_mapping),
//COMBO(combo_R_N_O_SPC_E        , KC_combo_mapping),
//COMBO(combo_R_N_O_SPC_A        , KC_combo_mapping),
//COMBO(combo_R_N_O_SPC_I        , KC_combo_mapping),
//COMBO(combo_R_N_O_SPC_S        , KC_combo_mapping),
//COMBO(combo_R_N_O_SPC_ENT        , KC_combo_mapping),
//COMBO(combo_R_N_O_E_A        , KC_combo_mapping),
//COMBO(combo_R_N_O_E_I        , KC_combo_mapping),
//COMBO(combo_R_N_O_E_S        , KC_combo_mapping),
//COMBO(combo_R_N_O_E_ENT        , KC_combo_mapping),
//COMBO(combo_R_N_O_A_I        , KC_combo_mapping),
//COMBO(combo_R_N_O_A_S        , KC_combo_mapping),
//COMBO(combo_R_N_O_A_ENT        , KC_combo_mapping),
//COMBO(combo_R_N_O_I_S        , KC_combo_mapping),
//COMBO(combo_R_N_O_I_ENT        , KC_combo_mapping),
//COMBO(combo_R_N_O_S_ENT        , KC_combo_mapping),
//COMBO(combo_R_N_T_SPC_E        , KC_combo_mapping),
//COMBO(combo_R_N_T_SPC_A        , KC_combo_mapping),
//COMBO(combo_R_N_T_SPC_I        , KC_combo_mapping),
//COMBO(combo_R_N_T_SPC_S        , KC_combo_mapping),
//COMBO(combo_R_N_T_SPC_ENT        , KC_combo_mapping),
//COMBO(combo_R_N_T_E_A        , KC_combo_mapping),
//COMBO(combo_R_N_T_E_I        , KC_combo_mapping),
//COMBO(combo_R_N_T_E_S        , KC_combo_mapping),
//COMBO(combo_R_N_T_E_ENT        , KC_combo_mapping),
//COMBO(combo_R_N_T_A_I        , KC_combo_mapping),
//COMBO(combo_R_N_T_A_S        , KC_combo_mapping),
//COMBO(combo_R_N_T_A_ENT        , KC_combo_mapping),
//COMBO(combo_R_N_T_I_S        , KC_combo_mapping),
//COMBO(combo_R_N_T_I_ENT        , KC_combo_mapping),
//COMBO(combo_R_N_T_S_ENT        , KC_combo_mapping),
//COMBO(combo_R_N_SPC_E_A        , KC_combo_mapping),
//COMBO(combo_R_N_SPC_E_I        , KC_combo_mapping),
//COMBO(combo_R_N_SPC_E_S        , KC_combo_mapping),
//COMBO(combo_R_N_SPC_E_ENT        , KC_combo_mapping),
//COMBO(combo_R_N_SPC_A_I        , KC_combo_mapping),
//COMBO(combo_R_N_SPC_A_S        , KC_combo_mapping),
//COMBO(combo_R_N_SPC_A_ENT        , KC_combo_mapping),
//COMBO(combo_R_N_SPC_I_S        , KC_combo_mapping),
//COMBO(combo_R_N_SPC_I_ENT        , KC_combo_mapping),
//COMBO(combo_R_N_SPC_S_ENT        , KC_combo_mapping),
//COMBO(combo_R_N_E_A_I        , KC_combo_mapping),
//COMBO(combo_R_N_E_A_S        , KC_combo_mapping),
//COMBO(combo_R_N_E_A_ENT        , KC_combo_mapping),
//COMBO(combo_R_N_E_I_S        , KC_combo_mapping),
//COMBO(combo_R_N_E_I_ENT        , KC_combo_mapping),
//COMBO(combo_R_N_E_S_ENT        , KC_combo_mapping),
//COMBO(combo_R_N_A_I_S        , KC_combo_mapping),
//COMBO(combo_R_N_A_I_ENT        , KC_combo_mapping),
//COMBO(combo_R_N_A_S_ENT        , KC_combo_mapping),
//COMBO(combo_R_N_I_S_ENT        , KC_combo_mapping),
//COMBO(combo_R_O_T_SPC_E        , KC_combo_mapping),
//COMBO(combo_R_O_T_SPC_A        , KC_combo_mapping),
//COMBO(combo_R_O_T_SPC_I        , KC_combo_mapping),
//COMBO(combo_R_O_T_SPC_S        , KC_combo_mapping),
//COMBO(combo_R_O_T_SPC_ENT        , KC_combo_mapping),
//COMBO(combo_R_O_T_E_A        , KC_combo_mapping),
//COMBO(combo_R_O_T_E_I        , KC_combo_mapping),
//COMBO(combo_R_O_T_E_S        , KC_combo_mapping),
//COMBO(combo_R_O_T_E_ENT        , KC_combo_mapping),
//COMBO(combo_R_O_T_A_I        , KC_combo_mapping),
//COMBO(combo_R_O_T_A_S        , KC_combo_mapping),
//COMBO(combo_R_O_T_A_ENT        , KC_combo_mapping),
//COMBO(combo_R_O_T_I_S        , KC_combo_mapping),
//COMBO(combo_R_O_T_I_ENT        , KC_combo_mapping),
//COMBO(combo_R_O_T_S_ENT        , KC_combo_mapping),
//COMBO(combo_R_O_SPC_E_A        , KC_combo_mapping),
//COMBO(combo_R_O_SPC_E_I        , KC_combo_mapping),
//COMBO(combo_R_O_SPC_E_S        , KC_combo_mapping),
//COMBO(combo_R_O_SPC_E_ENT        , KC_combo_mapping),
//COMBO(combo_R_O_SPC_A_I        , KC_combo_mapping),
//COMBO(combo_R_O_SPC_A_S        , KC_combo_mapping),
//COMBO(combo_R_O_SPC_A_ENT        , KC_combo_mapping),
//COMBO(combo_R_O_SPC_I_S        , KC_combo_mapping),
//COMBO(combo_R_O_SPC_I_ENT        , KC_combo_mapping),
//COMBO(combo_R_O_SPC_S_ENT        , KC_combo_mapping),
//COMBO(combo_R_O_E_A_I        , KC_combo_mapping),
//COMBO(combo_R_O_E_A_S        , KC_combo_mapping),
//COMBO(combo_R_O_E_A_ENT        , KC_combo_mapping),
//COMBO(combo_R_O_E_I_S        , KC_combo_mapping),
//COMBO(combo_R_O_E_I_ENT        , KC_combo_mapping),
//COMBO(combo_R_O_E_S_ENT        , KC_combo_mapping),
//COMBO(combo_R_O_A_I_S        , KC_combo_mapping),
//COMBO(combo_R_O_A_I_ENT        , KC_combo_mapping),
//COMBO(combo_R_O_A_S_ENT        , KC_combo_mapping),
//COMBO(combo_R_O_I_S_ENT        , KC_combo_mapping),
//COMBO(combo_R_T_SPC_E_A        , KC_combo_mapping),
//COMBO(combo_R_T_SPC_E_I        , KC_combo_mapping),
//COMBO(combo_R_T_SPC_E_S        , KC_combo_mapping),
//COMBO(combo_R_T_SPC_E_ENT        , KC_combo_mapping),
//COMBO(combo_R_T_SPC_A_I        , KC_combo_mapping),
//COMBO(combo_R_T_SPC_A_S        , KC_combo_mapping),
//COMBO(combo_R_T_SPC_A_ENT        , KC_combo_mapping),
//COMBO(combo_R_T_SPC_I_S        , KC_combo_mapping),
//COMBO(combo_R_T_SPC_I_ENT        , KC_combo_mapping),
//COMBO(combo_R_T_SPC_S_ENT        , KC_combo_mapping),
//COMBO(combo_R_T_E_A_I        , KC_combo_mapping),
//COMBO(combo_R_T_E_A_S        , KC_combo_mapping),
//COMBO(combo_R_T_E_A_ENT        , KC_combo_mapping),
//COMBO(combo_R_T_E_I_S        , KC_combo_mapping),
//COMBO(combo_R_T_E_I_ENT        , KC_combo_mapping),
//COMBO(combo_R_T_E_S_ENT        , KC_combo_mapping),
//COMBO(combo_R_T_A_I_S        , KC_combo_mapping),
//COMBO(combo_R_T_A_I_ENT        , KC_combo_mapping),
//COMBO(combo_R_T_A_S_ENT        , KC_combo_mapping),
//COMBO(combo_R_T_I_S_ENT        , KC_combo_mapping),
//COMBO(combo_R_SPC_E_A_I        , KC_combo_mapping),
//COMBO(combo_R_SPC_E_A_S        , KC_combo_mapping),
//COMBO(combo_R_SPC_E_A_ENT        , KC_combo_mapping),
//COMBO(combo_R_SPC_E_I_S        , KC_combo_mapping),
//COMBO(combo_R_SPC_E_I_ENT        , KC_combo_mapping),
//COMBO(combo_R_SPC_E_S_ENT        , KC_combo_mapping),
//COMBO(combo_R_SPC_A_I_S        , KC_combo_mapping),
//COMBO(combo_R_SPC_A_I_ENT        , KC_combo_mapping),
//COMBO(combo_R_SPC_A_S_ENT        , KC_combo_mapping),
//COMBO(combo_R_SPC_I_S_ENT        , KC_combo_mapping),
//COMBO(combo_R_E_A_I_S        , KC_combo_mapping),
//COMBO(combo_R_E_A_I_ENT        , KC_combo_mapping),
//COMBO(combo_R_E_A_S_ENT        , KC_combo_mapping),
//COMBO(combo_R_E_I_S_ENT        , KC_combo_mapping),
//COMBO(combo_R_A_I_S_ENT        , KC_combo_mapping),
//COMBO(combo_N_O_T_SPC_E        , KC_combo_mapping),
//COMBO(combo_N_O_T_SPC_A        , KC_combo_mapping),
//COMBO(combo_N_O_T_SPC_I        , KC_combo_mapping),
//COMBO(combo_N_O_T_SPC_S        , KC_combo_mapping),
//COMBO(combo_N_O_T_SPC_ENT        , KC_combo_mapping),
//COMBO(combo_N_O_T_E_A        , KC_combo_mapping),
//COMBO(combo_N_O_T_E_I        , KC_combo_mapping),
//COMBO(combo_N_O_T_E_S        , KC_combo_mapping),
//COMBO(combo_N_O_T_E_ENT        , KC_combo_mapping),
//COMBO(combo_N_O_T_A_I        , KC_combo_mapping),
//COMBO(combo_N_O_T_A_S        , KC_combo_mapping),
//COMBO(combo_N_O_T_A_ENT        , KC_combo_mapping),
//COMBO(combo_N_O_T_I_S        , KC_combo_mapping),
//COMBO(combo_N_O_T_I_ENT        , KC_combo_mapping),
//COMBO(combo_N_O_T_S_ENT        , KC_combo_mapping),
//COMBO(combo_N_O_SPC_E_A        , KC_combo_mapping),
//COMBO(combo_N_O_SPC_E_I        , KC_combo_mapping),
//COMBO(combo_N_O_SPC_E_S        , KC_combo_mapping),
//COMBO(combo_N_O_SPC_E_ENT        , KC_combo_mapping),
//COMBO(combo_N_O_SPC_A_I        , KC_combo_mapping),
//COMBO(combo_N_O_SPC_A_S        , KC_combo_mapping),
//COMBO(combo_N_O_SPC_A_ENT        , KC_combo_mapping),
//COMBO(combo_N_O_SPC_I_S        , KC_combo_mapping),
//COMBO(combo_N_O_SPC_I_ENT        , KC_combo_mapping),
//COMBO(combo_N_O_SPC_S_ENT        , KC_combo_mapping),
//COMBO(combo_N_O_E_A_I        , KC_combo_mapping),
//COMBO(combo_N_O_E_A_S        , KC_combo_mapping),
//COMBO(combo_N_O_E_A_ENT        , KC_combo_mapping),
//COMBO(combo_N_O_E_I_S        , KC_combo_mapping),
//COMBO(combo_N_O_E_I_ENT        , KC_combo_mapping),
//COMBO(combo_N_O_E_S_ENT        , KC_combo_mapping),
//COMBO(combo_N_O_A_I_S        , KC_combo_mapping),
//COMBO(combo_N_O_A_I_ENT        , KC_combo_mapping),
//COMBO(combo_N_O_A_S_ENT        , KC_combo_mapping),
//COMBO(combo_N_O_I_S_ENT        , KC_combo_mapping),
//COMBO(combo_N_T_SPC_E_A        , KC_combo_mapping),
//COMBO(combo_N_T_SPC_E_I        , KC_combo_mapping),
//COMBO(combo_N_T_SPC_E_S        , KC_combo_mapping),
//COMBO(combo_N_T_SPC_E_ENT        , KC_combo_mapping),
//COMBO(combo_N_T_SPC_A_I        , KC_combo_mapping),
//COMBO(combo_N_T_SPC_A_S        , KC_combo_mapping),
//COMBO(combo_N_T_SPC_A_ENT        , KC_combo_mapping),
//COMBO(combo_N_T_SPC_I_S        , KC_combo_mapping),
//COMBO(combo_N_T_SPC_I_ENT        , KC_combo_mapping),
//COMBO(combo_N_T_SPC_S_ENT        , KC_combo_mapping),
//COMBO(combo_N_T_E_A_I        , KC_combo_mapping),
//COMBO(combo_N_T_E_A_S        , KC_combo_mapping),
//COMBO(combo_N_T_E_A_ENT        , KC_combo_mapping),
//COMBO(combo_N_T_E_I_S        , KC_combo_mapping),
//COMBO(combo_N_T_E_I_ENT        , KC_combo_mapping),
//COMBO(combo_N_T_E_S_ENT        , KC_combo_mapping),
//COMBO(combo_N_T_A_I_S        , KC_combo_mapping),
//COMBO(combo_N_T_A_I_ENT        , KC_combo_mapping),
//COMBO(combo_N_T_A_S_ENT        , KC_combo_mapping),
//COMBO(combo_N_T_I_S_ENT        , KC_combo_mapping),
//COMBO(combo_N_SPC_E_A_I        , KC_combo_mapping),
//COMBO(combo_N_SPC_E_A_S        , KC_combo_mapping),
//COMBO(combo_N_SPC_E_A_ENT        , KC_combo_mapping),
//COMBO(combo_N_SPC_E_I_S        , KC_combo_mapping),
//COMBO(combo_N_SPC_E_I_ENT        , KC_combo_mapping),
//COMBO(combo_N_SPC_E_S_ENT        , KC_combo_mapping),
//COMBO(combo_N_SPC_A_I_S        , KC_combo_mapping),
//COMBO(combo_N_SPC_A_I_ENT        , KC_combo_mapping),
//COMBO(combo_N_SPC_A_S_ENT        , KC_combo_mapping),
//COMBO(combo_N_SPC_I_S_ENT        , KC_combo_mapping),
//COMBO(combo_N_E_A_I_S        , KC_combo_mapping),
//COMBO(combo_N_E_A_I_ENT        , KC_combo_mapping),
//COMBO(combo_N_E_A_S_ENT        , KC_combo_mapping),
//COMBO(combo_N_E_I_S_ENT        , KC_combo_mapping),
//COMBO(combo_N_A_I_S_ENT        , KC_combo_mapping),
//COMBO(combo_O_T_SPC_E_A        , KC_combo_mapping),
//COMBO(combo_O_T_SPC_E_I        , KC_combo_mapping),
//COMBO(combo_O_T_SPC_E_S        , KC_combo_mapping),
//COMBO(combo_O_T_SPC_E_ENT        , KC_combo_mapping),
//COMBO(combo_O_T_SPC_A_I        , KC_combo_mapping),
//COMBO(combo_O_T_SPC_A_S        , KC_combo_mapping),
//COMBO(combo_O_T_SPC_A_ENT        , KC_combo_mapping),
//COMBO(combo_O_T_SPC_I_S        , KC_combo_mapping),
//COMBO(combo_O_T_SPC_I_ENT        , KC_combo_mapping),
//COMBO(combo_O_T_SPC_S_ENT        , KC_combo_mapping),
//COMBO(combo_O_T_E_A_I        , KC_combo_mapping),
//COMBO(combo_O_T_E_A_S        , KC_combo_mapping),
//COMBO(combo_O_T_E_A_ENT        , KC_combo_mapping),
//COMBO(combo_O_T_E_I_S        , KC_combo_mapping),
//COMBO(combo_O_T_E_I_ENT        , KC_combo_mapping),
//COMBO(combo_O_T_E_S_ENT        , KC_combo_mapping),
//COMBO(combo_O_T_A_I_S        , KC_combo_mapping),
//COMBO(combo_O_T_A_I_ENT        , KC_combo_mapping),
//COMBO(combo_O_T_A_S_ENT        , KC_combo_mapping),
//COMBO(combo_O_T_I_S_ENT        , KC_combo_mapping),
//COMBO(combo_O_SPC_E_A_I        , KC_combo_mapping),
//COMBO(combo_O_SPC_E_A_S        , KC_combo_mapping),
//COMBO(combo_O_SPC_E_A_ENT        , KC_combo_mapping),
//COMBO(combo_O_SPC_E_I_S        , KC_combo_mapping),
//COMBO(combo_O_SPC_E_I_ENT        , KC_combo_mapping),
//COMBO(combo_O_SPC_E_S_ENT        , KC_combo_mapping),
//COMBO(combo_O_SPC_A_I_S        , KC_combo_mapping),
//COMBO(combo_O_SPC_A_I_ENT        , KC_combo_mapping),
//COMBO(combo_O_SPC_A_S_ENT        , KC_combo_mapping),
//COMBO(combo_O_SPC_I_S_ENT        , KC_combo_mapping),
//COMBO(combo_O_E_A_I_S        , KC_combo_mapping),
//COMBO(combo_O_E_A_I_ENT        , KC_combo_mapping),
//COMBO(combo_O_E_A_S_ENT        , KC_combo_mapping),
//COMBO(combo_O_E_I_S_ENT        , KC_combo_mapping),
//COMBO(combo_O_A_I_S_ENT        , KC_combo_mapping),
//COMBO(combo_T_SPC_E_A_I        , KC_combo_mapping),
//COMBO(combo_T_SPC_E_A_S        , KC_combo_mapping),
//COMBO(combo_T_SPC_E_A_ENT        , KC_combo_mapping),
//COMBO(combo_T_SPC_E_I_S        , KC_combo_mapping),
//COMBO(combo_T_SPC_E_I_ENT        , KC_combo_mapping),
//COMBO(combo_T_SPC_E_S_ENT        , KC_combo_mapping),
//COMBO(combo_T_SPC_A_I_S        , KC_combo_mapping),
//COMBO(combo_T_SPC_A_I_ENT        , KC_combo_mapping),
//COMBO(combo_T_SPC_A_S_ENT        , KC_combo_mapping),
//COMBO(combo_T_SPC_I_S_ENT        , KC_combo_mapping),
//COMBO(combo_T_E_A_I_S        , KC_combo_mapping),
//COMBO(combo_T_E_A_I_ENT        , KC_combo_mapping),
//COMBO(combo_T_E_A_S_ENT        , KC_combo_mapping),
//COMBO(combo_T_E_I_S_ENT        , KC_combo_mapping),
//COMBO(combo_T_A_I_S_ENT        , KC_combo_mapping),
//COMBO(combo_SPC_E_A_I_S        , KC_combo_mapping),
//COMBO(combo_SPC_E_A_I_ENT        , KC_combo_mapping),
//COMBO(combo_SPC_E_A_S_ENT        , KC_combo_mapping),
//COMBO(combo_SPC_E_I_S_ENT        , KC_combo_mapping),
//COMBO(combo_SPC_A_I_S_ENT        , KC_combo_mapping),
