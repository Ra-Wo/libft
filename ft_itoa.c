/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:56:54 by roudouch          #+#    #+#             */
/*   Updated: 2021/11/06 12:56:55 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int sizePtr(int num)
{
  int x;
  x = 0;
  while (num != 0)
  {
    x++;
    num /= 10;
  }
  return x;
}

char *ft_itoa(int n)
{
    int i;
    char *ptr;
    long nb;
    int sign;
    int blocks;

	nb = n;
    sign = 0;
    blocks = 0;
    if(nb < 0)
    {
      blocks++;
      sign = 1;
      nb = -nb;
    }
    blocks += sizePtr(nb);
    ptr = (char *)malloc(sizeof(char) * blocks + 1);
	if (!ptr)
		return (NULL);
    i = blocks;

    ptr[i--] = '\0';
    while (nb != 0)
    {
        ptr[i--] = (nb % 10) + '0';
        nb = nb / 10;
    }
    if (sign)
        ptr[i] = '-';
    return (ptr);
}

/* 
int main() {
  int x =  -2147483648;
  printf("%s", ft_itoa(x));
 
  
  return 0;
} */