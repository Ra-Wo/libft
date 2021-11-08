/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:08:40 by roudouch          #+#    #+#             */
/*   Updated: 2021/11/03 12:08:41 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int ft_tolower(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
	{
		return (ch + 32);
	}
	return (ch);
}

/* int main()
{
    char c, result;

    c = 'M';
    result = ft_tolower(c);
    printf("tolower(%c) = %c\n", c, result);

    c = 'm';
    result = ft_tolower(c);
    printf("tolower(%c) = %c\n", c, result);

    c = '+';
    result = ft_tolower(c);
    printf("tolower(%c) = %c\n", c, result);

    return 0;
} */