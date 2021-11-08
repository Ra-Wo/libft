/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:14:27 by roudouch          #+#    #+#             */
/*   Updated: 2021/11/04 16:14:28 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* unsigned int ft_strlen(const char *str)
{
    unsigned int num;
    num = 0;
    while (str[num] != '\0')
        num++;
    return (num);
} */

int ft_find(char const *str, char c)
{
    while (*str != '\0')
    {
        if (*str == c)
        {
            return 1;
        }
        str++;
    }
    return 0;
}

int ft_start(char const *str, char const *set)
{
    int setLen;
	int start;
	int i;

	setLen = ft_strlen(set);
	i = 0;
	start = 0;
	while (str[i])
	{
		if(!ft_find(set ,str[i]))
		{
			return start;
		}
		start++;
		i++;
	}
	return 0;
}

int ft_end(char const *str, char const *set)
{
	int setLen;
	int start;
	int i;

	setLen = ft_strlen(set);
	i = ft_strlen(str) - 1;
	start = 0;
	while (str[i])
	{
		if(!ft_find(set ,str[i]))
		{
			return start;
		}
		start++;
		i--;
	}
	return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
	int start;
	int end;
	int index;
	char *ptr;
	int s1Len;
	int i;

    start = ft_start(s1, set);
	end = ft_end(s1, set);
	s1Len = ft_strlen(s1);
	index = s1Len - (start + end);
	ptr = (char*)malloc(sizeof(char) * index + 1);
	if(!ptr)
		return (NULL);
	s1 += start;
	i = 0;
	while (index--)
	{
		ptr[i] = *s1;
		i++;
		s1++; 
	}
	ptr[i] = '\0';
    return (ptr);
}
/* 
int main()
{
	char const *s1 = "https://www.goo;hhhg:l:e.com";
	char const *set = "/";
	char *p = ft_strtrim(s1, set);
   	printf("%s \n", p);
    return 0;
}
// not correct */ 