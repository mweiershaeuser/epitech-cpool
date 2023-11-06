/*
** EPITECH PROJECT, 2023
** Rush Assignment 5
** File description:
** Square
*/

const char TOP_LEFT_CORNER = 'A';
const char TOP_RIGHT_CORNER = 'C';
const char BOTTOM_LEFT_CORNER = 'C';
const char BOTTOM_RIGHT_CORNER = 'A';
const char STANDARD = 'B';

void put_error(void)
{
    write(2, "Invalid size\n", 14);
}

void put_top(int x, int y)
{
    if (x <= 1 || y <= 1) {
        my_putchar(STANDARD);
    } else {
        my_putchar(TOP_LEFT_CORNER);
    }
    for (int i = 0; i < x - 2; i++) {
        my_putchar(STANDARD);
    }
    if (x > 1) {
        if (x <= 1 || y <= 1) {
            my_putchar(STANDARD);
        } else {
            my_putchar(TOP_RIGHT_CORNER);
        }
    }
    my_putchar('\n');
}

void put_bottom(int x, int y)
{
    if (x <= 1 || y <= 1) {
        my_putchar(STANDARD);
    } else {
        my_putchar(BOTTOM_LEFT_CORNER);
    }
    for (int i = 0; i < x - 2; i++) {
        my_putchar(STANDARD);
    }
    if (x > 1) {
        if (x <= 1 || y <= 1) {
            my_putchar(STANDARD);
        } else {
            my_putchar(BOTTOM_RIGHT_CORNER);
        }
    }
    my_putchar('\n');
}

void put_vertical(int x)
{
    my_putchar(STANDARD);
    for (int i = 0; i < x - 2; i++) {
        my_putchar(' ');
    }
    if (x > 1){
        my_putchar(STANDARD);
    }
    my_putchar('\n');
}

void rush(int x, int y)
{
    if (x < 1 || y < 1) {
        put_error();
        return;
    }
    put_top(x, y);
    for (int i = 0; i < y - 2; i++) {
        put_vertical(x);
    }
    if (y > 1) {
        put_bottom(x, y);
    }
}
