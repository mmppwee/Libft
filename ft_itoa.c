#include "libft.h"

int ft_count(int n)
{
    int i;
    i = 1;
    if (n < 0)
    {
        n = -n;
        i = 2;
    }
    while (n >= 10)
    {
        n = n/10;
        i++;
    }
    return (i);
}

void ft_neg(char *str, int *n, int *sign)
{
    str[0] = '-';
    *n *= -1;
    *sign = 1;
}

static char *overflowwel()
{
    char *str;
    str = malloc(sizeof(char) * 12);
    if (!str)
        return (NULL);
    ft_memcpy(str, "-2147483648", 12);
    return (str);
}

char *ft_itoa(int n)
{
    char    *str;
    int     sign;
    int     i;
    int     j;

    if (n == -2147483648)
    {
        str = overflowwel();
        return (str); 
    }
    i = ft_count(n);
    j = i;
    str = malloc(i + 1);
    if (str == NULL)
        return (NULL);
    sign = 0;
    if (n < 0)
        ft_neg(str, &n, &sign);
    while (i > sign)
    {
        str[--i] = (n % 10) + '0';
        n = n / 10;
    }
    str[j] = '\0';
    return(str);
}

// int main(void)
// {
//     printf("This is -> %s", ft_itoa(-9));
// }