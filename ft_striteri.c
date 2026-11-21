/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rikimura <rikimura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 17:24:01 by rikimura          #+#    #+#             */
/*   Updated: 2026/11/13 21:08:57 by rikimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// void	to_upper(unsigned int i, char *c)
// {
// 	(void)i;
// 	if (*c >= 'a' && *c <= 'z')
// 		*c -= 32;
// }

// int	main(void)
// {
// 	char	s1[] = "hello world";
// 	char	s2[] = "42Tokyo";
// 	char	s3[] = "";

// 	ft_striteri(s1, to_upper);
// 	ft_striteri(s2, to_upper);
// 	ft_striteri(s3, to_upper);

// 	printf("s1: %s\n", s1);
// 	printf("s2: %s\n", s2);
// 	printf("s3: %s\n", s3);

// 	ft_striteri(NULL, to_upper);
// 	ft_striteri(s1, NULL);
// 	return (0);
// }