/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:25:04 by roudouch          #+#    #+#             */
/*   Updated: 2021/11/01 19:25:06 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<string.h>
void *ft_memcpy(void * dst, const void * src, size_t n)
{
	char *d;
	const char *s;

	d = dst;
	s = src;
	if ((dst == src) && n == 0)
		return (NULL);
	if (!dst && !src)
		return (NULL);
	while (n--)
		*d++ = *s++;
	return (dst);
}