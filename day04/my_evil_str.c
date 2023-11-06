/*
** EPITECH PROJECT, 2023
** my_evil_str
** File description:
** Swap a string's characters two by two.
*/

int count_chars(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return i;
}

void swap_chars(char *a, char *b)
{
    char c;

    c = *a;
    *a = *b;
    *b = c;
}

char *my_evil_str(char *str)
{
    int length;

    length = count_chars(str);
    for (int i = 0; i < length / 2; i++) {
        swap_chars(&str[i], &str[length - 1 - i]);
    }
    return str;
}
