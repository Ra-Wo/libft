/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:50:06 by roudouch          #+#    #+#             */
/*   Updated: 2021/11/06 16:36:01 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)b;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (str);
}

/* 
#include <stdio.h>
  #include <string.h>
int main ()
{
 	int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	for(int i = 0; i < 10; i++)
		printf("%d, ", num[i]);
	
	printf("\n");
	ft_memset(num + 2, 0,3*4);
	for(int i = 0; i < 10; i++)
		printf("%d, ", num[i]);
	
 
	


	//printf("%d", num); 
	
	return 0;
} 
 */
