/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwareepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:02:03 by pwareepo          #+#    #+#             */
/*   Updated: 2023/01/10 19:17:47 by pwareepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	n;
	char			*sub;

	i = start;
	j = 0;
	n = 0;
	if (!s)
		return (NULL);
	while (i < len + start && i < ft_strlen(s))
			i++;
	n = i - start;
	sub = (char *)malloc(n + 1);
	if (sub == NULL)
		return (NULL);
	i = start;
	while (i >= start && j < n)
	{
			sub[j] = s[i];
			i++;
			j++;
	}
	sub[j] = '\0';
	return (sub);
}
// #include <stdio.h>
// int main (void)
// {
//     char *a;
//     a = ft_substr("abcde", 2, 3);
//     printf ("%s\n", a);
// }
