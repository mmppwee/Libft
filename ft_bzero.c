#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    char *a = (char*)s;
    size_t i;
    i = 0;
    while (i < n)
    {
        a[i] = 0;
        i++;
    }
    s = a;
}

/*#include <stdlib.h>
#include <string.h>
int main(void)
{
    char buffer [80];
    ft_bzero(buffer, 80);
    return EXIT_SUCCESS;
}*/