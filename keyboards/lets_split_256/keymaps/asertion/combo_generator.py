
import itertools


def print_combinations():
    MAX_COMBO_LENGTH = 4
    DEFINE_STRING = 'const uint16_t PROGMEM {combo_name}[] = {combo};'
    COMMENT = '\n//===================================================================\n' \
              '//Combo sets for {} hand(s)\n' \
              '//==================================================================='
    DETAIL_COMMENT = '\n    //Combo sets of {} keys for {} hand(s)'

    args_input = ', '.join(['_' + str(i + 1) for i in range(MAX_COMBO_LENGTH)])
    combo_names = ', '.join(['COMBO' + str(i) for i in range(MAX_COMBO_LENGTH, 1, -1)])
    MACRO = '#define GET_MACRO({}, NAME,...) NAME\n' \
            '#define SET_COMBO(...) GET_MACRO(__VA_ARGS__, {})(__VA_ARGS__)\n\n'.format(args_input, combo_names)

    for i in range(2, MAX_COMBO_LENGTH + 1):
        MACRO += '#define {}({}) {{{}, COMBO_END}}\n'.format(
            'COMBO' + str(i),
            ', '.join(['K' + str(j+1) for j in range(i)]),
            ', '.join(['KC_##K' + str(j+1) for j in range(i)])
        )

    left = ('A', 'S', 'E', 'R', 'SPC')
    right = ('T', 'I', 'O', 'N', 'ENT')

    combo_dict = {'left': {}, 'right': {}, 'both': {}}

    for i in range(2, MAX_COMBO_LENGTH + 1):
        combo_left = list(itertools.combinations(left, i))
        combo_right = list(itertools.combinations(right, i))
        combo_combine = list(itertools.combinations(left + right, i))
        combo_combine = [c for c in combo_combine if c not in combo_left and c not in combo_right]
        combo_dict['left'][i] = combo_left
        combo_dict['right'][i] = combo_right
        combo_dict['both'][i] = combo_combine

    file = open('asertion_combo.h', 'w+')
    print(MACRO, file=file)
    for hand in combo_dict:
        print(COMMENT.format(hand), file=file)
        comboset = combo_dict[hand]
        for i in comboset:
            print(DETAIL_COMMENT.format(i, hand), file=file)
            for combo in comboset[i]:
                combo_name = 'combo_' + '_'.join(combo)
                combo_definition = 'SET_COMBO({})'.format(','.join(combo))
                print(DEFINE_STRING.format(combo_name=combo_name, combo=combo_definition), file=file)

    file.close()


if __name__ == '__main__':
    print_combinations()

