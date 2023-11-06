#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../includes/bsprintf.h"

Test(disp_stdarg, disp_stdarg, .init=cr_redirect_stdout)
{
    disp_stdarg("ssiic", "Hello", "World", 10, -3, '!');
    cr_assert_stdout_eq_str("Hello\nWorld\n10\n-3\n!\n");
}
