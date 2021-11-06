/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:03:46 by roudouch          #+#    #+#             */
/*   Updated: 2021/11/02 12:03:49 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char * dst, const char * src, size_t dstsize)
{
	const char *s = src;
	unsigned int i = 0;

	while (src != '\0' && (dstsize-- -1))
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/* 
int main ()
{
	int s = 11;

	char s1[20] = "hello guyhshrthrth";
	char s2[20];
	printf("std: \nreturn: %lu\n%s", strlcpy(s2, s1, s), s2);

	char st1[20] = "hello guyhshrthrth";
	char st2[20];
	printf("\n\nremake: \nreturn: %lu\n%s", ft_strlcpy(st2, st1, s), st2);
	
	return 0;
} */