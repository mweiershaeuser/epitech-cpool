/*
** EPITECH PROJECT, 2023
** disp_stdarg
** File description:
** Variadic function which displays all given parameters.
*/

#include <stdarg.h>
#include "includes/my.h"

void disp_stdarg(char *s, ...)
{
    va_list params;
    int i = 0;

    va_start(params, s);
    while (s[i] != '\0') {
        if (s[i] == 'i') {
            my_put_nbr(va_arg(params, int));
        }
        if (s[i] == 'c') {
            my_putchar(va_arg(params, int));
        }
        if (s[i] == 's') {
            my_putstr(va_arg(params, char *));
        }
        my_putchar('\n');
        i++;
    }
    va_end(params);
}
