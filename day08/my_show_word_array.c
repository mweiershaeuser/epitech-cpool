/*
** EPITECH PROJECT, 2023
** my_show_word_array
** File description:
** Display an array of strings.
*/

#include <stdlib.h>
#include "include/libmy.h"

int my_show_word_array(char *const *tab)
{
    int array_size = 0;
    int string_size = 0;
    char *result;
    char linebreak[] = "\n";

    while (tab[array_size] != 0) {
        string_size = string_size + my_strlen(tab[array_size]) + 1;
        array_size++;
    }
    result = (char *) malloc(sizeof(char) * string_size);
    for (int i = 0; i < array_size; i++) {
        result = my_strcat(result, tab[i]);
        result = my_strcat(result, linebreak);
    }
    my_putstr(result);
    return 0;
}
