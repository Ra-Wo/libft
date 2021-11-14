/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:03:36 by roudouch          #+#    #+#             */
/*   Updated: 2021/11/03 15:03:38 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void* ft_memchr(const void* s, int c, size_t n)
{
	const unsigned char* s1;
	size_t	i;

	s1 = (const unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (s1[i] == (unsigned char)c)
			return ((void *)&s1[i]);
		i++;
	}
	return (0);
}

/* 
int main () {
   int s[100] = {0, 1, 2, 3, 4, 5};
   //int *ret;

   //ret = memchr(s, 2, 3);
	printf("%p \n %p", ft_memchr(s, 2 + 254, 5), s );
   return(0);
} */