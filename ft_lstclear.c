/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 16:12:31 by manmoral          #+#    #+#             */
/*   Updated: 2026/05/06 15:22:20 by manmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;
	t_list	*temp;

	if (!lst || !*lst)
		return ;
	node = *lst;
	while (node->next != NULL)
	{
		temp = node->next;
		del(node->content);
		free(node);
		node = temp;
	}
	*lst = NULL;
}

/*void	freecontent(void *content)
{
	free (content);
}

int main(void)
{
	t_list	*list;
	t_list	*list02;

	list = ft_lstnew(ft_strdup("Hola caracola"));
	list02 = ft_lstnew(ft_strdup("puta caracola"));
	ft_lstadd_back(&list, list02);
	while (list)
	{
		printf("se unen? %s\n", (char *)list->content);
		list = list->next;
	}
	list->next = list02;
	list->next = NULL;
	ft_lstclear(&list, freecontent);
	printf ("deberia borrase todo :) %s", (char *)list->content);
	return (0);
}*/
