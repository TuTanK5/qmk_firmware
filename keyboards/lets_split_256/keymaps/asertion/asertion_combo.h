
#define DUO(K01, K02) {KC_##K01, KC_##K02, COMBO_END}
#define TRIO(K01, K02, K03) {KC_##K01, KC_##K02, KC_##K03, COMBO_END}
#define QUATRO(K01, K02, K03, K04) {KC_##K01, KC_##K02, KC_##K03, KC_##K04, COMBO_END}

// Left hand combos
	// Two key combos
const uint16_t PROGMEM combo_A_S[] = DUO(A,S);
const uint16_t PROGMEM combo_A_E[] = DUO(A,E);
const uint16_t PROGMEM combo_A_R[] = DUO(A,R);
const uint16_t PROGMEM combo_A_SPC[] = DUO(A,SPC);
const uint16_t PROGMEM combo_S_E[] = DUO(S,E);
const uint16_t PROGMEM combo_S_R[] = DUO(S,R);
const uint16_t PROGMEM combo_S_SPC[] = DUO(S,SPC);
const uint16_t PROGMEM combo_E_R[] = DUO(E,R);
const uint16_t PROGMEM combo_E_SPC[] = DUO(E,SPC);
const uint16_t PROGMEM combo_R_SPC[] = DUO(R,SPC);

	// Three key combos
const uint16_t PROGMEM combo_A_S_E[] = TRIO(A,S,E);
const uint16_t PROGMEM combo_A_S_R[] = TRIO(A,S,R);
const uint16_t PROGMEM combo_A_S_SPC[] = TRIO(A,S,SPC);
const uint16_t PROGMEM combo_A_E_R[] = TRIO(A,E,R);
const uint16_t PROGMEM combo_A_E_SPC[] = TRIO(A,E,SPC);
const uint16_t PROGMEM combo_A_R_SPC[] = TRIO(A,R,SPC);
const uint16_t PROGMEM combo_S_E_R[] = TRIO(S,E,R);
const uint16_t PROGMEM combo_S_E_SPC[] = TRIO(S,E,SPC);
const uint16_t PROGMEM combo_S_R_SPC[] = TRIO(S,R,SPC);
const uint16_t PROGMEM combo_E_R_SPC[] = TRIO(E,R,SPC);

	// Four key combos
const uint16_t PROGMEM combo_A_S_E_R[] = QUATRO(A,S,E,R);
const uint16_t PROGMEM combo_A_S_E_SPC[] = QUATRO(A,S,E,SPC);
const uint16_t PROGMEM combo_A_S_R_SPC[] = QUATRO(A,S,R,SPC);
const uint16_t PROGMEM combo_A_E_R_SPC[] = QUATRO(A,E,R,SPC);
const uint16_t PROGMEM combo_S_E_R_SPC[] = QUATRO(S,E,R,SPC);


// Right hand combos
	// Two key combos
const uint16_t PROGMEM combo_T_I[] = DUO(T,I);
const uint16_t PROGMEM combo_T_O[] = DUO(T,O);
const uint16_t PROGMEM combo_T_N[] = DUO(T,N);
const uint16_t PROGMEM combo_T_ENT[] = DUO(T,ENT);
const uint16_t PROGMEM combo_I_O[] = DUO(I,O);
const uint16_t PROGMEM combo_I_N[] = DUO(I,N);
const uint16_t PROGMEM combo_I_ENT[] = DUO(I,ENT);
const uint16_t PROGMEM combo_O_N[] = DUO(O,N);
const uint16_t PROGMEM combo_O_ENT[] = DUO(O,ENT);
const uint16_t PROGMEM combo_N_ENT[] = DUO(N,ENT);

	// Three key combos
const uint16_t PROGMEM combo_T_I_O[] = TRIO(T,I,O);
const uint16_t PROGMEM combo_T_I_N[] = TRIO(T,I,N);
const uint16_t PROGMEM combo_T_I_ENT[] = TRIO(T,I,ENT);
const uint16_t PROGMEM combo_T_O_N[] = TRIO(T,O,N);
const uint16_t PROGMEM combo_T_O_ENT[] = TRIO(T,O,ENT);
const uint16_t PROGMEM combo_T_N_ENT[] = TRIO(T,N,ENT);
const uint16_t PROGMEM combo_I_O_N[] = TRIO(I,O,N);
const uint16_t PROGMEM combo_I_O_ENT[] = TRIO(I,O,ENT);
const uint16_t PROGMEM combo_I_N_ENT[] = TRIO(I,N,ENT);
const uint16_t PROGMEM combo_O_N_ENT[] = TRIO(O,N,ENT);

	// Four key combos
