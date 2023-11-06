/*
** EPITECH PROJECT, 2023
** my_print_revalpha.c
** File description:
** Display the lowercase alphabet in descending order.
*/

int my_print_revalpha(void)
{
    int character;

    character = 122;
    for (int i = 0; i < 26; i++) {
        my_putchar(character - i);
    }
    my_putchar('\n');
    return 0;
}
