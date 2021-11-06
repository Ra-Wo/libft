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


#include <stdlib.h>
#include <stdio.h>

int copyWord(char const *str, char c, int start)
{
  
}

int getsize(char const *str, char c)
{
  
}

int countDeli(char const *str, char c)
{
  int num;
  int start;

  start = 0;
  num = 0;
  while(*str != '\0' )
  {
    if (*str != c)
      start = 1;
    if(start != 0){
      if(*str == c && *(str + 1) != c && *(str + 1) != '\0')
          num++;
    }
    str++;
  }
  return (num);
}

/* the split function  */
char **ft_split(char const *s, char c)
{
  int **list;
  int allDeli;
  
  allDeli = countDeli(s, c);
  list = malloc(sizeof(char*) * allDeli + 1);
  if(!list)
    return (0);
  
}

int main()
{
	char const str[] = "Hello#world";
	char c = '#';
	char **x = ft_split(str, c);
}