/*
** EPITECH PROJECT, 2023
** my_compute_factorial_it
** File description:
** Computes the factorial of a given number iteratively.
*/

int my_compute_factorial_it(int nb)
{
    int result = 1;

    if (nb < 0 || nb > 12) {
        return 0;
    }
    if (nb == 0) {
        return 1;
    }
    for (int i = 1; i <= nb; i++) {
        result = result * i;
    }
    return result;
}
