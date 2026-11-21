/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strnstr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: rikimura <rikimura@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/02 15:11:14 by rikimura         #+#    #+#              */
/*   Updated: 2026/11/11 15:55:29 by rikimura        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *) big);
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (little[j] != '\0' && j < len - i && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *) & big[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*text = "Hello, World!";
// 	char		*result;

// 	result = ft_strnstr(text, "World", 12);
// 	if (result != NULL)
// 	{
// 		printf("発見: %s\n", result);
// 	}
// 	else
// 	{
// 		printf("見つかりませんでした\n");
// 	}
// 	result = ft_strnstr(text, "World", 5);
// 	if (result != NULL)
// 	{
// 		printf("発見: %s\n", result);
// 	}
// 	else
// 	{
// 		printf("見つかりませんでした (制限内になし)\n");
// 	}
// 	return (0);
// }
