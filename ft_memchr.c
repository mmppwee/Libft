#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *a = (unsigned char*)s;
    size_t i;
    i = 0;
    while (i < n)
    {
        if (a[i] == (unsigned char)c)
            return ((void *)&a[i]);
        i++;
    }
    return (NULL);
}

// #include <stdio.h>
// // #include <string.h>

// int main () {
// //    const char str[] = "http://www.tutorialspoint.com";
// //    const char ch = '.';
// //    char *ret;

// //    ret = ft_memchr(str, ch, strlen(str));

// //    printf("String after |%c| is - |%s|\n", ch, ret);

// //    return(0);
// // }

// char s[] = {0, 1, 2 ,3 ,4 ,5};

// printf("%d", ft_memchr(s, 2, 3));
// }