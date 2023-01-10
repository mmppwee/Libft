/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwareepo <pwareepo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:20:41 by pwareepo          #+#    #+#             */
/*   Updated: 2023/01/10 18:20:41 by pwareepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (!d && !s)
		return (dest);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

// #include <stdio.h>
// #include <string.h>

// int main () {
//    const char src[50] = "http://www.tutorialspoint.com";
//    char dest[50] = "Heloooo!!";
//    char *ret;
//    ret = ft_memcpy(dest, src, 10);
//    printf("%s\n", ret);
//    return(0);
// }
