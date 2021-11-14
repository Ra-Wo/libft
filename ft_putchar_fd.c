/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 11:30:06 by roudouch          #+#    #+#             */
/*   Updated: 2021/11/11 11:30:09 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* #include <fcntl.h>
#include <stdio.h>


int main() 
{ 
    int fd = open("foo", O_RDWR | O_CREAT, 0777); 
    if (fd < 0) 
    { 
        perror("c1"); 
        exit(1); 
    } 
    printf("\n\nopened the fd = % d\n", fd); 
	ft_putchar_fd('B', fd);
      

    if (close(fd) < 0) 
    { 
        perror("NOT CLOSED!"); 
        exit(1); 
    } else 
    	printf("closed the fd.\n"); 


	int fd1 = open("foo.txt", O_RDWR | O_CREAT, 0777); 
    if (fd1 < 0) 
    { 
        perror("c1"); 
        exit(1); 
    }
    printf("\n\nopened the fd = % d\n", fd1); 
    ft_putchar_fd('C', fd1);

    if (close(fd1) < 0) 
    { 
        perror("NOT CLOSED!"); 
        exit(1); 
    } else 
    	printf("closed the fd.\n"); 

	return 0;
} */