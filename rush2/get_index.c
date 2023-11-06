/*
** EPITECH PROJECT, 2023
** get_index
** File description:
** Returns the alphabetical index non case-sensitive.
*/

int get_index(char c)
{
    return c >= 'A' && c <= 'Z' ? c - 'A' : c - 'a';
}
