/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:18:47 by roudouch          #+#    #+#             */
/*   Updated: 2021/11/04 09:18:49 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(sizeof(void) * (size * count));
	if (!ptr)
		return (0);
	ft_bzero(ptr, size * count);
	return (ptr);
}

/* 
#include <stdio.h>
int main() {
  int *ptr;
  int blocks = 10;
  ptr = (int*) ft_calloc(blocks, sizeof(int));
  int i = 0;

  while (blocks-- != 0)
  {
    printf("%d\n", ptr[i++]);   
  }
  return 0;
} */