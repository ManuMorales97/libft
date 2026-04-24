/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 10:36:44 by manmoral          #+#    #+#             */
/*   Updated: 2026/04/24 14:26:41 by manmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	dstlen = 0;
	srclen = 0;
	while (dst[dstlen] && dstlen < size)
		dstlen++;
	while (src[srclen])
		srclen++;
	if (dstlen == size)
		return (size + srclen);
	while (src[i] != '\0' && dstlen + 1 < size - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

/*int	main(void)
{
	char	d[20] = "Hola ";
	char	*s = "caraculo";
	size_t	result;

	result = ft_strlcat(d, s, sizeof(d));
	printf("Resultado: %s\n", d);
	printf("longitud intentada; %zu\n", result);
	return (0);
}*/
