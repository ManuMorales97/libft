/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:16:43 by manmoral          #+#    #+#             */
/*   Updated: 2026/04/24 14:26:51 by manmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	dst = malloc(sizeof(char) * size);
	if (!dst)
		return (0);
	i = 0;
	while (src[i] && i < size -1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}
/*int	main(void)
{
	void *d = NULL;
	char *s = "Hola caraculo";
	size_t n = 10;

	printf("%zu\n", ft_strlcpy(d, s, n));
}*/