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
	while ((dstsize-- -1))
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	
}

#include <string.h>
int main()
{
	char s1[20]= "hello world";
	char dest[25]= "RRRRrrrrrrrrrrr";
	ft_strlcpy(dest, s1, 5);
	puts(dest);	

	// ============

	char s2[20]= "hello world";
	char dest2[25]= "RRRRrrrrrrrrrrr";
	strlcpy(dest2, s2, 5);
	puts(dest2);	

	return 0;
}