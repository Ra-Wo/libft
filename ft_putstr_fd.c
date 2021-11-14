/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 19:29:34 by roudouch          #+#    #+#             */
/*   Updated: 2021/11/11 19:29:36 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	int	x;

	if (!s)
		return ;
	x = 0;
	while (s[x])
	{
		write(fd, &s[x], 1);
		x++;
	}
}

/* 
#include <fcntl.h>
int main ()
{
	char *str = "hello world!";
	int fd = open("text.txt", O_RDWR | O_CREAT, 0777);
	ft_putstr_fd(str, fd);
	return 0;
} */