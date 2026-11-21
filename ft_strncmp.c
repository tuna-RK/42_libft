/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strncmp.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: rikimura <rikimura@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/02 17:54:37 by rikimura         #+#    #+#              */
/*   Updated: 2026/11/11 15:55:22 by rikimura        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0')
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("strncmp\n");
// 	printf("%d\n", strncmp("hello", "hello", 5));
// 	printf("ft %d\n", ft_strncmp("hello", "hello", 5));
// 	printf("%d\n", strncmp("abc", "abd", 3));
// 	printf("ft %d\n", ft_strncmp("abc", "abd", 3));
// 	printf("%d\n", strncmp("abc", "xyz", 0));
// 	printf("ft %d\n", ft_strncmp("abc", "xyz", 0));
// 	printf("%d\n", strncmp("", "", 5));
// 	printf("ft %d\n", ft_strncmp("", "", 5));
// 	printf("%d\n", strncmp("abc\0xyz", "abc\0def", 7));
// 	printf("ft %d\n", ft_strncmp("abc\0xyz", "abc\0def", 7));
// 	printf("%d\n", strncmp("\xff", "\x01", 1));
// 	printf("ft %d\n", ft_strncmp("\xff", "\x01", 1));
// 	printf("%d\n", strncmp("abc", "", 5));
// 	printf("ft %d\n", ft_strncmp("abc", "", 5));
// 	return (0);
// }
