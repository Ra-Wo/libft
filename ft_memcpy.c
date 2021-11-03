/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:25:04 by roudouch          #+#    #+#             */
/*   Updated: 2021/11/01 19:25:06 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void * dst, const void * src, size_t n)
{
	char *d = dst;
	const char *s = src;

	while (n--)
	{
		*d++ = *s++;
	}
	return (0);
}
	
int main () 
{
   const int src[50] = {1, 6, 9, 6,8 , 5, 9};
   int dest[50];
   
   printf("Before memcpy dest = %d\n", *(dest + 1));
   ft_memcpy(dest, src, 8);
   printf("After memcpy dest = %d\n", *(dest + 0));
   printf("After memcpy dest = %d\n", *(dest + 1));
   
   return(0);
}
