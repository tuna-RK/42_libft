/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rikimura <rikimura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:02:24 by rikimura          #+#    #+#             */
/*   Updated: 2026/11/14 16:42:32 by rikimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("isalnum\n");
// 	printf("%d\n", isalnum('a'));
// 	printf("ft %d\n", ft_isalnum('a'));
// 	printf("%d\n", isalnum('Z'));
// 	printf("ft %d\n", ft_isalnum('Z'));
// 	printf("%d\n", isalnum('5'));
// 	printf("ft %d\n", ft_isalnum('5'));
// 	printf("%d\n", isalnum('@'));
// 	printf("ft %d\n", ft_isalnum('@'));
// 	printf("%d\n", isalnum('\0'));
// 	printf("ft %d\n", ft_isalnum('\0'));
// 	printf("%d\n", isalnum(' '));
// 	printf("ft %d\n", ft_isalnum(' '));
// 	return (0);
// }
