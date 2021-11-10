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

static int ft_size(int num)
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

static char *allocate(int size)
{
	char *ptr;

	ptr = (char *)malloc(sizeof(char) * size + 1);
	if (!ptr)
		return (NULL);
	return (ptr);
}

static char *negative(long nb)
{
    int size;
	char *ptr;
	int i;

	nb *= -1;
	size = ft_size(nb) + 1;
	ptr = allocate(size);
	if (!ptr)
		return NULL;
	i = size;
	ptr[i--] = '\0';
	while (nb != 0)
    {
        ptr[i--] = (nb % 10) + '0';
        nb = nb / 10;
    }
	ptr[i] = '-';
	return ptr;
}

static char *positive(long nb)
{
    int size;
	char *ptr;
	int i;

	size = ft_size(nb);
	ptr = allocate(size);
	if (!ptr)
		return NULL;
	i = size;
	ptr[i--] = '\0';
	while (nb != 0)
    {
        ptr[i--] = (nb % 10) + '0';
        nb = nb / 10;
    }
	return ptr;
}


char *ft_itoa(int n)
{
    long nb;
	char *ptr;

	nb = n;
	if (nb < 0)
	{
		ptr = negative(nb);
		if(!ptr)
			return NULL;
		return ptr;
	}
	else if (nb > 0)
	{
		ptr = positive(nb);
		if(!ptr)
			return NULL;
		return ptr;
	}
	else if (nb == 0 || nb == -0)
	{
		ptr = allocate(1);
		ptr[0] = '0';
		ptr[1] = '\0';
		return ptr;
	}
	return NULL;	
}
/* 
#include <string.h>
int main(void) 
{
	char *i1 = ft_itoa(-623);
	char *i2 = ft_itoa(156);
	char *i3 = ft_itoa(-0);

	if (!strcmp(i1, "-623"))
	{
		puts("-623: 1");
	}
	if (!strcmp(i2, "156"))
	{
		puts("156: 1");
	}
	if (!strcmp("0", i3))
	{
		puts("0: 1");
	}


  return 0;
} */