/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 08:44:31 by roudouch          #+#    #+#             */
/*   Updated: 2021/11/12 08:44:33 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	int		x;
	char	newl;
	
	if (!s)
		return ;
	newl = '\n';
	x = 0;
	while (s[x])
	{
		write(fd, &s[x], 1);
		x++;
	}
	write(fd, &newl, 1);
}

/* 
#include <fcntl.h>
int main()
{
	char *str = "this is the first line";
	int fd = open("hello.dat", O_CREAT | O_RDWR | O_APPEND, 0777);
	ft_putendl_fd(str, fd);

	char *str1 = "this is the second line ";
	fd = open("hello.txt", O_RDWR | O_APPEND, 0777);
	ft_putendl_fd(str1, fd);
	return 0;
} */