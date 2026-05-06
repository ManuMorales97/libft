/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 13:39:37 by manmoral          #+#    #+#             */
/*   Updated: 2026/05/06 15:23:37 by manmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*int main(void)
{
	t_list	*list;
	t_list	*noden;

	list = ft_sltnew("caraculo");
	noden = ft_sltnew("Hola ");
	ft_lstadd_front(&list, noden);
	while (list)
	{
		printf("%s\n", (char *)list->content);
		list = list->next;
	}
	return(0);
}*/