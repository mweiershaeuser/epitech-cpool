/*
** EPITECH PROJECT, 2023
** rush.h
** File description:
** Headers for Rush2
*/

#ifndef RUSH_H
    #define RUSH_H
int str_total(char *str);
int get_index(char c);
int count_letter(char l, char *str);
void print_result(int amount_letters, char *letters, int *count, float *perc);
void print_error(char *msg);
#endif
