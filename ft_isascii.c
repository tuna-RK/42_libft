/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_isascii.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: rikimura <rikimura@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 15:54:41 by rikimura         #+#    #+#              */
/*   Updated: 2026/10/27 19:12:19 by rikimura        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("isascii\n");
// 	printf("%d\n", isascii(-1));
// 	printf("ft %d\n", ft_isascii(-1));
// 	printf("%d\n", isascii('a'));
// 	printf("ft %d\n", ft_isascii('a'));
// 	printf("%d\n", isascii('Z'));
// 	printf("ft %d\n", ft_isascii('Z'));
// 	printf("%d\n", isascii('5'));
// 	printf("ft %d\n", ft_isascii('5'));
// 	printf("%d\n", isascii('@'));
// 	printf("ft %d\n", ft_isascii('@'));
// 	printf("%d\n", isascii('\0'));
// 	printf("ft %d\n", ft_isascii('\0'));
// 	printf("%d\n", isascii(' '));
// 	printf("ft %d\n", ft_isascii(' '));
// 	return (0);
// }
