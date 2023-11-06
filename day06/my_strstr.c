/*
** EPITECH PROJECT, 2023
** my_strstr
** File description:
** Find a string as a substring in another string.
*/

int compare_with_substr(char const *substr, char const *to_find)
{
    int i = 0;

    while (to_find[i] != '\0') {
        if (substr[i] != to_find[i]) {
            return 0;
        }
        i++;
    }
    return 1;
}

char *mystrstr(char *str, char *to_find)
{
    int i = 0;
    int found = 0;

    if (to_find[0] = '\0') {
        return str;
    }
    while (str[i] != '\0') {
        found = compare_with_substr(str[i], to_find);
        if (found) {
            return &str[i];
        }
        i++;
    }
    return 0;
}
