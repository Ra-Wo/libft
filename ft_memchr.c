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

void *ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char *s = str;
	while (n-- != 0)
	{
		if (*s == c)
		{
			return (void*)s;
		}
		s++;;
	}
	return (NULL);
}


int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = 'z';
   char *ret;

   ret = ft_memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}
