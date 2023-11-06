/*
** EPITECH PROJECT, 2023
** sum_strings_length
** File description:
** Variadic function which returns the accumulated
** length of all passed strings.
*/

#include <stdarg.h>
#include "includes/my.h"

int sum_strings_length(int n, ...)
{
    int sum = 0;
    va_list params;

    va_start(params, n);
    for (int i = 0; i < n; i++) {
        sum = sum + my_strlen(va_arg(params, char *));
    }
    va_end(params);
    return sum;
}
