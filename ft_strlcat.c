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

    unsigned int bDstSize;
	size_t DSLen;
	size_t dlen;
	size_t slen;

	dlen = 0;
	while(dst[dlen] != '\0')
		dlen++; 

	slen = 0;
	while(src[slen] != '\0')
		slen++;

	if (dstsize > (dlen))
 		DSLen = (dlen) + (slen);
	else 
		DSLen = (slen) + dstsize;
    
	bDstSize = dstsize;
    while (bDstSize != 0 && *dst != '\0')
    {
      dst++;
      bDstSize--;
    }

    if (bDstSize > 0){
		while (--bDstSize != 0 && *src != '\0')
		{
		*dst++ = *src;
		src++;
		}
	}

	return (DSLen);

}

int main()
{
	int size = 0;

	char s1[20]= "hello world";
	char dest[25]= "123456789";
	puts("\nstd:");
	printf("%lu \n", strlcat(dest, s1, size));
	puts(dest);

	// ============

	char s2[20]= "hello world";
	char dest2[25]= "123456789";
	puts("\nremak:");
	printf("%lu \n", ft_strlcat(dest2, s2, size));
	puts(dest2);

	return 0;
}
