/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwareepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 00:11:06 by pwareepo          #+#    #+#             */
/*   Updated: 2022/10/30 16:24:22 by pwareepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
    char *a = (char*)b;
    size_t i;
    i = 0;
    while (i < len)
    {
        a[i] = c;
        i++;
    }
    return (a);
}

// #include <stdio.h>
// #include <string.h>

// int main () {
//    char str[] = "This is string.h library function";
//    char *ret;
//    ret = ft_memset(str+5,'$',7);
//    printf("%s \n", ret);
//    ret(0);
// }
