/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 08:22:48 by roudouch          #+#    #+#             */
/*   Updated: 2021/11/05 08:22:49 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_fill(char **list, int l, int size, char const *s)
{
  int backup;
  int i;
  i = 0;
  backup = size - 1;
  list[l] = malloc(sizeof(char) * size);
  s -= backup;
  while (backup--)
  {
    list[l][i] = *s++;
    i++;
  }
  list[l][i] = '\0';
  return 0;
}

int ft_getsize(char const *s, char c, int start, char **list, int l)
{
  int size;

  while (*s == c)
    s++;
  while (start--)
    s++;
  size = 0;
  while (*s)
  {
    size++;
    if (*s == c || *s == '\0')
      break;
    s++;
  }
  if(*s == '\0')
    size++;
  ft_fill(list, l, size, s);
  return size;
}

int countWord(char const *str, char c)
{
  int num;

  while(*str == c)
    str++; 
  num = 0;
  while(*str != '\0' )
  {
    if(*str == c && *(str + 1) != c && *(str + 1) != '\0')
        num++;
    str++;
  }
  return (num);
}


char  **ft_split(char const *s, char c)
{
	char **list;
	int allWord;
	int sizelastworld;
	int i;
	int l;

	allWord = countWord(s, c);
	list = (char **)malloc(sizeof(char*) * (allWord + 2));
	allWord++;
	sizelastworld = 0;
	i = 0;
	l = 0;
	while (allWord--)
	{
		i += sizelastworld;
		sizelastworld = ft_getsize(s, c, i, list, l);
		l++;
	}
	list[l] = 0;
	return (list);
}
/* 
int main()
{
    char const str[] = "hello_#";
    char c = '#';
    char **x = ft_split(NULL, c);
    int i =0;
    while (x[i])
    {
        printf("%s\n", x[i++]);
    }
} */