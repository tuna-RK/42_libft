/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_isalpha.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: rikimura <rikimura@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/13 19:53:04 by rikimura         #+#    #+#              */
/*   Updated: 2026/10/27 16:22:30 by rikimura        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'));
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("isalpha\n");
// 	printf("%d\n", isalpha('a'));
// 	printf("ft %d\n", ft_isalpha('a'));
// 	printf("%d\n", isalpha('Z'));
// 	printf("ft %d\n", ft_isalpha('Z'));
// 	printf("%d\n", isalpha('5'));
// 	printf("ft %d\n", ft_isalpha('5'));
// 	printf("%d\n", isalpha('@'));
// 	printf("ft %d\n", ft_isalpha('@'));
// 	printf("%d\n", isalpha('\0'));
// 	printf("ft %d\n", ft_isalpha('\0'));
// 	printf("%d\n", isalpha(' '));
// 	printf("ft %d\n", ft_isalpha(' '));
// 	return (0);
// }
