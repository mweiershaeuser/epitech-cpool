/*
** EPITECH PROJECT, 2023
** my_compute_factorial_rec
** File description:
** Computes the factorial of a given number recursively.
*/

int my_compute_factorial_rec(int nb)
{
    if (nb < 0 || nb > 12) {
        return 0;
    }
    if (nb == 0) {
        return 1;
    }
    return nb * my_compute_factorial_rec(nb - 1);
}
