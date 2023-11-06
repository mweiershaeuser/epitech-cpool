#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/rush3.h"

Test(final_stumper, none, .init = cr_redirect_stdout)
{
    rush3("D");
    cr_assert_stdout_eq_str("none\n");
}

Test(final_stumper, rush1_1_4_4, .init = cr_redirect_stdout)
{
    rush3("o--o\n|  |\n|  |\no--o\n");
    cr_assert_stdout_eq_str("[rush1-1] 4 4\n");
}

Test(final_stumper, rush1_1_1_1, .init = cr_redirect_stdout)
{
    rush3("o\n");
    cr_assert_stdout_eq_str("[rush1-1] 1 1\n");
}

Test(final_stumper, rush1_2_4_4, .init = cr_redirect_stdout)
{
    rush3("/**\\\n*  *\n*  *\n\\**/\n");
    cr_assert_stdout_eq_str("[rush1-2] 4 4\n");
}

Test(final_stumper, rush1_2_1_1, .init = cr_redirect_stdout)
{
    rush3("*\n");
    cr_assert_stdout_eq_str("[rush1-2] 1 1\n");
}

Test(final_stumper, rush1_3_4_4, .init = cr_redirect_stdout)
{
    rush3("ABBA\nB  B\nB  B\nCBBC\n");
    cr_assert_stdout_eq_str("[rush1-3] 4 4\n");
}

Test(final_stumper, rush1_4_4_4, .init = cr_redirect_stdout)
{
    rush3("ABBC\nB  B\nB  B\nABBC\n");
    cr_assert_stdout_eq_str("[rush1-4] 4 4\n");
}

Test(final_stumper, rush1_5_4_4, .init = cr_redirect_stdout)
{
    rush3("ABBC\nB  B\nB  B\nCBBA\n");
    cr_assert_stdout_eq_str("[rush1-5] 4 4\n");
}

Test(final_stumper, b, .init = cr_redirect_stdout)
{
    rush3("B\n");
    cr_assert_stdout_eq_str("[rush1-3] 1 1 || [rush1-4] 1 1 || [rush1-5] 1 1\n");
}
