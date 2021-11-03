/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:11:59 by roudouch          #+#    #+#             */
/*   Updated: 2021/11/02 11:12:01 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_memmove(void *dst, const void *src, size_t len)
{

	char *d = (char*)dst;
	const char *s = (char*)src;
	while (len--)
	{
		*d++ = *s++;
	}
	return (dst);
}

#include <string.h>

int main()
{
	char str1[] = "abcde";
    char str2[] = "*&^%";

	ft_memmove(str1 + 2, str1, 3);
	puts(str1);

	char s1[] = "abcde";
    char s2[] = "*&^%";
	puts("\n");
	memmove(s1 + 2, s1, 3);
	puts(s1);


	return (0);
}