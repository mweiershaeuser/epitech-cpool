/*
** EPITECH PROJECT, 2023
** final stumper
** File description:
** handle task 3 to 5 checks
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/rush3.h"

void handle_task3(char *square, int x, int y, int *found)
{
    char *task;

    if (square[0] == 'A' && square[x - 1] == 'A') {
        task = malloc(sizeof(char) * 10);
        my_strcpy(task, "[rush1-3]");
        output(task, x, y);
        free(task);
        *found = 1;
    }
}

void handle_task4(char *square, int x, int y, int *found)
{
    char *task;

    if (square[0] == 'A' && square[(x + 1) * (y - 1)] == 'A') {
        task = malloc(sizeof(char) * 10);
        my_strcpy(task, "[rush1-4]");
        output(task, x, y);
        free(task);
        *found = 1;
    }
}

void handle_task5(char *square, int x, int y, int *found)
{
    char *task;

    if (square[0] == 'A' && square[x - 1] == 'C'
        && square[(x + 1) * (y - 1)] == 'C') {
        task = malloc(sizeof(char) * 10);
        my_strcpy(task, "[rush1-5]");
        output(task, x, y);
        free(task);
        *found = 1;
    }
}
