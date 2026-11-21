/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   memchr.c                                          :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: rikimura <rikimura@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/28 21:22:30 by rikimura         #+#    #+#              */
/*   Updated: 2026/11/02 17:29:52 by rikimura        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*bytes;
	unsigned char		target;
	size_t				i;

	bytes = (const unsigned char *) s;
	target = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (bytes[i] == target)
			return ((void *)(bytes + i));
		i++;
	}
	return (NULL);
}
