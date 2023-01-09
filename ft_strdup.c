#include "libft.h"

char *ft_strdup(const char *s1)
{
    int len;
    int i;
    len = ft_strlen(s1);
    char *s;
    s = (char *)malloc (len+1);
    if (s == NULL)
        return (NULL);
    i = 0;
    while (i < len)
    {
        s[i] = s1[i];
        i++;
    }
    s[i] = '\0';
    return (s);
}

// #include <stdio.h>
// #include <string.h>
 
// int main()
// {
//     char source[] = "GeeksForGeeks";
 
//     char* target = ft_strdup(source);
 
//     printf("%s", target);
//     return 0;
// }