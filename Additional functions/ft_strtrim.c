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

#include <stdlib.h>
#include <stdio.h>
/* 
unsigned int ft_strlen(const char *str)
{
    unsigned int num;
    num = 0;
    while (str[num] != '\0')
        num++;
    return (num);
}

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

char *ft_strtrim(char const *s1, char const *set)
{
    unsigned int s1Len;
    unsigned int setLen;
    int index;
	int i;
    
    s1Len = ft_strlen(s1);
    setLen = ft_strlen(set);
    char *ptr = (char*)malloc((s1Len + setLen) * sizeof(char));
	if(!ptr)
		return (0);
    index = 0;
	i = 0;
    while (setLen != 0)
    {
        while (s1Len != 0 && s1[index] != '\0')
        {
            if (!(ft_find(set, s1[index])))
                ptr[i++] = s1[index];
            index++;
            s1Len--;
  
        }
        setLen--;
    }
    ptr[i] = '\0';
    return (ptr);
}

int main()
{
	char *p = ft_strtrim("abzc.", "abzc");
    printf("%s \n", p); //q
    return 0;
} */

/* not correct */