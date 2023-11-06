/*
** EPITECH PROJECT, 2023
** my_print_comb2
** File description:
** Print all combinitation of two two digit numbers
** in ascending order.
*/

const int ZERO = 48;
const int NINE = 57;

void print_numbers(char first, char second, char third, char fourth)
{
    int lastNumberReached;

    lastNumberReached = 0;
    if (!(first == NINE && second == (NINE - 1)
        && third == NINE && fourth == NINE)) {
        lastNumberReached = 1;
    }
    my_putchar(first);
    my_putchar(second);
    my_putchar(' ');
    my_putchar(third);
    my_putchar(fourth);
    if (lastNumberReached) {
        my_putchar(',');
        my_putchar(' ');
    }
}

void validate_numbers(char first, char second, char third, char fourth)
{
    int notEqualNumbers;
    int firstNumberSmallerThanSecond;

    notEqualNumbers = 0;
    firstNumberSmallerThanSecond = 0;
    if (!(first == third && second == fourth)) {
        notEqualNumbers = 1;
    }
    if (!((first * 10 + second) >= (third * 10 + fourth))) {
        firstNumberSmallerThanSecond = 1;
    }
    if (notEqualNumbers && firstNumberSmallerThanSecond) {
        print_numbers(first, second, third, fourth);
    }
}

void loop_second_number(char first, char second)
{
    for (int k = ZERO; k <= NINE; k++) {
        for (int l = ZERO; l <= NINE; l++) {
            validate_numbers(first, second, k, l);
        }
    }
}

void loop_first_number(void)
{
    for (int i = ZERO; i <= NINE; i++) {
        for (int j = ZERO; j <= NINE; j++) {
            loop_second_number(i, j);
        }
    }
}

int my_print_comb2(void)
{
    loop_first_number();
    my_putchar('\n');
    return 0;
}
