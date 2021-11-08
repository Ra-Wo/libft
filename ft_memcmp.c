/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:30:09 by roudouch          #+#    #+#             */
/*   Updated: 2021/11/03 16:30:10 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char *s1;
	const unsigned char *s2;

	s1 = str1;
	s2 = str2;
	while (n-- != 0)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}

/* 
int main () {
   char str1[15] = "helllo";
   char str2[15] = "hdllo";
   int ret;

   ret = ft_memcmp(str1, str2, 5);

	printf("%d", ret);
   
   return(0);
}
 */