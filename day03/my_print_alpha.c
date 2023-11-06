/*
** EPITECH PROJECT, 2023
** my_print_alpha.c
** File description:
** Display the lowercase alphabet in ascending order.
*/

int my_print_alpha(void)
{
    int character;

    character = 97;
    for (int i = 0; i < 26; i++) {
        my_putchar(character + i);
    }
    my_putchar('\n');
    return 0;
}
