/*
** EPITECH PROJECT, 2023
** my_opp
** File description:
** my_opp
*/

#ifndef MY_OPP_H
    #define MY_OPP_H
const struct operator OPERATORS_FUNCS[] = {
    {"+", &my_add},
    {"-", &my_sub},
    {"/", &my_div},
    {"*", &my_mul},
    {"%", &my_mod},
    {"", &my_usage}
};
#endif MY_OPP_H
