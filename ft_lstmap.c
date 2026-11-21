/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rikimura <rikimura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 19:26:57 by rikimura          #+#    #+#             */
/*   Updated: 2026/11/13 21:15:56 by rikimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*new_content;

	if (!f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst != NULL)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (new_node == NULL)
		{
			del(new_content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}

// void	*double_num(void *content)
// {
// 	int	*result;

// 	result = malloc(sizeof(int));
// 	if (!result)
// 		return (NULL);
// 	*result = *(int *)content * 2;
// 	return (result);
// }

// void	del(void *content)
// {
// 	free(content);
// }

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*new_lst;
// 	t_list	*tmp;
// 	int		a;
// 	int		b;
// 	int		c;

// 	a = 10;
// 	b = 20;
// 	c = 30;
// 	lst = ft_lstnew(&a);
// 	ft_lstadd_back(&lst, ft_lstnew(&b));
// 	ft_lstadd_back(&lst, ft_lstnew(&c));

// 	new_lst = ft_lstmap(lst, double_num, del);
// 	tmp = new_lst;
// 	while (tmp)
// 	{
// 		printf("%d\n", *(int *)tmp->content);
// 		tmp = tmp->next;
// 	}
// 	ft_lstclear(&new_lst, del);
// 	ft_lstclear(&lst, NULL);
// 	return (0);
// }