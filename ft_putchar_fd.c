#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

// #include <fcntl.h>
// #include <stdio.h>
// int main(void)
// {
//     int fd;
//     int fd2;

//     fd = open("/Users/pwareepo/lib/test.txt", O_RDWR);
//     fd2 = open("/Users/pwareepo/lib/test2.txt", O_RDWR);
//     printf("This fd ===> [%d]\n", fd);
//     printf("This fd ===> [%d]\n", fd2);
//     ft_putchar_fd('H', fd);
//     ft_putchar_fd('L', fd2);
//     return (0);
// }