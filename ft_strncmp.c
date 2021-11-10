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
	if (n == 0)
		return 0;
    while ((i < (n - 1) )&&( str1[i] != '\0') && (str2[i] != '\0') && (str2[i] == str1[i]))
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}

/* 
#include <string.h>
int main () {


  	char *s1 = "";
	char *s2 = "AAAAAA";
	int i1 = ((strncmp(s1, s2, 6) > 0));
	int i2 = ((ft_strncmp(s1, s2, 6) > 0));

	printf("%d\n%d", i1, i2);
   
   return(0);
}  */