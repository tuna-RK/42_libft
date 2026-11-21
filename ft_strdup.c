/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rikimura <rikimura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 18:21:40 by rikimura          #+#    #+#             */
/*   Updated: 2026/11/14 13:14:41 by rikimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, len + 1);
	return (str);
}

// int	main(void)
// {
// 	const char	*tests[] = {"Hello", "", "42Tokyo", "abc def", "123456"};
// 	char		*result;
// 	int			i;

// 	i = 0;
// 	while (i < 5)
// 	{
// 		result = ft_strdup(tests[i]);
// 		if (result == NULL)
// 			return (1);
// 		printf("original : \"%s\"\n", tests[i]);
// 		printf("ft_strdup: \"%s\"\n", result);
// 		printf("strcmp   : %s\n\n",
// 			strcmp(tests[i], result) == 0 ? "OK" : "KO");
// 		free(result);
// 		i++;
// 	}
// 	return (0);
// }