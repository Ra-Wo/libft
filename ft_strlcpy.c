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