/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:39:04 by manmoral          #+#    #+#             */
/*   Updated: 2026/04/23 17:10:19 by manmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s01;
	const unsigned char	*s02;

	s01 = (const unsigned char *) s1;
	s02 = (const unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (s01[i] != s02[i])
			return (s01[i] - s02[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	*str1;
	char	*str2;
	int		n;

	str1 = "Hola mundo";
	str2 = "Hola m ndo";
	n = 10;
	printf("%d\n", ft_memcmp(str1, str2, n));
	return (0);
}*/
