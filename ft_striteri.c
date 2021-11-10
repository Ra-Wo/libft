/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:52:50 by roudouch          #+#    #+#             */
/*   Updated: 2021/11/10 19:52:53 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	x;

	x = 0;
	if (s != NULL)
	{
		while (*(s + x))
		{
			f(x, &s[x]);
			x++;
		}
	}
}
/* 
void f(unsigned int index, char* c) {
    if (index < 3) {
        if (*c >= 'a' && *c <= 'z')
            *c = (*c - 32);
    }
} */
/* 
int main(void)
{
    char str[] = "hello world!";
    ft_striteri(str, &f);
    return 0;
} */