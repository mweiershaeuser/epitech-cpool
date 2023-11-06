#include <criterion/criterion.h>

Test(my_strcmp, compare_equal_strings)
{
    char s1[] = "Hello";
    char s2[] = "Hello";
    
    cr_assert(!my_strcmp(s1, s2));
}

Test(my_strcmp, compare_strings_of_different_sizes)
{
    char s1[] = "Hello";
    char s2[] = "HelloWorld!";
    
    cr_assert(my_strcmp(s1, s2));
}

Test(my_strcmp, compare_strings_with_bigger_char_in_first)
{
    char s1[] = "abcabc";
    char s2[] = "abccba";
    
    cr_assert(my_strcmp(s1, s2));
}

Test(my_strcmp, compare_strings_with_bigger_char_in_second)
{
    char s1[] = "abccba";
    char s2[] = "abcabc";
    
    cr_assert(my_strcmp(s1, s2));
}
