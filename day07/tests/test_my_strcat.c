#include <criterion/criterion.h>

char *my_strcat(char *dest, char const *src);

Test(my_strcat, concatenate_two_strings) {
    char dest[10] = {0};
    char src[] = "Hello";
    char *res;

    dest[0] = 'A';
    dest[1] = 'B';
    dest[2] = '\0';
    res = my_strcat(dest, src);
    cr_assert_str_eq(res, "ABHello");
}
