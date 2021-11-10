/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:11:59 by roudouch          #+#    #+#             */
/*   Updated: 2021/11/06 16:39:57 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void* ft_memmove(void *dst, const void *src, size_t len)
{
	char *d;
	const char *s;

	d = dst;
	s = src;
	if (dst == src)
		return dst;
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
	{
		char const *lasts = s + (len-1);
		char *lastd = d + (len-1);
		while (len--)
		*lastd-- = *lasts--;
	}
	return (dst);
}
/* 
#include <string.h>

int main()
{
    char src[] = "absss";
    char dst[20];

    ft_memmove(src, src + 2, 6);
    puts(dst);


    return (0);
}  */