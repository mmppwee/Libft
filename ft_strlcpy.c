/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwareepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:33:51 by pwareepo          #+#    #+#             */
/*   Updated: 2022/10/30 18:24:17 by pwareepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t c;
	size_t i;

	c = ft_strlen(src);
	i = 0;

	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
	   		dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (c);
}

// #include <stdio.h>
// #include <string.h>
// void test(int size)
// {
//     char string[] = "coucou";
//     char buffer[10]; memset(buffer, 'A', 10);
//     size_t r;

//     r = ft_strlcpy(buffer,string,size);

//     printf("Copied '%s' into '%s', length %zu\n", string, buffer, r);
// }

// int main()
// {
//     test(0);
//     test(1);
//     test(2);
//     test(-1);

//     return(0);
// }