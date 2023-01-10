/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwareepo <pwareepo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:14:59 by pwareepo          #+#    #+#             */
/*   Updated: 2023/01/10 18:14:59 by pwareepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	size_t			i;

	i = 0;
	a = (unsigned char *)s;
	while (i < n)
	{
		if (a[i] == (unsigned char)c)
			return ((void *)&a[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// // #include <string.h>

// int main () {
// //    const char str[] = "http://www.tutorialspoint.com";
// //    const char ch = '.';
// //    char *ret;

// //    ret = ft_memchr(str, ch, strlen(str));

// //    printf("String after |%c| is - |%s|\n", ch, ret);

// //    return(0);
// // }

// char s[] = {0, 1, 2 ,3 ,4 ,5};

// printf("%d", ft_memchr(s, 2, 3));
// }
