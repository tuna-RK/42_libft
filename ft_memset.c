/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memset.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: rikimura <rikimura@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/23 18:02:07 by rikimura         #+#    #+#              */
/*   Updated: 2026/11/11 15:54:31 by rikimura        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *) s;
	while (i < n)
	{
		p[i] = (unsigned char) c;
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	char	str[6];

// 	ft_memset(str, 'A', 5);
// 	str[5] = '\0';
// 	printf("%s\n", str);
// 	return (0);
// }
