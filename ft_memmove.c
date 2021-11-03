/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:11:59 by roudouch          #+#    #+#             */
/*   Updated: 2021/11/02 11:12:01 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_memmove(void *dst, const void *src, size_t len)
{
	char *d = dst;
    const char *s = src;
      
    char *lastSRC = s + (len-1);
    char *lastDEST = d + (len-1);
    while (len--)
        *lastDEST-- = *lastSRC--;
	return dst;
}

#include <string.h>

int main()
{
	char dst[] = "abcde";

	ft_memmove(dst + 2, dst, 3);
	puts(dst);

	char dst1[] = "abcde";

	puts("\n");
	memmove(dst1 + 2, dst1, 3);
	printf("%s", dst1);


	return (0);
}