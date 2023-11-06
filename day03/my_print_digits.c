/*
** EPITECH PROJECT, 2023
** my_print_digits.c
** File description:
** Display all digits in ascending order.
*/

int my_print_digits(void)
{
    for (int i = 48; i < 58; i++) {
        my_putchar(i);
    }
    my_putchar('\n');
    return 0;
}
