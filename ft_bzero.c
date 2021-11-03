/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:48:56 by roudouch          #+#    #+#             */
/*   Updated: 2021/11/01 16:49:01 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

#include <stdio.h>
int main()
{
	char str[20] = "hello world";
	ft_bzero(str, 1);
	printf("%s", str);	
	return 0;
}