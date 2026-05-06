/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 11:00:12 by manmoral          #+#    #+#             */
/*   Updated: 2026/05/06 15:23:53 by manmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*node;

	node = lst;
	while (node != NULL)
	{
		f(node->content);
		node = node->next;
	}
}
/*void	lst_to_upper(void *content)
{
	char *	list;

	list = content;
	list = list - 32;
}

int	main(void)
{
	t_list	*list01;
	t_list	*list02;
	
	list01 = ft_lstnew(ft_strdup("hola"));
	list02 = ft_lstnew(ft_strdup(" tos tus muertos"));

	list01->next = list02;
	list02->next = NULL;
	ft_lstiter(list01, lst_to_upper);
	while (list01 != NULL)
	{
		printf("%s", (char *)list01->content);
		list01 = list01->next;
	}
	return (0);
}*/