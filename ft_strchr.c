/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:12:16 by roudouch          #+#    #+#             */
/*   Updated: 2021/11/03 12:12:18 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char*)s + i);
		i++;
	}
	if(s[i] == c)
		return ((char*)s + i);
	return (NULL);
}

/* 
int main () {
   const char str[] = "abcd";
   const char ch = '\0';
   char *ret;

   ret = ft_strchr(str, ch);

   printf("%p, %p\n", str + 4, ret);
   
   return(0);
} */