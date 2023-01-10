/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwareepo <pwareepo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:00:24 by pwareepo          #+#    #+#             */
/*   Updated: 2023/01/10 18:00:24 by pwareepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*a;
	size_t	i;

	i = 0;
	a = (char *)s;
	while (i < n)
	{
		a[i] = 0;
		i++;
	}
	s = a;
}

/*#include <stdlib.h>
#include <string.h>
int main(void)
{
	char buffer [80];
	ft_bzero(buffer, 80);
	return EXIT_SUCCESS;
}*/
