/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:29:21 by roudouch          #+#    #+#             */
/*   Updated: 2021/11/01 11:29:29 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int i)
{
    if (i >= '0' && i <='9')
        return (1);
	else 
    	return (0);
}

/* 
#include <ctype.h>
int main ()
{

	int i;

	i = -1;
	printf("remake: %d --- std: %d {where: %c}\n", ft_isdigit(i + 304), isdigit(i + 304), i + 304);
		i++;

	return 0;
}
 */