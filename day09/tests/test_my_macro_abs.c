#include <criterion/criterion.h>

int run_my_macro_abs(int value);

Test(my_macro_abs, negative_to_positive)
{
    cr_assert(run_my_macro_abs(-2) == 2);
}

Test(my_macro_abs, positive_stays_positive)
{
    cr_assert(run_my_macro_abs(2) == 2);
}
