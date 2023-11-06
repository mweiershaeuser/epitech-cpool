/*
** EPITECH PROJECT, 2023
** final stumper
** File description:
** final stumper
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/rush3.h"

static int get_x(char *square)
{
    int count = 0;

    while (square[count] != '\n' && square[count] != '\0') {
        count++;
    }
    return count;
}

static int get_y(char *square)
{
    int count = 0;
    int rows = 0;

    while (square[count] != '\0') {
        if (square[count] == '\n') {
            rows++;
        }
        count++;
    }
    return rows;
}

void output(char *task, int x, int y)
{
    my_putstr(task);
    if (my_strcmp(task, "none")) {
        my_putchar(' ');
        my_put_nbr(x);
        my_putchar(' ');
        my_put_nbr(y);
    }
}

static void handle_task1(char *square, int x, int y, int *found)
{
    char *task;

    if (square[0] == 'o') {
        task = malloc(sizeof(char) * 10);
        my_strcpy(task, "[rush1-1]");
        output(task, x, y);
        free(task);
        *found = 1;
    }
}

static void handle_task2(char *square, int x, int y, int *found)
{
    char *task;

    if (square[0] == '/' || square[0] == '*') {
        task = malloc(sizeof(char) * 10);
        my_strcpy(task, "[rush1-2]");
        output(task, x, y);
        free(task);
        *found = 1;
    }
}

static void handle_b(char *square, int x, int y, int *found)
{
    char *task;

    if (x <= 1 && y <= 1 && square[0] == 'B') {
        task = malloc(sizeof(char) * 10);
        my_strcpy(task, "[rush1-3]");
        output(task, x, y);
        my_putstr(" || ");
        task[7] = '4';
        output(task, x, y);
        my_putstr(" || ");
        task[7] = '5';
        output(task, x, y);
        free(task);
        *found = 1;
    }
}

static void handle_tasks_3_to_5(char *square, int x, int y, int *found)
{
    int task3 = 0;
    int task4 = 0;
    int task5 = 0;

    handle_b(square, x, y, found);
    if (x > 1 && y > 1) {
        handle_task3(square, x, y, found);
        handle_task4(square, x, y, found);
        handle_task5(square, x, y, found);
    }
    if (task3 || task4 || task5) {
        *found = 1;
    }
}

static void determine_task(char *square, int x, int y)
{
    int found = 0;
    char *task;

    handle_task1(square, x, y, &found);
    handle_task2(square, x, y, &found);
    handle_tasks_3_to_5(square, x, y, &found);
    if (!found) {
        task = malloc(sizeof(char) * 5);
        my_strcpy(task, "none");
        output(task, x, y);
    }
}

void rush3(char *square)
{
    int x = get_x(square);
    int y = get_y(square);

    determine_task(square, x, y);
    my_putchar('\n');
}
