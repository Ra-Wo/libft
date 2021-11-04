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
	size_t i;


    i = 0;
    while (s[i] != '\0')
        i++;

    while (i > 0)
    {
        if (s[i] == c)
            return (s + i);
        i--;
    }
	return (NULL);

}

#define SIZE 40
 
int main(void)
{
  char buf[SIZE] = "computer program";
  char * ptr;
  int    ch = 'p';
 
  /* This illustrates strchr */
  ptr = ft_strrchr( buf, ch );
  printf( "The last occurrence of %c in '%s' is '%s'\n", ch, buf, ptr );
 
  /* This illustrates strrchr */
  ptr = strrchr( buf, ch );
  printf( "The last occurrence of %c in '%s' is '%s'\n", ch, buf, ptr );
}

/*****************  Output should be similar to:  *****************
 
The first occurrence of p in 'computer program' is 'puter program'
The last occurrence of p in 'computer program' is 'program'
*/

