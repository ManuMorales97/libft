/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 13:31:24 by manmoral          #+#    #+#             */
/*   Updated: 2026/05/11 17:31:25 by manmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*newlist;
	t_list	*newnode;

	if (!lst || !f || !del)
		return (NULL);
	node = lst;
	newlist = NULL;
	while (node)
	{
		newnode = ft_lstnew(f(node->content));
		if (!newnode)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, newnode);
		node = node->next;
	}
	return (newlist);
}
/*
void	*strrev(void *s)
{
	char	*str = s;
	char	*res = ft_calloc(ft_strlen(str), sizeof(char));
	int		i = ft_strlen(str);
	int		j = 0;

	while (--i >= 0)
		res[j++] = str[i];
	return (res);
}
void	del(void *s)
{
	free (s);
}
int	main(void)
{
	t_list	*list01;
	t_list	*list02;
	
	list01 = ft_lstnew(ft_strdup("hola"));
	list02 = ft_lstnew(ft_strdup(" tos tus muertos"));

	list01->next = list02;
	list02->next = NULL;
	t_list	*newlist = ft_lstmap(list01, strrev, del);
	while (list01 != NULL)
	{
		printf("%s\n", (char *)list01->content);
		list01 = list01->next;
	}
	while (newlist)
	{
		printf("%s\n", (char *)newlist->content);
		newlist = newlist->next;
	}
	return (0);
}
*/