const uint16_t PROGMEM combo_T_I_O_N[] = QUATRO(T,I,O,N);
const uint16_t PROGMEM combo_T_I_O_ENT[] = QUATRO(T,I,O,ENT);
const uint16_t PROGMEM combo_T_I_N_ENT[] = QUATRO(T,I,N,ENT);
const uint16_t PROGMEM combo_T_O_N_ENT[] = QUATRO(T,O,N,ENT);
const uint16_t PROGMEM combo_I_O_N_ENT[] = QUATRO(I,O,N,ENT);

// Both hand combos
	// Two key combos
const uint16_t PROGMEM combo_A_T[] = DUO(A,T);
const uint16_t PROGMEM combo_A_I[] = DUO(A,I);
const uint16_t PROGMEM combo_A_O[] = DUO(A,O);
const uint16_t PROGMEM combo_A_N[] = DUO(A,N);
const uint16_t PROGMEM combo_A_ENT[] = DUO(A,ENT);
const uint16_t PROGMEM combo_S_T[] = DUO(S,T);
const uint16_t PROGMEM combo_S_I[] = DUO(S,I);
const uint16_t PROGMEM combo_S_O[] = DUO(S,O);
const uint16_t PROGMEM combo_S_N[] = DUO(S,N);
const uint16_t PROGMEM combo_S_ENT[] = DUO(S,ENT);
const uint16_t PROGMEM combo_E_T[] = DUO(E,T);
const uint16_t PROGMEM combo_E_I[] = DUO(E,I);
const uint16_t PROGMEM combo_E_O[] = DUO(E,O);
const uint16_t PROGMEM combo_E_N[] = DUO(E,N);
const uint16_t PROGMEM combo_E_ENT[] = DUO(E,ENT);
const uint16_t PROGMEM combo_R_T[] = DUO(R,T);
const uint16_t PROGMEM combo_R_I[] = DUO(R,I);
const uint16_t PROGMEM combo_R_O[] = DUO(R,O);
const uint16_t PROGMEM combo_R_N[] = DUO(R,N);
const uint16_t PROGMEM combo_R_ENT[] = DUO(R,ENT);
const uint16_t PROGMEM combo_SPC_T[] = DUO(SPC,T);
const uint16_t PROGMEM combo_SPC_I[] = DUO(SPC,I);
const uint16_t PROGMEM combo_SPC_O[] = DUO(SPC,O);
const uint16_t PROGMEM combo_SPC_N[] = DUO(SPC,N);
const uint16_t PROGMEM combo_SPC_ENT[] = DUO(SPC,ENT);

	// Three key combos
