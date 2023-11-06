/*
** EPITECH PROJECT, 2023
** my_compute_power_it
** File description:
** Computes a given power of a number iteratively.
*/

int my_compute_power_it(int nb, int p)
{
    int result = 1;

    if (p < 0) {
        return 0;
    }
    if (p == 0) {
        return 1;
    }
    for (int i = 0; i < p; i++) {
        result = result * nb;
    }
    return result;
}
