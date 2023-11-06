/*
** EPITECH PROJECT, 2023
** Rush Assignment 1
** File description:
** Square
*/

const char CORNER = 'o';
const char HORIZONTAL = '-';
const char VERTICAL = '|';

void put_error(void)
{
    write(2, "Invalid size\n", 14);
}

void put_horizontal(int x)
{
    my_putchar(CORNER);
    for (int i = 0; i < x - 2; i++) {
        my_putchar(HORIZONTAL);
    }
    if (x > 1) {
        my_putchar(CORNER);
    }
    my_putchar('\n');
}

void put_vertical(int x)
{
    my_putchar(VERTICAL);
    for (int i = 0; i < x - 2; i++) {
        my_putchar(' ');
    }
    if (x > 1){
        my_putchar(VERTICAL);
    }
    my_putchar('\n');
}

void rush(int x, int y)
{
    if (x < 1 || y < 1) {
        put_error();
        return;
    }
    put_horizontal(x);
    for (int i = 0; i < y - 2; i++) {
        put_vertical(x);
    }
    if (y > 1) {
        put_horizontal(x);
    }
}
