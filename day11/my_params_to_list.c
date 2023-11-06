/*
** EPITECH PROJECT, 2023
** my_params_to_list
** File description:
** Creates a list from parameters.
*/

#include <stdlib.h>
#include "include/mylist.h"

linked_list_t *my_params_to_list(int ac, char const **av)
{
    linked_list_t *current;
    linked_list_t *last;

    for (int i = 0; i < ac; i++) {
        current = malloc(sizeof(*current));
        current->data = av[i];
        current->next = last;
        last = current;
    }
    return current;
}
