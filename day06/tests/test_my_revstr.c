#include <criterion/criterion.h>

Test(my_revstr, whatever)
{
    char str[] = "Hello";

    my_revstr(str);
    cr_assert_str_eq(str, "olleH");
}
