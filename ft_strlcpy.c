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

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		srclen;

	srclen = ft_strlen(src);
	if (!dstsize)
		return (srclen);
	i = 0;
	while (src[i] != '\0' && (dstsize -1) != 0)
	{
		dst[i] = src[i];
		i++;
		dstsize--;
	}
	dst[i] = '\0';
	return (srclen);
}

/* 
#include <string.h>

int main ()
{
	int s = 11;

	char src[] = "coucou";
	char dst[10]; 
	memset(dst, 'A', 10);

	printf("std: \nreturn: %lu\n%s", strlcpy(dst, src, s), dst);

	char st1[] = "coucou";
	char st2[10];
	memset(st2, 'A', 10);
	printf("\n\nremake: \nreturn: %lu\n%s", ft_strlcpy(st2, st1, s), st2);
	
	return 0;
} */