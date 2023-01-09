#include "libft.h"

char *ft_strjoin(const char *s1, const char *s2)
{
    int s1len;
    int s2len;
    int i;
    int j;
    char *new;
    
    if (!s1 || !s2)
	    return (NULL);
    s1len = ft_strlen(s1);
    s2len = ft_strlen(s2);
    new = malloc(s1len + s2len + 1);
    if (new == NULL)
        return (NULL);
    i = 0;
    while (s1[i] != '\0')
    {
        new[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j] != '\0')
    {
        new[i+j] = s2[j];
        j++;
    }
    new[i+j] = '\0';
    return (new);
}

// #include "stdio.h"
// int main(void)
// {
//     char *a;
//     a = ft_strjoin("hello", "aaa");
//     printf("%s", a);
// }
