/*
** EPITECH PROJECT, 2023
** main
** File description:
** main of Rush2
*/

#include "include/my.h"
#include "include/rush.h"

int main(int argc, char **argv)
{
    int amount_letters = argc - 2;
    char letters[amount_letters];
    char *str = argv[1];
    float letters_in_str = str_total(str);
    int count[26];
    float perc[26];

    if (argc < 3) {
        print_error("Invalid arguments!\n");
        return 84;
    }
    for (int i = 0; i < amount_letters; i++) {
        letters[i] = argv[i + 2][0];
        count[get_index(letters[i])] = count_letter(letters[i], str);
        perc[get_index(letters[i])] =
            count[get_index(letters[i])] / letters_in_str;
    }
    print_result(amount_letters, letters, count, perc);
    return 0;
}
