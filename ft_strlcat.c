/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:43:52 by roudouch          #+#    #+#             */
/*   Updated: 2021/11/02 14:43:54 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	backup_dstsize;
	size_t			final_length;
	size_t			dlen;
	size_t			slen;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (dstsize > (dlen))
		final_length = (dlen) + (slen);
	else
		final_length = (slen) + dstsize;
	backup_dstsize = dstsize;
	while (backup_dstsize != 0 && *dst != '\0')
	{
		dst++;
		backup_dstsize--;
	}
	if (backup_dstsize > 0)
	{
		while (--backup_dstsize != 0 && *src != '\0')
			*dst++ = *src++;
		*dst = '\0';
	}
	return (final_length);
}
