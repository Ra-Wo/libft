/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:49:05 by roudouch          #+#    #+#             */
/*   Updated: 2021/11/04 14:49:07 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int				x;
	int				i;
	char			*ptr;
	unsigned int	s_length;

	if (!s)
		return (NULL);
	s_length = ft_strlen(s);
	if (start > s_length)
		len = 0;
	if (len > s_length)
		len = s_length;
	i = 0;
	ptr = (char *)malloc(len * sizeof(char) + 1);
	if (!ptr)
		return (NULL);
	x = len;
	while (x--)
	{
		ptr[i++] = *(s + start);
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}
