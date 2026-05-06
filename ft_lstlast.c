/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 18:19:29 by manmoral          #+#    #+#             */
/*   Updated: 2026/05/06 15:24:00 by manmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*int main(void)
{
	t_list	*list;
	t_list	*list02;
	t_list	*last;

	list = ft_lstnew("Caraculo");
	list02 = ft_lstnew("Hola ");
	ft_lstadd_front(&list, list02);
	last = ft_lstlast(list);
	printf("%s\n", (char *)last->content);
	return (0);
}*/