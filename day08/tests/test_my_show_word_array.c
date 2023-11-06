#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_show_word_array(char * const *tab);

Test(my_show_word_array, print_array_of_strings, .init = cr_redirect_stdout)
{
    char *words[] = {"Hello", "World", "!", 0};

    my_show_word_array(words);
    cr_assert_stdout_eq_str("Hello\nWorld\n!\n");
}
