/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:55:47 by roudouch          #+#    #+#             */
/*   Updated: 2021/11/02 09:55:51 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFT_H
# define	LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>

int				ft_isalpha(int character);
int				ft_isdigit(char num);
int				ft_isalnum(int ac);
int				ft_isascii(int c);
int				ft_isprint(int arg);
unsigned int	ft_strlen(const char *str);
void			*ft_memset(void *str, int c, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void * dst, const void * src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
size_t			ft_strlcpy(char * dst, const char * src, size_t dstsize);
size_t			ft_strlcat(char * dst, const char * src, size_t dstsize);
int				ft_toupper(int ch);
int				ft_tolower(int ch);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(const char *str1, const char *str2, size_t n);
void			*ft_memchr(const void *str, int c, size_t n);
int				ft_memcmp(const void *str1, const void *str2, size_t n);
char			*ft_strnstr(const char *s, const char *find, size_t len);
int				ft_atoi(const char *str);
void			*ft_calloc(size_t count, size_t size);
char			*ft_strdup(const char *s1);


char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));


#endif
