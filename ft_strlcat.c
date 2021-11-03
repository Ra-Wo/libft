/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:43:52 by roudouch          #+#    #+#             */
/*   Updated: 2021/11/02 14:43:54 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t ft_strlcat(char * dst, const char * src, size_t dstsize)
{

    unsigned int bDstSize = dstsize;
    int dlen;
    char *d = dst;

    while (bDstSize != 0 && *dst != '\0')
    {
      dlen++;
      dst++;
      bDstSize--;
    }
    
    while (bDstSize != 0 && *src != '\0')
    {
      *dst++ = *src;
      src++;
    }


}

int main()
{
	int size = 11;

	char s1[20]= "hello world";
	char dest[25]= "123456789";
	strlcat(dest, s1, size);
	puts(dest);	

	// ============

	char s2[20]= "hello world";
	char dest2[25]= "123456789";
	ft_strlcat(dest2, s2, size);
	puts(dest2);	

	return 0;
}
