/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 13:55:13 by manmoral          #+#    #+#             */
/*   Updated: 2026/05/06 15:23:47 by manmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
/*void	freenode(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;

	node1 = malloc(sizeof(t_list));
	node1->content = strdup("Primero");
	node2 = malloc(sizeof(t_list));
	node2->content = strdup("tos tus muertos");
	node1->next = node2;
	node1->next = NULL;
	ft_lstdelone(node1, freenode);
	printf("node2 sigue existiendo: %s\n", (char *)node2->content);
	return (0);
}*/