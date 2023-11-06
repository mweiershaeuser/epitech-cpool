/*
** EPITECH PROJECT, 2023
** str_total.c
** File description:
** total
*/

#include "include/rush.h"

int str_total(char *str)
{
    int total = 0;
    int i = 0;
    int is_upper_alph;
    int is_lower_alph;

    while (str[i] != '\0') {
        is_upper_alph = str[i] >= 'A' && str[i] <= 'Z';
        is_lower_alph = str[i] >= 'a' && str[i] <= 'z';
        if (is_upper_alph || is_lower_alph) {
            total++;
        }
        i++;
    }
    return total;
}