const uint16_t PROGMEM combo_A_S_T[] = TRIO(A,S,T);
const uint16_t PROGMEM combo_A_S_I[] = TRIO(A,S,I);
const uint16_t PROGMEM combo_A_S_O[] = TRIO(A,S,O);
const uint16_t PROGMEM combo_A_S_N[] = TRIO(A,S,N);
const uint16_t PROGMEM combo_A_S_ENT[] = TRIO(A,S,ENT);
const uint16_t PROGMEM combo_A_E_T[] = TRIO(A,E,T);
const uint16_t PROGMEM combo_A_E_I[] = TRIO(A,E,I);
const uint16_t PROGMEM combo_A_E_O[] = TRIO(A,E,O);
const uint16_t PROGMEM combo_A_E_N[] = TRIO(A,E,N);
const uint16_t PROGMEM combo_A_E_ENT[] = TRIO(A,E,ENT);
const uint16_t PROGMEM combo_A_R_T[] = TRIO(A,R,T);
const uint16_t PROGMEM combo_A_R_I[] = TRIO(A,R,I);
const uint16_t PROGMEM combo_A_R_O[] = TRIO(A,R,O);
const uint16_t PROGMEM combo_A_R_N[] = TRIO(A,R,N);
const uint16_t PROGMEM combo_A_R_ENT[] = TRIO(A,R,ENT);
const uint16_t PROGMEM combo_A_SPC_T[] = TRIO(A,SPC,T);
const uint16_t PROGMEM combo_A_SPC_I[] = TRIO(A,SPC,I);
const uint16_t PROGMEM combo_A_SPC_O[] = TRIO(A,SPC,O);
const uint16_t PROGMEM combo_A_SPC_N[] = TRIO(A,SPC,N);
const uint16_t PROGMEM combo_A_SPC_ENT[] = TRIO(A,SPC,ENT);
const uint16_t PROGMEM combo_A_T_I[] = TRIO(A,T,I);
const uint16_t PROGMEM combo_A_T_O[] = TRIO(A,T,O);
const uint16_t PROGMEM combo_A_T_N[] = TRIO(A,T,N);
const uint16_t PROGMEM combo_A_T_ENT[] = TRIO(A,T,ENT);
const uint16_t PROGMEM combo_A_I_O[] = TRIO(A,I,O);
const uint16_t PROGMEM combo_A_I_N[] = TRIO(A,I,N);
const uint16_t PROGMEM combo_A_I_ENT[] = TRIO(A,I,ENT);
const uint16_t PROGMEM combo_A_O_N[] = TRIO(A,O,N);
const uint16_t PROGMEM combo_A_O_ENT[] = TRIO(A,O,ENT);
const uint16_t PROGMEM combo_A_N_ENT[] = TRIO(A,N,ENT);
const uint16_t PROGMEM combo_S_E_T[] = TRIO(S,E,T);
const uint16_t PROGMEM combo_S_E_I[] = TRIO(S,E,I);
const uint16_t PROGMEM combo_S_E_O[] = TRIO(S,E,O);
const uint16_t PROGMEM combo_S_E_N[] = TRIO(S,E,N);
const uint16_t PROGMEM combo_S_E_ENT[] = TRIO(S,E,ENT);
const uint16_t PROGMEM combo_S_R_T[] = TRIO(S,R,T);
const uint16_t PROGMEM combo_S_R_I[] = TRIO(S,R,I);
const uint16_t PROGMEM combo_S_R_O[] = TRIO(S,R,O);
const uint16_t PROGMEM combo_S_R_N[] = TRIO(S,R,N);
const uint16_t PROGMEM combo_S_R_ENT[] = TRIO(S,R,ENT);
const uint16_t PROGMEM combo_S_SPC_T[] = TRIO(S,SPC,T);
const uint16_t PROGMEM combo_S_SPC_I[] = TRIO(S,SPC,I);
const uint16_t PROGMEM combo_S_SPC_O[] = TRIO(S,SPC,O);
const uint16_t PROGMEM combo_S_SPC_N[] = TRIO(S,SPC,N);
const uint16_t PROGMEM combo_S_SPC_ENT[] = TRIO(S,SPC,ENT);
const uint16_t PROGMEM combo_S_T_I[] = TRIO(S,T,I);
const uint16_t PROGMEM combo_S_T_O[] = TRIO(S,T,O);
const uint16_t PROGMEM combo_S_T_N[] = TRIO(S,T,N);
const uint16_t PROGMEM combo_S_T_ENT[] = TRIO(S,T,ENT);
const uint16_t PROGMEM combo_S_I_O[] = TRIO(S,I,O);
const uint16_t PROGMEM combo_S_I_N[] = TRIO(S,I,N);
const uint16_t PROGMEM combo_S_I_ENT[] = TRIO(S,I,ENT);
const uint16_t PROGMEM combo_S_O_N[] = TRIO(S,O,N);
const uint16_t PROGMEM combo_S_O_ENT[] = TRIO(S,O,ENT);
const uint16_t PROGMEM combo_S_N_ENT[] = TRIO(S,N,ENT);
const uint16_t PROGMEM combo_E_R_T[] = TRIO(E,R,T);
const uint16_t PROGMEM combo_E_R_I[] = TRIO(E,R,I);
const uint16_t PROGMEM combo_E_R_O[] = TRIO(E,R,O);
const uint16_t PROGMEM combo_E_R_N[] = TRIO(E,R,N);
const uint16_t PROGMEM combo_E_R_ENT[] = TRIO(E,R,ENT);
const uint16_t PROGMEM combo_E_SPC_T[] = TRIO(E,SPC,T);
const uint16_t PROGMEM combo_E_SPC_I[] = TRIO(E,SPC,I);
const uint16_t PROGMEM combo_E_SPC_O[] = TRIO(E,SPC,O);
const uint16_t PROGMEM combo_E_SPC_N[] = TRIO(E,SPC,N);
const uint16_t PROGMEM combo_E_SPC_ENT[] = TRIO(E,SPC,ENT);
const uint16_t PROGMEM combo_E_T_I[] = TRIO(E,T,I);
const uint16_t PROGMEM combo_E_T_O[] = TRIO(E,T,O);
const uint16_t PROGMEM combo_E_T_N[] = TRIO(E,T,N);
const uint16_t PROGMEM combo_E_T_ENT[] = TRIO(E,T,ENT);
const uint16_t PROGMEM combo_E_I_O[] = TRIO(E,I,O);
const uint16_t PROGMEM combo_E_I_N[] = TRIO(E,I,N);
const uint16_t PROGMEM combo_E_I_ENT[] = TRIO(E,I,ENT);
const uint16_t PROGMEM combo_E_O_N[] = TRIO(E,O,N);
const uint16_t PROGMEM combo_E_O_ENT[] = TRIO(E,O,ENT);
const uint16_t PROGMEM combo_E_N_ENT[] = TRIO(E,N,ENT);
const uint16_t PROGMEM combo_R_SPC_T[] = TRIO(R,SPC,T);
const uint16_t PROGMEM combo_R_SPC_I[] = TRIO(R,SPC,I);
const uint16_t PROGMEM combo_R_SPC_O[] = TRIO(R,SPC,O);
const uint16_t PROGMEM combo_R_SPC_N[] = TRIO(R,SPC,N);
const uint16_t PROGMEM combo_R_SPC_ENT[] = TRIO(R,SPC,ENT);
const uint16_t PROGMEM combo_R_T_I[] = TRIO(R,T,I);
const uint16_t PROGMEM combo_R_T_O[] = TRIO(R,T,O);
const uint16_t PROGMEM combo_R_T_N[] = TRIO(R,T,N);
const uint16_t PROGMEM combo_R_T_ENT[] = TRIO(R,T,ENT);
const uint16_t PROGMEM combo_R_I_O[] = TRIO(R,I,O);
const uint16_t PROGMEM combo_R_I_N[] = TRIO(R,I,N);
const uint16_t PROGMEM combo_R_I_ENT[] = TRIO(R,I,ENT);
const uint16_t PROGMEM combo_R_O_N[] = TRIO(R,O,N);
const uint16_t PROGMEM combo_R_O_ENT[] = TRIO(R,O,ENT);
const uint16_t PROGMEM combo_R_N_ENT[] = TRIO(R,N,ENT);
const uint16_t PROGMEM combo_SPC_T_I[] = TRIO(SPC,T,I);
const uint16_t PROGMEM combo_SPC_T_O[] = TRIO(SPC,T,O);
const uint16_t PROGMEM combo_SPC_T_N[] = TRIO(SPC,T,N);
const uint16_t PROGMEM combo_SPC_T_ENT[] = TRIO(SPC,T,ENT);
const uint16_t PROGMEM combo_SPC_I_O[] = TRIO(SPC,I,O);
const uint16_t PROGMEM combo_SPC_I_N[] = TRIO(SPC,I,N);
const uint16_t PROGMEM combo_SPC_I_ENT[] = TRIO(SPC,I,ENT);
const uint16_t PROGMEM combo_SPC_O_N[] = TRIO(SPC,O,N);
const uint16_t PROGMEM combo_SPC_O_ENT[] = TRIO(SPC,O,ENT);
const uint16_t PROGMEM combo_SPC_N_ENT[] = TRIO(SPC,N,ENT);

	// Four key combos
