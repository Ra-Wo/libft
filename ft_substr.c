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
	int x;
	int		i;
	char	*ptr;
	unsigned int s_len;

	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	
	if (start > s_len)
    	len = 0;
	
	if (len > s_len)
    	len = s_len + 1;

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

/* int main()
{
	char str[] = "hello world";
	int start = 6;
	int len = 5;
	printf("%s", ft_substr(str, start, len));
	return 0;
}  */