/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:40:30 by roudouch          #+#    #+#             */
/*   Updated: 2021/11/04 15:40:31 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	s1_len;
	unsigned int	s2_len;
	unsigned int	i;
	char			*ptr;

	if (!s1)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	ptr = (char *)malloc((s1_len + s2_len * sizeof(char)) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (s1_len-- != 0)
		ptr[i++] = *s1++;
	while (s2_len-- != 0)
		ptr[i++] = *s2++;
	ptr[i] = '\0';
	return (ptr);
}