// const uint16_t PROGMEM combo_A_S_E_T[] = QUATRO(A,S,E,T);
// const uint16_t PROGMEM combo_A_S_E_I[] = QUATRO(A,S,E,I);
// const uint16_t PROGMEM combo_A_S_E_O[] = QUATRO(A,S,E,O);
// const uint16_t PROGMEM combo_A_S_E_N[] = QUATRO(A,S,E,N);
// const uint16_t PROGMEM combo_A_S_E_ENT[] = QUATRO(A,S,E,ENT);
// const uint16_t PROGMEM combo_A_S_R_T[] = QUATRO(A,S,R,T);
// const uint16_t PROGMEM combo_A_S_R_I[] = QUATRO(A,S,R,I);
// const uint16_t PROGMEM combo_A_S_R_O[] = QUATRO(A,S,R,O);
// const uint16_t PROGMEM combo_A_S_R_N[] = QUATRO(A,S,R,N);
// const uint16_t PROGMEM combo_A_S_R_ENT[] = QUATRO(A,S,R,ENT);
// const uint16_t PROGMEM combo_A_S_SPC_T[] = QUATRO(A,S,SPC,T);
// const uint16_t PROGMEM combo_A_S_SPC_I[] = QUATRO(A,S,SPC,I);
// const uint16_t PROGMEM combo_A_S_SPC_O[] = QUATRO(A,S,SPC,O);
// const uint16_t PROGMEM combo_A_S_SPC_N[] = QUATRO(A,S,SPC,N);
// const uint16_t PROGMEM combo_A_S_SPC_ENT[] = QUATRO(A,S,SPC,ENT);
// const uint16_t PROGMEM combo_A_S_T_I[] = QUATRO(A,S,T,I);
// const uint16_t PROGMEM combo_A_S_T_O[] = QUATRO(A,S,T,O);
// const uint16_t PROGMEM combo_A_S_T_N[] = QUATRO(A,S,T,N);
// const uint16_t PROGMEM combo_A_S_T_ENT[] = QUATRO(A,S,T,ENT);
// const uint16_t PROGMEM combo_A_S_I_O[] = QUATRO(A,S,I,O);
// const uint16_t PROGMEM combo_A_S_I_N[] = QUATRO(A,S,I,N);
// const uint16_t PROGMEM combo_A_S_I_ENT[] = QUATRO(A,S,I,ENT);
// const uint16_t PROGMEM combo_A_S_O_N[] = QUATRO(A,S,O,N);
// const uint16_t PROGMEM combo_A_S_O_ENT[] = QUATRO(A,S,O,ENT);
// const uint16_t PROGMEM combo_A_S_N_ENT[] = QUATRO(A,S,N,ENT);
// const uint16_t PROGMEM combo_A_E_R_T[] = QUATRO(A,E,R,T);
// const uint16_t PROGMEM combo_A_E_R_I[] = QUATRO(A,E,R,I);
// const uint16_t PROGMEM combo_A_E_R_O[] = QUATRO(A,E,R,O);
// const uint16_t PROGMEM combo_A_E_R_N[] = QUATRO(A,E,R,N);
// const uint16_t PROGMEM combo_A_E_R_ENT[] = QUATRO(A,E,R,ENT);
// const uint16_t PROGMEM combo_A_E_SPC_T[] = QUATRO(A,E,SPC,T);
// const uint16_t PROGMEM combo_A_E_SPC_I[] = QUATRO(A,E,SPC,I);
// const uint16_t PROGMEM combo_A_E_SPC_O[] = QUATRO(A,E,SPC,O);
// const uint16_t PROGMEM combo_A_E_SPC_N[] = QUATRO(A,E,SPC,N);
// const uint16_t PROGMEM combo_A_E_SPC_ENT[] = QUATRO(A,E,SPC,ENT);
// const uint16_t PROGMEM combo_A_E_T_I[] = QUATRO(A,E,T,I);
// const uint16_t PROGMEM combo_A_E_T_O[] = QUATRO(A,E,T,O);
// const uint16_t PROGMEM combo_A_E_T_N[] = QUATRO(A,E,T,N);
// const uint16_t PROGMEM combo_A_E_T_ENT[] = QUATRO(A,E,T,ENT);
// const uint16_t PROGMEM combo_A_E_I_O[] = QUATRO(A,E,I,O);
// const uint16_t PROGMEM combo_A_E_I_N[] = QUATRO(A,E,I,N);
// const uint16_t PROGMEM combo_A_E_I_ENT[] = QUATRO(A,E,I,ENT);
// const uint16_t PROGMEM combo_A_E_O_N[] = QUATRO(A,E,O,N);
// const uint16_t PROGMEM combo_A_E_O_ENT[] = QUATRO(A,E,O,ENT);
// const uint16_t PROGMEM combo_A_E_N_ENT[] = QUATRO(A,E,N,ENT);
// const uint16_t PROGMEM combo_A_R_SPC_T[] = QUATRO(A,R,SPC,T);
// const uint16_t PROGMEM combo_A_R_SPC_I[] = QUATRO(A,R,SPC,I);
// const uint16_t PROGMEM combo_A_R_SPC_O[] = QUATRO(A,R,SPC,O);
// const uint16_t PROGMEM combo_A_R_SPC_N[] = QUATRO(A,R,SPC,N);
// const uint16_t PROGMEM combo_A_R_SPC_ENT[] = QUATRO(A,R,SPC,ENT);
// const uint16_t PROGMEM combo_A_R_T_I[] = QUATRO(A,R,T,I);
// const uint16_t PROGMEM combo_A_R_T_O[] = QUATRO(A,R,T,O);
// const uint16_t PROGMEM combo_A_R_T_N[] = QUATRO(A,R,T,N);
// const uint16_t PROGMEM combo_A_R_T_ENT[] = QUATRO(A,R,T,ENT);
// const uint16_t PROGMEM combo_A_R_I_O[] = QUATRO(A,R,I,O);
// const uint16_t PROGMEM combo_A_R_I_N[] = QUATRO(A,R,I,N);
// const uint16_t PROGMEM combo_A_R_I_ENT[] = QUATRO(A,R,I,ENT);
// const uint16_t PROGMEM combo_A_R_O_N[] = QUATRO(A,R,O,N);
// const uint16_t PROGMEM combo_A_R_O_ENT[] = QUATRO(A,R,O,ENT);
// const uint16_t PROGMEM combo_A_R_N_ENT[] = QUATRO(A,R,N,ENT);
// const uint16_t PROGMEM combo_A_SPC_T_I[] = QUATRO(A,SPC,T,I);
// const uint16_t PROGMEM combo_A_SPC_T_O[] = QUATRO(A,SPC,T,O);
// const uint16_t PROGMEM combo_A_SPC_T_N[] = QUATRO(A,SPC,T,N);
// const uint16_t PROGMEM combo_A_SPC_T_ENT[] = QUATRO(A,SPC,T,ENT);
// const uint16_t PROGMEM combo_A_SPC_I_O[] = QUATRO(A,SPC,I,O);
// const uint16_t PROGMEM combo_A_SPC_I_N[] = QUATRO(A,SPC,I,N);
// const uint16_t PROGMEM combo_A_SPC_I_ENT[] = QUATRO(A,SPC,I,ENT);
// const uint16_t PROGMEM combo_A_SPC_O_N[] = QUATRO(A,SPC,O,N);
// const uint16_t PROGMEM combo_A_SPC_O_ENT[] = QUATRO(A,SPC,O,ENT);
// const uint16_t PROGMEM combo_A_SPC_N_ENT[] = QUATRO(A,SPC,N,ENT);
// const uint16_t PROGMEM combo_A_T_I_O[] = QUATRO(A,T,I,O);
// const uint16_t PROGMEM combo_A_T_I_N[] = QUATRO(A,T,I,N);
// const uint16_t PROGMEM combo_A_T_I_ENT[] = QUATRO(A,T,I,ENT);
// const uint16_t PROGMEM combo_A_T_O_N[] = QUATRO(A,T,O,N);
// const uint16_t PROGMEM combo_A_T_O_ENT[] = QUATRO(A,T,O,ENT);
// const uint16_t PROGMEM combo_A_T_N_ENT[] = QUATRO(A,T,N,ENT);
// const uint16_t PROGMEM combo_A_I_O_N[] = QUATRO(A,I,O,N);
// const uint16_t PROGMEM combo_A_I_O_ENT[] = QUATRO(A,I,O,ENT);
// const uint16_t PROGMEM combo_A_I_N_ENT[] = QUATRO(A,I,N,ENT);
// const uint16_t PROGMEM combo_A_O_N_ENT[] = QUATRO(A,O,N,ENT);
// const uint16_t PROGMEM combo_S_E_R_T[] = QUATRO(S,E,R,T);
// const uint16_t PROGMEM combo_S_E_R_I[] = QUATRO(S,E,R,I);
// const uint16_t PROGMEM combo_S_E_R_O[] = QUATRO(S,E,R,O);
// const uint16_t PROGMEM combo_S_E_R_N[] = QUATRO(S,E,R,N);
// const uint16_t PROGMEM combo_S_E_R_ENT[] = QUATRO(S,E,R,ENT);
// const uint16_t PROGMEM combo_S_E_SPC_T[] = QUATRO(S,E,SPC,T);
// const uint16_t PROGMEM combo_S_E_SPC_I[] = QUATRO(S,E,SPC,I);
// const uint16_t PROGMEM combo_S_E_SPC_O[] = QUATRO(S,E,SPC,O);
// const uint16_t PROGMEM combo_S_E_SPC_N[] = QUATRO(S,E,SPC,N);
// const uint16_t PROGMEM combo_S_E_SPC_ENT[] = QUATRO(S,E,SPC,ENT);
// const uint16_t PROGMEM combo_S_E_T_I[] = QUATRO(S,E,T,I);
// const uint16_t PROGMEM combo_S_E_T_O[] = QUATRO(S,E,T,O);
// const uint16_t PROGMEM combo_S_E_T_N[] = QUATRO(S,E,T,N);
// const uint16_t PROGMEM combo_S_E_T_ENT[] = QUATRO(S,E,T,ENT);
// const uint16_t PROGMEM combo_S_E_I_O[] = QUATRO(S,E,I,O);
// const uint16_t PROGMEM combo_S_E_I_N[] = QUATRO(S,E,I,N);
// const uint16_t PROGMEM combo_S_E_I_ENT[] = QUATRO(S,E,I,ENT);
// const uint16_t PROGMEM combo_S_E_O_N[] = QUATRO(S,E,O,N);
// const uint16_t PROGMEM combo_S_E_O_ENT[] = QUATRO(S,E,O,ENT);
// const uint16_t PROGMEM combo_S_E_N_ENT[] = QUATRO(S,E,N,ENT);
// const uint16_t PROGMEM combo_S_R_SPC_T[] = QUATRO(S,R,SPC,T);
// const uint16_t PROGMEM combo_S_R_SPC_I[] = QUATRO(S,R,SPC,I);
// const uint16_t PROGMEM combo_S_R_SPC_O[] = QUATRO(S,R,SPC,O);
// const uint16_t PROGMEM combo_S_R_SPC_N[] = QUATRO(S,R,SPC,N);
// const uint16_t PROGMEM combo_S_R_SPC_ENT[] = QUATRO(S,R,SPC,ENT);
// const uint16_t PROGMEM combo_S_R_T_I[] = QUATRO(S,R,T,I);
// const uint16_t PROGMEM combo_S_R_T_O[] = QUATRO(S,R,T,O);
// const uint16_t PROGMEM combo_S_R_T_N[] = QUATRO(S,R,T,N);
// const uint16_t PROGMEM combo_S_R_T_ENT[] = QUATRO(S,R,T,ENT);
// const uint16_t PROGMEM combo_S_R_I_O[] = QUATRO(S,R,I,O);
// const uint16_t PROGMEM combo_S_R_I_N[] = QUATRO(S,R,I,N);
// const uint16_t PROGMEM combo_S_R_I_ENT[] = QUATRO(S,R,I,ENT);
// const uint16_t PROGMEM combo_S_R_O_N[] = QUATRO(S,R,O,N);
// const uint16_t PROGMEM combo_S_R_O_ENT[] = QUATRO(S,R,O,ENT);
// const uint16_t PROGMEM combo_S_R_N_ENT[] = QUATRO(S,R,N,ENT);
// const uint16_t PROGMEM combo_S_SPC_T_I[] = QUATRO(S,SPC,T,I);
// const uint16_t PROGMEM combo_S_SPC_T_O[] = QUATRO(S,SPC,T,O);
// const uint16_t PROGMEM combo_S_SPC_T_N[] = QUATRO(S,SPC,T,N);
// const uint16_t PROGMEM combo_S_SPC_T_ENT[] = QUATRO(S,SPC,T,ENT);
// const uint16_t PROGMEM combo_S_SPC_I_O[] = QUATRO(S,SPC,I,O);
// const uint16_t PROGMEM combo_S_SPC_I_N[] = QUATRO(S,SPC,I,N);
// const uint16_t PROGMEM combo_S_SPC_I_ENT[] = QUATRO(S,SPC,I,ENT);
// const uint16_t PROGMEM combo_S_SPC_O_N[] = QUATRO(S,SPC,O,N);
// const uint16_t PROGMEM combo_S_SPC_O_ENT[] = QUATRO(S,SPC,O,ENT);
// const uint16_t PROGMEM combo_S_SPC_N_ENT[] = QUATRO(S,SPC,N,ENT);
// const uint16_t PROGMEM combo_S_T_I_O[] = QUATRO(S,T,I,O);
// const uint16_t PROGMEM combo_S_T_I_N[] = QUATRO(S,T,I,N);
// const uint16_t PROGMEM combo_S_T_I_ENT[] = QUATRO(S,T,I,ENT);
// const uint16_t PROGMEM combo_S_T_O_N[] = QUATRO(S,T,O,N);
// const uint16_t PROGMEM combo_S_T_O_ENT[] = QUATRO(S,T,O,ENT);
// const uint16_t PROGMEM combo_S_T_N_ENT[] = QUATRO(S,T,N,ENT);
// const uint16_t PROGMEM combo_S_I_O_N[] = QUATRO(S,I,O,N);
// const uint16_t PROGMEM combo_S_I_O_ENT[] = QUATRO(S,I,O,ENT);
// const uint16_t PROGMEM combo_S_I_N_ENT[] = QUATRO(S,I,N,ENT);
// const uint16_t PROGMEM combo_S_O_N_ENT[] = QUATRO(S,O,N,ENT);
// const uint16_t PROGMEM combo_E_R_SPC_T[] = QUATRO(E,R,SPC,T);
// const uint16_t PROGMEM combo_E_R_SPC_I[] = QUATRO(E,R,SPC,I);
// const uint16_t PROGMEM combo_E_R_SPC_O[] = QUATRO(E,R,SPC,O);
// const uint16_t PROGMEM combo_E_R_SPC_N[] = QUATRO(E,R,SPC,N);
// const uint16_t PROGMEM combo_E_R_SPC_ENT[] = QUATRO(E,R,SPC,ENT);
// const uint16_t PROGMEM combo_E_R_T_I[] = QUATRO(E,R,T,I);
// const uint16_t PROGMEM combo_E_R_T_O[] = QUATRO(E,R,T,O);
// const uint16_t PROGMEM combo_E_R_T_N[] = QUATRO(E,R,T,N);
// const uint16_t PROGMEM combo_E_R_T_ENT[] = QUATRO(E,R,T,ENT);
// const uint16_t PROGMEM combo_E_R_I_O[] = QUATRO(E,R,I,O);
// const uint16_t PROGMEM combo_E_R_I_N[] = QUATRO(E,R,I,N);
// const uint16_t PROGMEM combo_E_R_I_ENT[] = QUATRO(E,R,I,ENT);
// const uint16_t PROGMEM combo_E_R_O_N[] = QUATRO(E,R,O,N);
// const uint16_t PROGMEM combo_E_R_O_ENT[] = QUATRO(E,R,O,ENT);
// const uint16_t PROGMEM combo_E_R_N_ENT[] = QUATRO(E,R,N,ENT);
// const uint16_t PROGMEM combo_E_SPC_T_I[] = QUATRO(E,SPC,T,I);
// const uint16_t PROGMEM combo_E_SPC_T_O[] = QUATRO(E,SPC,T,O);
// const uint16_t PROGMEM combo_E_SPC_T_N[] = QUATRO(E,SPC,T,N);
// const uint16_t PROGMEM combo_E_SPC_T_ENT[] = QUATRO(E,SPC,T,ENT);
// const uint16_t PROGMEM combo_E_SPC_I_O[] = QUATRO(E,SPC,I,O);
// const uint16_t PROGMEM combo_E_SPC_I_N[] = QUATRO(E,SPC,I,N);
// const uint16_t PROGMEM combo_E_SPC_I_ENT[] = QUATRO(E,SPC,I,ENT);
// const uint16_t PROGMEM combo_E_SPC_O_N[] = QUATRO(E,SPC,O,N);
// const uint16_t PROGMEM combo_E_SPC_O_ENT[] = QUATRO(E,SPC,O,ENT);
// const uint16_t PROGMEM combo_E_SPC_N_ENT[] = QUATRO(E,SPC,N,ENT);
// const uint16_t PROGMEM combo_E_T_I_O[] = QUATRO(E,T,I,O);
// const uint16_t PROGMEM combo_E_T_I_N[] = QUATRO(E,T,I,N);
// const uint16_t PROGMEM combo_E_T_I_ENT[] = QUATRO(E,T,I,ENT);
// const uint16_t PROGMEM combo_E_T_O_N[] = QUATRO(E,T,O,N);
// const uint16_t PROGMEM combo_E_T_O_ENT[] = QUATRO(E,T,O,ENT);
// const uint16_t PROGMEM combo_E_T_N_ENT[] = QUATRO(E,T,N,ENT);
// const uint16_t PROGMEM combo_E_I_O_N[] = QUATRO(E,I,O,N);
// const uint16_t PROGMEM combo_E_I_O_ENT[] = QUATRO(E,I,O,ENT);
// const uint16_t PROGMEM combo_E_I_N_ENT[] = QUATRO(E,I,N,ENT);
// const uint16_t PROGMEM combo_E_O_N_ENT[] = QUATRO(E,O,N,ENT);
// const uint16_t PROGMEM combo_R_SPC_T_I[] = QUATRO(R,SPC,T,I);
// const uint16_t PROGMEM combo_R_SPC_T_O[] = QUATRO(R,SPC,T,O);
// const uint16_t PROGMEM combo_R_SPC_T_N[] = QUATRO(R,SPC,T,N);
// const uint16_t PROGMEM combo_R_SPC_T_ENT[] = QUATRO(R,SPC,T,ENT);
// const uint16_t PROGMEM combo_R_SPC_I_O[] = QUATRO(R,SPC,I,O);
// const uint16_t PROGMEM combo_R_SPC_I_N[] = QUATRO(R,SPC,I,N);
// const uint16_t PROGMEM combo_R_SPC_I_ENT[] = QUATRO(R,SPC,I,ENT);
// const uint16_t PROGMEM combo_R_SPC_O_N[] = QUATRO(R,SPC,O,N);
// const uint16_t PROGMEM combo_R_SPC_O_ENT[] = QUATRO(R,SPC,O,ENT);
// const uint16_t PROGMEM combo_R_SPC_N_ENT[] = QUATRO(R,SPC,N,ENT);
// const uint16_t PROGMEM combo_R_T_I_O[] = QUATRO(R,T,I,O);
// const uint16_t PROGMEM combo_R_T_I_N[] = QUATRO(R,T,I,N);
// const uint16_t PROGMEM combo_R_T_I_ENT[] = QUATRO(R,T,I,ENT);
// const uint16_t PROGMEM combo_R_T_O_N[] = QUATRO(R,T,O,N);
// const uint16_t PROGMEM combo_R_T_O_ENT[] = QUATRO(R,T,O,ENT);
// const uint16_t PROGMEM combo_R_T_N_ENT[] = QUATRO(R,T,N,ENT);
// const uint16_t PROGMEM combo_R_I_O_N[] = QUATRO(R,I,O,N);
// const uint16_t PROGMEM combo_R_I_O_ENT[] = QUATRO(R,I,O,ENT);
// const uint16_t PROGMEM combo_R_I_N_ENT[] = QUATRO(R,I,N,ENT);
// const uint16_t PROGMEM combo_R_O_N_ENT[] = QUATRO(R,O,N,ENT);
// const uint16_t PROGMEM combo_SPC_T_I_O[] = QUATRO(SPC,T,I,O);
// const uint16_t PROGMEM combo_SPC_T_I_N[] = QUATRO(SPC,T,I,N);
// const uint16_t PROGMEM combo_SPC_T_I_ENT[] = QUATRO(SPC,T,I,ENT);
// const uint16_t PROGMEM combo_SPC_T_O_N[] = QUATRO(SPC,T,O,N);
// const uint16_t PROGMEM combo_SPC_T_O_ENT[] = QUATRO(SPC,T,O,ENT);
// const uint16_t PROGMEM combo_SPC_T_N_ENT[] = QUATRO(SPC,T,N,ENT);
// const uint16_t PROGMEM combo_SPC_I_O_N[] = QUATRO(SPC,I,O,N);
// const uint16_t PROGMEM combo_SPC_I_O_ENT[] = QUATRO(SPC,I,O,ENT);
// const uint16_t PROGMEM combo_SPC_I_N_ENT[] = QUATRO(SPC,I,N,ENT);
// const uint16_t PROGMEM combo_SPC_O_N_ENT[] = QUATRO(SPC,O,N,ENT);

