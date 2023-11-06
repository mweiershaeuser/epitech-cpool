/*
** EPITECH PROJECT, 2023
** sum_numbers
** File description:
** Variadic function which returns the sum of all params.
*/

#include <stdarg.h>

int sum_numbers(int n, ...)
{
    int sum = 0;
    va_list params;

    va_start(params, n);
    for (int i = 0; i < n; i++) {
        sum = sum + va_arg(params, int);
    }
    va_end(params);
    return sum;
}
