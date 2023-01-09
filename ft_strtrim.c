#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t s1len;
    size_t i;

    i = 0;
    if (!s1 || !set)
        return (NULL);
    s1len = ft_strlen(s1) - 1;
    while (ft_strchr(set, s1[i]) && s1[i])
        i++;
    while (ft_strchr(set, s1[s1len]) && s1len > 0)
        s1len--;
    return (ft_substr(s1, i,  s1len-i + 1));
}
/*
int main(void)
{
     char *a;
     a = ft_strtrim("   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ", " \n\t");
     printf("Thid is a ==> [%s]", a);
}
*/
