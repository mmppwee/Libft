/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwareepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:07:59 by pwareepo          #+#    #+#             */
/*   Updated: 2023/01/09 21:48:42 by phnamway         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t j;

	j = 0;
	if (size < 1)
		return (ft_strlen(src));
	while (dest[j] && j < size)
		j++;
	i = j;
	while (src[j-i] && j + 1 < size)
	{			
		dest[j] = src[j-i];
		j++;
	}
	if (i < size)
		dest[j] = '\0';
	return (i + ft_strlen(src));
}
