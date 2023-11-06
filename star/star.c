/*
** EPITECH PROJECT, 2023
** star
** File description:
** Print a star of a given size.
*/

static void print_spaces_top_bottom(unsigned int size, int line)
{
    int spaceLeft;

    spaceLeft = size == 1 ? size * 2 + 1 : size * 2 + size - line;
    for (int i = 0; i < spaceLeft; i++) {
        my_putchar(' ');
    }
}

static void print_stars_top_bottom(int line)
{
    int gap = -1;

    my_putchar('*');
    if (line > 1) {
        for (int j = 2; j <= line; j++) {
            gap = gap + 2;
        }
        for (int k = 0; k < gap; k++) {
            my_putchar(' ');
        }
        my_putchar('*');
    }
}

void print_top(unsigned int size)
{
    for (int i = 1; i <= size; i++) {
        print_spaces_top_bottom(size, i);
        print_stars_top_bottom(i);
        my_putchar('\n');
    }
}

void print_bottom(unsigned int size)
{
    for (int i = size; i >= 1; i--) {
        print_spaces_top_bottom(size, i);
        print_stars_top_bottom(i);
        my_putchar('\n');
    }
}

static void print_arm_or_leg(unsigned int size)
{
    for (int i = 0; i < (size * 2) + 1; i++) {
        my_putchar('*');
    }
}

void print_arms_or_legs(unsigned int size)
{
    int gap;

    print_arm_or_leg(size);
    gap = size == 1 ? 1 : (size - 2) * 2 + 1;
    for (int i = 0; i < gap; i++) {
        my_putchar(' ');
    }
    print_arm_or_leg(size);
    my_putchar('\n');
}

static void print_middle_line(int width, int line)
{
    for (int i = 0; i < line; i++) {
        my_putchar(' ');
    }
    my_putchar('*');
    for (int j = 0; j < width - line * 2 - 2; j++) {
        my_putchar(' ');
    }
    my_putchar('*');
    my_putchar('\n');
}

void print_middle(unsigned int size)
{
    int arms_legs_gap;
    int width;
    int i;

    arms_legs_gap = size == 1 ? 1 : (size - 2) * 2 + 1;
    width = (size * 2 + 1) * 2 + arms_legs_gap;
    for (i = 1; i <= size; i++) {
        print_middle_line(width, i);
    }
    i = i - 2;
    for (int j = 0; j < size - 1; j++) {
        print_middle_line(width, i);
        i--;
    }
}

void star(unsigned int size)
{
    print_top(size);
    print_arms_or_legs(size);
    print_middle(size);
    print_arms_or_legs(size);
    print_bottom(size);
}
