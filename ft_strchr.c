/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rikimura <rikimura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 16:44:18 by rikimura          #+#    #+#             */
/*   Updated: 2026/11/14 15:48:24 by rikimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *) & s[i]);
		i++;
	}
	if ((char) c == '\0')
		return ((char *) & s[i]);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main(void) {
//     const char *str = "Hello, world!";
//     char target = 'o';

//     char *result = ft_strchr(str, target);

//     if (result != NULL) {
//         printf("文字 '%c' が見つかりました: %s\n", target, result);
//         printf("インデックス位置: %ld\n", result - str);
//     } else {
//         printf("文字 '%c' は見つかりませんでした。\n", target);
//     }

//     return 0;
// }