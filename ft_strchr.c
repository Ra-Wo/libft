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
	while (*s++ != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);

}


int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '*';
   char *ret;

   ret = strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);

   const char str1[] = "http://www.tutorialspoint.com";
   char *ret1;

   ret1 = strchr(str1, ch);

   printf("String after |%c| is - |%s|\n", ch, ret1);
   
   return(0);
}