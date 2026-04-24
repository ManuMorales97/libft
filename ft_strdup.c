/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:40:35 by manmoral          #+#    #+#             */
/*   Updated: 2026/04/24 14:26:34 by manmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;

	str = malloc(ft_strlen(s) + 1);
	while (str[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (s);
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
