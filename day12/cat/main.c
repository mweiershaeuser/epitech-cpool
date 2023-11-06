/*
** EPITECH PROJECT, 2023
** cat
** File description:
** cat
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

static void read_file(int fd)
{
    char buffer[1024 * 30];
    int read_size = 1;

    while (read_size != 0) {
        read_size = read(fd, buffer, 1024 * 30);
        write(1, buffer, read_size);
    }
}

static int open_file(char const *filename)
{
    int fd = 0;

    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        return 84;
    }
    read_file(fd);
    close(fd);
    return 0;
}

int main(int argc, char **argv)
{
    if (argc <= 1) {
        read_file(0);
        return 0;
    }
    for (int i = 1; i < argc; i++) {
        if (open_file(argv[i]) != 0) {
            write(2, "No such file or directory\n", 26);
            return 84;
        }
    }
    return 0;
}
