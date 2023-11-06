/*
** EPITECH PROJECT, 2023
** count_letter.c
** File description:
** count num of a letter
*/

#include "include/my.h"
#include "include/rush.h"

static int same_letter(char l1, char l2)
{
    if (l1 == l2) {
        return (1);
    }
    if (l1 >= 'A' && l1 <= 'Z') {
        l1 += 32;
        return same_letter(l1, l2);
    }
    if (l2 >= 'A' && l2 <= 'Z') {
        l2 += 32;
        return same_letter(l1, l2);
    }
    return (0);
}

int count_letter(char l, char *str)
{
    int count = 0;
    int i = 0;

    while (str[i] != '\0') {
        if (same_letter(l, str[i]) == 1) {
            count++;
        }
        i++;
    }
    return count;
}
