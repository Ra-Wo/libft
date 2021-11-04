/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:08:26 by roudouch          #+#    #+#             */
/*   Updated: 2021/11/03 14:08:27 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t i;

	i = 0;
    while (n != 0)
    {
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		n--;
		i++;
    }
}

int main () {
   char str1[15] = "aaaaa";
   char str2[15] = "aaaaal";
   int ret;
   int x = 9;

   ret = strncmp(str1, str2, x);

   if(ret < 0) {
      printf("std:	%s < %s", str1, str2);
   } else if(ret > 0) {
      printf("std:	%s < %s", str2, str1);
   } else {
      printf("std:	%s = %s", str1, str2);
   }

    puts("\n");

    ret = ft_strncmp(str1, str2, x);

   if(ret < 0) {
      printf("REMAKE:	%s < %s", str1, str2);
   } else if(ret > 0) {
      printf("REMAKE:	%s < %s", str2, str1);
   } else {
      printf("REMAKE:	%s = %s", str1, str2);
   }

   
   return(0);
}