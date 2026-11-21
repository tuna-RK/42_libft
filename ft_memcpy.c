/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rikimura <rikimura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 21:08:00 by rikimura          #+#    #+#             */
/*   Updated: 2026/11/14 16:19:09 by rikimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*uc_dest;
	const unsigned char	*uc_src;

	i = 0;
	uc_dest = dest;
	uc_src = src;
	if (n == 0)
		return (dest);
	while (i < n)
	{
		*uc_dest = *uc_src;
		uc_dest++;
		uc_src++;
		i++;
	}
	return (dest);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	s1[] = "Hello libft";
// 	char	s2[] = "\0";
// 	char	d1[20];
// 	char	ft_d1[20];
// 	char	d2[20];
// 	char	ft_d2[20];
// 	char	*result1 = memcpy(d1, s1, sizeof(s1));
// 	char	*ft_result1 = ft_memcpy(ft_d1, s1, sizeof(s1));
// 	char	*result2 = memcpy(d2, s2, sizeof(s2));
// 	char	*ft_result2 = ft_memcpy(ft_d2, s2, sizeof(s2));

// 	printf("%s\n", result1);
// 	printf("ft %s\n", ft_result1);
// 	printf("%s\n", result2);
// 	printf("ft %s\n", ft_result2);
// 	return (0);
// }
