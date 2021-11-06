/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:57:59 by roudouch          #+#    #+#             */
/*   Updated: 2021/11/03 16:58:01 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


unsigned int fstrlen(const char *str)
{
    unsigned int num;
    num = 0;
    while (str[num] != '\0')
        num++;
    return (num);
}

int compareWorld(const char *str1, const char *str2)
{
    unsigned int i;
	
	i = fstrlen(str2) - 1;

    while ((*str1++ == *str2++) && i-- != 0)
    {
        if (*str1 != *str2)
        	return 0;
    }
    return 1;
}

char *ft_strnstr(const char *s, const char *find, size_t len)
{
    while(len-- != 0)
    {
        if (*s == *find)
        {
            if (compareWorld(s, find) && len != 0)
            {
                return ((char*)s);
            }
        }
        s++;
    }
    return (0);
}

int main()
{
    const char *largestring = "F Bar Bazoo";
    const char *smallstring = "B a";
	int s = 10;
    char *ptr;
 
    /* ptr = strnstr(largestring, smallstring, s);
    printf("std:	%s\n", ptr); */

    char *ptr1;
 
    ptr1 = ft_strnstr(largestring, smallstring, s);
    printf("Remake:	%s", ptr1);

    return 0;
}

