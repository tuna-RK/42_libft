/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putnbr_fd.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: rikimura <rikimura@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/08 13:08:40 by rikimura         #+#    #+#              */
/*   Updated: 2026/11/11 15:54:41 by rikimura        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	num;

	num = n;
	if (num < 0)
	{
		write(fd, "-", 1);
		num = -num;
	}
	if (num >= 10)
	{
		ft_putnbr_fd(num / 10, fd);
	}
	c = (num % 10) + '0';
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	ft_putnbr_fd(0, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(123, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(-123, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(INT_MAX, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(INT_MIN, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(0, 2);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(123, 2);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(-123, 2);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(INT_MAX, 2);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(INT_MIN, 2);
// 	write(1, "\n", 1);
// 	return (0);
// }
