/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwareepo <pwareepo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:46:19 by pwareepo          #+#    #+#             */
/*   Updated: 2023/01/10 18:53:23 by pwareepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	int		len;
	int		i;

	len = ft_strlen(s1);
	s = (char *) malloc (len + 1);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		s[i] = s1[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char source[] = "GeeksForGeeks";

//     char* target = ft_strdup(source);

//     printf("%s", target);
//     return 0;
// }
