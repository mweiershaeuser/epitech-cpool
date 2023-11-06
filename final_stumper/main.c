/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** main
*/

#include <unistd.h>
#include "include/rush3.h"

int main(void)
{
    const int BUFF_SIZE = 2500;
    char buff[BUFF_SIZE + 1];
    int offset = 0;
    int len = 1;

    while (len > 0) {
        len = read(0, buff + offset, BUFF_SIZE - offset);
        offset = offset + len;
    }
    buff[offset] = '\0';
    if (len < 0)
        return (84);
    rush3(buff);
    return 0;
}
