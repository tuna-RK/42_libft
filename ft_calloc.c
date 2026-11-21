/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rikimura <rikimura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 19:06:37 by rikimura          #+#    #+#             */
/*   Updated: 2026/11/13 19:02:18 by rikimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (nmemb > 0)
	{
		if (SIZE_MAX / nmemb < size)
			return (NULL);
	}
	ptr = (void *) malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

// int	main(void)
// {
// 	int	*p;
// 	int	i;

// 	p = ft_calloc(5, sizeof(int));
// 	if (!p)
// 		return (1);
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d ", p[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	free(p);
// 	return (0);
// }