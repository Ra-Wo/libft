/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:12:09 by roudouch          #+#    #+#             */
/*   Updated: 2021/11/03 13:12:12 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i;

    i = 1;
    while (s[i] != '\0')
        i++;

    while (i >= 0)
    {
        if (s[i] == (char )c)
            return ((char*)(s + i));
        i--;
    }
	return (NULL);

}
/* 
#define SIZE 40
 
int main(void)
{
  char buf[SIZE] = "computer program";
  char * ptr;
  int    ch = 'p';
 
 
  ptr = ft_strrchr( buf, ch );
  printf( "The last occurrence of %c in '%s' is '%s'\n", ch, buf, ptr );

} */



