#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    if (!s || !f)
        return (NULL);
    char *a = ft_strdup(s);
    if (!a)
        return (NULL);
    i = 0;
    while (a[i] != '\0')
    {
        a[i] = f(i, a[i]);
        i++;
    }
    return (a);
}