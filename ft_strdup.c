/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:40:35 by manmoral          #+#    #+#             */
/*   Updated: 2026/05/11 15:49:23 by manmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;
	size_t	len;

	len = ft_strlen((char *)s);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}

/*int	main(void)
{
	const char	*s;
	char		cpy;

	cpy = ft_strdup(s);
	printf("original: %s\n", s);
	printf("copia: %s\n", cpy);
	free(s);
	return (0);
}*/
