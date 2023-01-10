/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwareepo <pwareepo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:07:11 by pwareepo          #+#    #+#             */
/*   Updated: 2023/01/10 18:08:55 by pwareepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*s;

	i = count * size;
	if (count >= SIZE_MAX || size >= SIZE_MAX)
		return (NULL);
	s = malloc(i);
	if (s == NULL)
		return (NULL);
	ft_bzero(s, i);
	return (s);
}
