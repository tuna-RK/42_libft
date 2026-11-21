/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rikimura <rikimura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 13:09:42 by rikimura          #+#    #+#             */
/*   Updated: 2026/11/13 20:14:20 by rikimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static char	**free_split(char **result, size_t count)
{
	while (count > 0)
		free(result[--count]);
	free(result);
	return (NULL);
}

static char	**fill_split(char **result, char const *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		if (len > 0)
		{
			result[i] = ft_substr(s, 0, len);
			if (!result[i])
				return (free_split(result, i));
			i++;
		}
		s += len;
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	count;

	if (!s)
		return (NULL);
	count = count_words(s, c);
	result = malloc(sizeof(char *) * (count + 1));
	if (!result)
		return (NULL);
	return (fill_split(result, s, c));
}

// int main(void)
// {
//     char **result;
//     int i;

//     char *str = "Hello world this is a test";
//     char delimiter = ' ';

//     result = ft_split(str, delimiter);

//     if (result == NULL)
//     {
//         printf("Error: Allocation failed.\n");
//         return (1);
//     }

//     i = 0;
//     while (result[i] != NULL)
//     {
//         printf("result[%d]: \"%s\"\n", i, result[i]);
//         free(result[i]);
//         i++;
//     }
//     free(result);

//     return (0);
// }