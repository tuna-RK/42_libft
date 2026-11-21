/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rikimura <rikimura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 13:28:32 by rikimura          #+#    #+#             */
/*   Updated: 2026/11/11 21:27:38 by rikimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(long long num)
{
	size_t	len;

	len = 1;
	if (num < 0)
	{
		len++;
		num = -num;
	}
	while (num >= 10)
	{
		num /= 10;
		len++;
	}
	return (len);
}

static void	ft_fill_num(char *str, long long num, size_t len)
{
	str[len] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num >= 10)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	str[--len] = num + '0';
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;

	len = ft_numlen((long long) n);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	ft_fill_num(str, (long long) n, len);
	return (str);
}

// int	main(void)
// {
// 	int	tests[] =
// 	{
// 		0, 1, -1, 42, -42, 12345, -12345, INT_MAX, INT_MIN
// 	};
// 	size_t	i;
// 	char	*result;

// 	i = 0;
// 	while (i < sizeof(tests) / sizeof(tests[0]))
// 	{
// 		result = ft_itoa(tests[i]);
// 		if (result == NULL)
// 			return (1);
// 		printf("input: %d -> result: \"%s\"\n", tests[i], result);
// 		free(result);
// 		i++;
// 	}
// 	return (0);
// }
