/*
** EPITECH PROJECT, 2023
** print_result
** File description:
** Output results.
*/

#include "include/my.h"
#include "include/rush.h"

static void print_perc(float perc)
{
    int bef_dec = (int) (perc * 100);
    int aft_dec = ((int) (perc * 100 * 100)) % 100;

    my_putchar('(');
    my_put_nbr(bef_dec);
    my_putchar('.');
    my_put_nbr(aft_dec);
    if (aft_dec == 0) {
        my_put_nbr(0);
    }
    my_putchar('%');
    my_putchar(')');
}

void print_result(int amount_letters, char *letters, int *count, float *perc)
{
    for (int i = 0; i < amount_letters; i++) {
        my_putchar(letters[i]);
        my_putchar(':');
        my_put_nbr(count[get_index(letters[i])]);
        my_putchar(' ');
        print_perc(perc[get_index(letters[i])]);
        my_putchar('\n');
    }
}
