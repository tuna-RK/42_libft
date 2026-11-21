/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rikimura <rikimura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 19:15:23 by rikimura          #+#    #+#             */
/*   Updated: 2026/11/14 13:49:10 by rikimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_copy_forward(unsigned char *d,
		const unsigned char *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dst_bytes;
	const unsigned char	*src_bytes;
	size_t				offset;

	if (dest == src || n == 0)
		return (dest);
	dst_bytes = (unsigned char *)dest;
	src_bytes = (const unsigned char *)src;
	offset = 0;
	while (offset < n && src_bytes + offset != dst_bytes)
		offset++;
	if (offset == n)
		ft_copy_forward(dst_bytes, src_bytes, n);
	else
	{
		while (n > 0)
		{
			n--;
			dst_bytes[n] = src_bytes[n];
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char	a[20];
// 	char	b[20];

// 	strcpy(a, "abcdef");
// 	strcpy(b, "abcdef");
// 	memmove(a + 2, a, 3);
// 	ft_memmove(b + 2, b, 3);
// 	printf("Test 1 (backward): %s | %s\n", a, b);

// 	strcpy(a, "abcdef");
// 	strcpy(b, "abcdef");
// 	memmove(a, a + 2, 3);
// 	ft_memmove(b, b + 2, 3);
// 	printf("Test 2 (forward):  %s | %s\n", a, b);

// 	strcpy(a, "abcdef");
// 	strcpy(b, "abcdef");
// 	memmove(a, a, 3);
// 	ft_memmove(b, b, 3);
// 	printf("Test 3 (same):     %s | %s\n", a, b);

// 	strcpy(a, "abcdef");
// 	strcpy(b, "abcdef");
// 	memmove(a, a + 2, 0);
// 	ft_memmove(b, b + 2, 0);
// 	printf("Test 4 (zero):     %s | %s\n", a, b);

// 	return (0);
// }
