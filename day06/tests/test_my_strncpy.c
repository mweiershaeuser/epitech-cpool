#include <criterion/criterion.h>

Test(my_strncpy, whatever)
{
    char dest[6] = {0};

    my_strncpy(dest, "HelloWorld", 5);
    cr_assert_str_eq(dest, "Hello");
}
