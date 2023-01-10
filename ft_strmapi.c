/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwareepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:53:57 by pwareepo          #+#    #+#             */
/*   Updated: 2023/01/10 19:00:55 by pwareepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*a;
	unsigned int		i;

	if (!s || !f)
		return (NULL);
	a = ft_strdup(s);
	if (!a)
		return (NULL);
	i = 0;
	while (a[i] != '\0')
	{
		a[i] = f(i, a[i]);
		i++;
	}
	return (a);
}
