/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:42:23 by roudouch          #+#    #+#             */
/*   Updated: 2021/11/06 14:42:28 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* unsigned int	ft_strlen(const char *str);

int ft_toupper(int ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		return (ch - 32);
	}
	return (ch);
}
 */
char* ft_strmapi(char const* s, char (*f)(unsigned int, char))
{
    unsigned int len;
    unsigned int i;
    char* str;

    i = 0;
    if (!s || !f)
        return (NULL);
    len = ft_strlen(s);
    if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    while (i < len)
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}
/* 

#include <stdio.h>

char f(unsigned int i, char c)
{
    	
	return (ft_toupper(c));
}

int main()
{
    char str1[] = "abc";
    char* str2;
    str2 = ft_strmapi(str1, *f);
    printf("%s\n", str2);
} */