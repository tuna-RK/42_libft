/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rikimura <rikimura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:42:58 by rikimura          #+#    #+#             */
/*   Updated: 2026/11/14 16:55:21 by rikimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	int		result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result = result * 10 - (str[i] - '0');
		i++;
	}
	if (sign == -1)
		return (result);
	return (-result);
}

// int	main(void)
// {
// 	const char	*tests[] =
// 	{
// 		"42",
// 		"-42",
// 		"+42",
// 		"   42",
// 		"\t\n\v\f\r 42",
// 		"0",
// 		"-0",
// 		"",
// 		"   ",
// 		"abc42",
// 		"42abc",
// 		"12 34",
// 		"--42",
// 		"+-42",
// 		"2147483647",
// 		"-2147483648",
// 		"0000042"
// 	};
// 	size_t	i;

// 	i = 0;
// 	while (i < sizeof(tests) / sizeof(tests[0]))
// 	{
// 		printf("input: \"%s\"\n", tests[i]);
// 		printf("atoi:    %d\n", atoi(tests[i]));
// 		printf("ft_atoi: %d\n\n", ft_atoi(tests[i]));
// 		i++;
// 	}
// 	return (0);
// }
