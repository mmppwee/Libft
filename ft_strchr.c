/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwareepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:57:07 by pwareepo          #+#    #+#             */
/*   Updated: 2022/10/30 20:06:38 by pwareepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return ((char*)&s[i]);
	return (NULL);
}


// #include <stdio.h>
// #include <string.h>

// int main () {
//    const char str[] = "http://www.tutorialspoint.com";
//    const char ch = 'a';
//    char *ret;

//    ret = ft_strchr(str, ch);

//    printf("|%s|\n", ret);
   
//    return(0);
// }	
