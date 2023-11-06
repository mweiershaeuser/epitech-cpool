#include <criterion/criterion.h>

char *my_strdup(char const *src);

Test(my_strdup, copy_a_string)
{
    char src[] = "Hello";
    char *res;

    res = my_strdup(src);
    cr_assert_str_eq(res, src);
}
