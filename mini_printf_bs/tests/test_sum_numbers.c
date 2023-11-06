#include <criterion/criterion.h>
#include "../includes/bsprintf.h"

Test(sum_numbers, return_sum_numbers)
{
    int sum = sum_numbers(3, 5, 3, 4);
    cr_assert_eq(sum, 12);
}
