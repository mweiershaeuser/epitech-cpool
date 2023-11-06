/*
** EPITECH PROJECT, 2023
** concat_params
** File description:
** Concatenate command line arguments to a single string.
*/

#include <stdlib.h>
#include "include/libmy.h"

char *concat_params(int argc, char **argv)
{
    int size = 0;
    char linebreak[] = "\n";
    char *result;

    for (int i = 0; i < argc; i++) {
        size = size + my_strlen(argv[i]) + 1;
    }
    result = (char *) malloc(sizeof(char) * size);
    for (int j = 0; j < argc; j++) {
        result = my_strcat(result, argv[j]);
        if (j < argc - 1) {
            result = my_strcat(result, linebreak);
        }
    }
    return result;
}
