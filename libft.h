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
#define	LIBFT_H

#include <stddef.h>
#include <stdio.h>
#include <string.h>

int	ft_isalpha(int character);
int	ft_isdigit(char num);
int	ft_isalnum(int ac);
int	ft_isascii(int c);
int	ft_isprint(int arg);
unsigned int	ft_strlen(char *str);
void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void * dst, const void * src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t ft_strlcpy(char * dst, const char * src, size_t dstsize);


#endif
