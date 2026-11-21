/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcmp.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: rikimura <rikimura@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/28 21:33:45 by rikimura         #+#    #+#              */
/*   Updated: 2026/10/28 21:56:20 by rikimura        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = (const unsigned char *) buf1;
	p2 = (const unsigned char *) buf2;
	i = 0;
	while (i < count)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
