/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 11:17:01 by manmoral          #+#    #+#             */
/*   Updated: 2026/05/06 15:23:26 by manmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (lst == NULL)
		*lst = new;
	last = ft_lstlast(*lst);
	last->next = new;
	new->next = NULL;
}

/*int main(void)
{
	t_list	*list;
	t_list	*noden;

	list = ft_lstnew("caraculo ");
	noden = ft_lstnew("hola");
	ft_lstadd_back(&list, noden);
	while (list)
	{
		printf("%s", (char *)list->content);
		list = list->next;
	}
	printf("\n");
	return(0);
}*/
