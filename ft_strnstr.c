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
char  *ft_strnstr(const char *s, const char *find, size_t len)
{
    int len_find;
    unsigned int i;
    unsigned int x;
    
    len_find = ft_strlen(find);
    if (len_find == 0)
        return ((char *)s);
    i = 0;
    while(s[i] != '\0')
    {
      if (s[i] == *find)
      {
        x = 0;
        while (find[x] != '\0' && find[x] ==  s[i + x] && (i + x) < len)
        {
          if (find[x + 1] == '\0')
            return ((char*)s + i);
          x++;
        }
      }
      i++;
    }
    return (NULL);
}
/* 
int main()
{
    char haystack[30] = "aaabcabcd";
    char needle[10] = "aabc";
    char * empty = (char*)"";


    printf("%d\n", ft_strnstr(haystack, "abcd", 9) == haystack + 5);
    printf("%d\n", ft_strnstr(haystack, "cd", 8) == NULL);
    printf("%d\n", ft_strnstr(haystack, "a", 1) == haystack);
    return 0;
} */