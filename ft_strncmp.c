/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:01:22 by manmoral          #+#    #+#             */
/*   Updated: 2026/04/24 14:27:04 by manmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s2[i] != s1[i])
		{
			return (s2[i] - s1[i]);
		}
		i++;
	}
	return (0);
}
/*int main()
{
	char	c[] = "Hola caraculo";
	char	d[] = "Holaaa cara";
	size_t	n = 6;

	printf("%d\n", ft_strncmp(c, d, n));
}*/