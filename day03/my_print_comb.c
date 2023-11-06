/*
** EPITECH PROJECT, 2023
** my_print_comb
** File description:
** Print all distinct three digit number combinations in ascending order.
*/

void print_inner_numbers(char first, char second)
{
    for (int third = second + 1; third < 58; third++) {
        my_putchar(first);
        my_putchar(second);
        my_putchar(third);
        if (!(first == 55 && second == 56 && third == 57)) {
            my_putchar(',');
            my_putchar(' ');
        }
    }
}

int my_print_comb(void)
{
    for (int i = 48; i < 58; i++) {
        for (int j = i + 1; j < 58; j++) {
            print_inner_numbers(i, j);
        }
    }
    my_putchar('\n');
    return 0;
}
