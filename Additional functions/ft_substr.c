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

#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		x;
	int		i;
	char	*ptr;

	if (!s)
		return (NULL);
	x = len;
	i = 0;
	ptr = (char *)malloc(len * sizeof(char));
	if (!ptr)
		return (NULL);
	while (x--)
	{
		ptr[i++] = *(s + start);
		start++;
	}
	return (ptr);
}
/* 
int main()
{
	char str[] = "hello world";
	int start = 6;
	int len = 7;
	printf("%s", ft_substr(str, start, len));
	return 0;
} */