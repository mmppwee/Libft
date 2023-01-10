/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwareepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:21:07 by pwareepo          #+#    #+#             */
/*   Updated: 2023/01/10 19:23:45 by pwareepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	if (*s2 == '\0')
		return ((char *)s1);
	if (n < 1)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		j = 0;
		while (s1[i + j] == s2[j] && i + j < n)
		{
			if (s2[j + 1] == '\0')
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	const char largestring[30] = "aaabcabcd";
// 	const char smallstring[10] = "aabc";
// 	// printf ("%s\n",ft_strnstr(largestring, smallstring, 10));
// 	printf ("%s\n",ft_strnstr(largestring, "abcd", 9));
// }
