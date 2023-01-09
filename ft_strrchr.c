#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int len;
    char *head;

    len = ft_strlen(s);
    head = (char *)s;
	while (len && s[len] != (char)c)
        len--;
    if (s[len] == (char)c)
	    return ((char*)&s[len]);
    return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main () {
//    int len;
//    const char str[] = "http://www.tutorialspoint.com";
//    const char ch = '.';
//    char *ret;

//    ret = ft_strrchr(str, ch);

//    printf("String after |%c| is - |%s|\n", ch, ret);
   
//    return(0);
// }