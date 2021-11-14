/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:42:53 by roudouch          #+#    #+#             */
/*   Updated: 2021/11/03 18:42:58 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	long	number;
	int		sign;

	i = 0;
	number = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\v' || str[i] == '\r'
		|| str[i] == '\t' || str[i] == '\n' || str[i] == '\f')
		i++;
	if (str[i] == '+')
	{
		sign = 1;
		i++;
	}
	else if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
		number = (number * 10) + (str[i++] - '0');
	return (number * sign);
}

/* 
int main () {

   int val;
   char str[20] = "-2147483648";
   
   val = ft_atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);
   
   val = atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   return(0);
} */