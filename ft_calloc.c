#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    size_t i;
    i = count * size;
    char *s;
    if (count >= SIZE_MAX || size >= SIZE_MAX)
        return (NULL);
    s = malloc(i);
    if (s == NULL)
        return (NULL);
    ft_bzero(s, i);
    return (s);
}