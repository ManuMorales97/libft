/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 17:16:53 by manmoral          #+#    #+#             */
/*   Updated: 2026/05/06 15:24:42 by manmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	if (!lst)
		return (0);
	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
/*int main(void)
{
	t_list	*list;
	t_list	*list02;
	int		size;

	list = ft_lstnew(" caraculo");
	list02 = ft_lstnew("En tu culo");
	ft_lstadd_front(&list, list02);
	size = ft_lstsize(list);
	printf("%d\n", size);
	while (list)
	{
		printf("%s",(char *)list->content);
		list = list->next;
	}
	return (0);
}*/