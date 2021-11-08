/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:01:49 by roudouch          #+#    #+#             */
/*   Updated: 2021/11/03 12:01:50 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		return (ch - 32);
	}
	return (ch);
}

/* int main() {
    char c;

    c = 'm';
    printf("%c -> %c", c, ft_toupper(c));

    c = 'D';
    printf("\n%c -> %c", c, ft_toupper(c));

    c = '9';
    printf("\n%c -> %c", c, ft_toupper(c));

	c = '=';
    printf("\n%c -> %c", c, ft_toupper(c));
    return 0;
} */