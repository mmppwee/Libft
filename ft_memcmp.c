#include "libft.h"

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *a = (unsigned char*)s1;
    unsigned char *b = (unsigned char*)s2;
    size_t i;
    i = 0;
    while (i < n)
    {
        if(a[i] != b[i])
            return (a[i]-b[i]);
        i++;
    }
    return (0);
}

// #include <stdio.h>

// int main () {
//    char str1[15] = "ABCDEF";
//    char str2[15] = "abcdef";
//    int ret;

//    ret = ft_memcmp(str1, str2, 6);

//    printf("%d\n", ret);
   
//    return(0);
// }