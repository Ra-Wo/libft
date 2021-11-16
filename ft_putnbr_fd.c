/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 10:45:59 by roudouch          #+#    #+#             */
/*   Updated: 2021/11/12 10:46:02 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	negative(long nb, int fd)
{
	char	sign;
	int		number;
	int		x;

	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		sign = '-';
		write(fd, &sign, 1);
		nb *= -1;
	}
	x = nb;
	if (nb > 0)
	{
		negative(nb / 10, fd);
		number = (x % 10) + '0';
		write(fd, &number, 1);
	}
}

static void	positive(long nb, int fd)
{
	int	number;
	int	x;

	if (nb == 2147483647)
	{
		write(fd, "2147483647", 10);
		return ;
	}
	x = nb;
	if (nb > 0)
	{
		positive(nb / 10, fd);
		number = (x % 10) + '0';
		write(fd, &number, 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
		negative(nb, fd);
	else if (nb > 0)
		positive(nb, fd);
	else if (nb == 0)
		write(fd, "0", 1);
}
