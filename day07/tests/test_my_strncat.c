#include <criterion/criterion.h>

char *my_strncat(char *dest, char const *src, int nb);

Test(my_strncat, concatenate_four_chars) {
    char dest[10] = {0};
    char src[] = "Hello";
    char *res;

    dest[0] = 'A';
    dest[1] = 'B';
    dest[2] = '\0';
    res = my_strncat(dest, src, 4);
    cr_assert_str_eq(res, "ABHell");
}
