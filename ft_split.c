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

static void cpy(char *dst, char const *src, int n)
{
    while (n--)
        *dst++ = *src++;
    *dst = '\0';
}

static int create_word(char const *s, char c, char **list, int words)
{
    int word_length;
    char *word;
    int index;

    index = 0;
    while (*s != '\0')
    {
        word_length = 0;
        if (*s != c){
          while (index != words)
          {
              if (*s == c || *s == '\0')
              {
                if (!(word = (char *)malloc(sizeof(char) * (word_length + 1))))
				{
					while(index >= 0)
						free(list[index--]);
					free(list);
					return 0;
				}
                cpy(word, (s - word_length), word_length);
                list[index++] = word;
                break;
              }
              word_length++;
              s++;
          }
        }
        s++;
    }
    return index;
}

static int count_words(char const *str, char c)
{
    int words;

    words = 0;
    while(*str)
    {
        if (*str != c && (*(str + 1) == c || *(str + 1) == '\0'))
            words++;
        str++;
    }
    return words;
}

char  **ft_split(char const *s, char c)
{
    int words;
    char **list;
	int a;
	if (s == 0)
		return (0);
    words = count_words(s, c);
    if(!(list = (char **)malloc(sizeof(char *) * (words + 1))))
	{
		free(list);
		return (NULL);
	}
    a = create_word(s, c, list, words);
	if(!list)
		return NULL;
    list[a] = NULL;
    return list;
}

/* 
int main()
{
	
	char **tab = ft_split(0, '_');
	printf("%s", tab[0]);
 
} */