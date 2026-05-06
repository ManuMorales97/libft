/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 11:13:55 by manmoral          #+#    #+#             */
/*   Updated: 2026/05/06 15:27:24 by manmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!f || !s)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*void to_upper(unsigned int n, char *s)
{
	(void)n;
	if (*s >= 'a' && *s <= 'z')
		*s = *s- 32;
}

int	main(void)
{
	char str[] = "Tus muertos tos";

	ft_striteri(str, to_upper);
	printf("%s\n", str);
}*/
