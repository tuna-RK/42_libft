/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_substr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: rikimura <rikimura@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/04 21:30:19 by rikimura         #+#    #+#              */
/*   Updated: 2026/11/07 16:46:51 by rikimura        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*result;

	i = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	while (i < len && s[start + i] != '\0')
		i++;
	result = malloc(i + 1);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s + start, i + 1);
	return (result);
}

// int	main(void)
// {
// 	char	*s;
// 	char	*result;
// 	size_t	i;

// 	s = "Hello World";
// 	result = NULL;
// 	i = 0;
// 	while (i < 6)
// 	{
// 		if (i == 0)
// 			result = ft_substr(s, 0, 5);
// 		else if (i == 1)
// 			result = ft_substr(s, 6, 5);
// 		else if (i == 2)
// 			result = ft_substr(s, 6, 100);
// 		else if (i == 3)
// 			result = ft_substr(s, 11, 5);
// 		else if (i == 4)
// 			result = ft_substr(s, 100, 5);
// 		else
// 			result = ft_substr(s, 0, 0);
// 		printf("[%zu] \"%s\"\n", i, result);
// 		free(result);
// 		i++;
// 	}
// 	return (0);
// }
