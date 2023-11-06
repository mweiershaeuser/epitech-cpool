#include <criterion/criterion.h>
#include "../includes/bsprintf.h"

Test(sum_strings_length, sum_strings_length)
{
    int res = sum_strings_length(2, "Hello", "World");
    cr_assert_eq(res, 10);
}
