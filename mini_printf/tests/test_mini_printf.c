#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../miniprintf.h"

Test(mini_printf, mini_printf1, .init=cr_redirect_stdout)
{
    int sum = mini_printf("%d %i %c ello %% %d %s", 2, -1, 'H', 10, "World");
    cr_assert_stdout_eq_str("2 -1 H ello % 10 World");
    cr_assert_eq(sum, 22);
}
