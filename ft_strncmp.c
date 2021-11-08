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
	return 0;
}
/* 
int main () {
   char str1[15] = "aaaaa";
   char str2[15] = "aaaaa";

   int x = 9;
	printf("%d", ft_strncmp(str1, str2, x));

   
   return(0);
} */