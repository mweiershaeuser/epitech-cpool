#include <criterion/criterion.h>

char *concat_params(int argc, char **argv);

Test(concat_params, concat_params)
{
    char *s1 = "Hello";
    char *s2 = "World";
    char *s3 = "!";
    char *strings[3];

    strings[0] = s1;
    strings[1] = s2;
    strings[2] = s3;

    cr_assert_str_eq(concat_params(3, strings), "Hello\nWorld\n!");
}
