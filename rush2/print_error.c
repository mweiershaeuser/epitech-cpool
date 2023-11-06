/*
** EPITECH PROJECT, 2023
** print_error
** File description:
** Prints an error to standard error output.
*/

#include <unistd.h>
#include "include/my.h"

void print_error(char *msg)
{
    write(2, msg, my_strlen(msg));
}
