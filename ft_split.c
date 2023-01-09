#include "libft.h"
/*
s => [32][32][32][a][b][c][32][32][d][e][f][32][\0]
c => [32]

1. ตัด 32 หน้าหลังออก
2. นับจำนวนกลุ่มคำ แล้ว นำจำนวนที่ได้มาจองพื้นที่
3. นับจำนวนตัวอักษรในกลุ่มคำนั่นๆ แล้ว นำจำนวนนั่นมาจองพื้นที่
4. return 2d arr
*/
int ft_wordcount(char *s, char c)
{
    int i;
    int n;
    i = 0;
    n = 0;
    while (s[i] != '\0')
    {
        while (s[i] == c && s[i] != '\0')
            i++;
        if (s[i] != '\0')
            n++;
        while (s[i] != c && s[i] != '\0')
            i++;
    }
    return (n);
}

// #include <stdio.h>
// int main(void)
// {
//     int i;
//     i = ft_wordcount(" Hello world aaa ", 'k');
//     printf ("%d\n", i);
// }

char *ft_word(char *s, int start, int end)
{
    int i;
    int j;
    char *a;
    a = (char *)malloc ((end-start + 1) * sizeof(char));
    if (a == NULL)
        return (NULL);
    i = start;
    j = 0;
    while (i < end)
    {
        a[j] = s[i];
        i++;
        j++;
    }
    a[j] = '\0';
    return (a);    
}
//  int main(void)
//  {
//     printf("%s", ft_word("Hello aaa", 1, 4));
//  }

void ft_free(char **str)
{
    int i;
    i = 0;
    while (str[i] != 0)
    {
        free(str[i]);
        i++;
    }
    free(str);
}

char **ft_split(char const *s, char c)
{
    char **res;
    int i;
    int start;
    int end;

    if (!s)
	    return (NULL);
    res = malloc ((ft_wordcount((char *)s, c) + 1) * sizeof(char *));
    if (res == NULL)
        return (NULL);
    i = 0;
    start = 0;
    end = 0;
    while (i < ft_wordcount((char *)s, c))
    {
        while (s[start] == c)
            start++;
        end = start;
        while (s[end] != c && s[end] != '\0')
            end++;
        res[i] = ft_word((char *)s, start, end);
        start = end;
        i++;
    }
    res[i] = NULL;
    return(res);
    ft_free(res);
}

// #include <stdio.h>
// int main(void)
// {
//     printf("%s\n", *ft_split(" Hello aaa ", ' '));
// }
