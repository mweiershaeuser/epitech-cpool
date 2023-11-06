/*
** EPITECH PROJECT, 2023
** my_strdup
** File description:
** Copies a string into a newly allocated one.
*/

#include <stdlib.h>
#include "include/libmy.h"

char *my_strdup(char const *src)
{
    int length = my_strlen(src);
    char *dest;

    dest = (char *) malloc(sizeof(char) * length + 1);
    dest = my_strcpy(dest, src);
    return dest;
}
