/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 17:16:57 by manmoral          #+#    #+#             */
/*   Updated: 2026/04/24 14:25:58 by manmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void	*s, int c, size_t n)
{
	const unsigned char	*sr;
	size_t				i;

	sr = (const unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (sr[i] == (unsigned char) c)
		{
			return ((void *) &sr[i]);
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	*str;
	int		c;

	str = "Hola caraculo";
	c = ' ';
	printf("%p\n", ft_memchr(str, c, 20));
	return (0);
}*/
