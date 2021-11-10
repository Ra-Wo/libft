/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:22:45 by roudouch          #+#    #+#             */
/*   Updated: 2021/11/04 10:22:46 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    unsigned int size;
	
	size = ft_strlen(s1);
    char *ptr = (char *)malloc(size * sizeof(char) + 1);
	if (!ptr)
		return (NULL);
    ft_strlcpy(ptr, s1, size + 1);
    return (ptr);
}
/* 
#include <stdio.h>

int main()
{

    char s[] = "GeeksForGeeksdgdsgdskgdsgkgsdgdjsgdsgss";
 
    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* t = ft_strdup(s);
 
    printf("%s", t);
    return 0;
} */