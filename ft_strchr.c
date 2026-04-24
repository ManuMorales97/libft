/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:52:32 by manmoral          #+#    #+#             */
/*   Updated: 2026/04/24 14:26:27 by manmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			return ((char *) &s[i]);
		}
		i++;
	}
	if ((char)c == '\0')
		return ((char *) &s[i]);
	return (0);
}

/*int	main(void)
{
	char	*str;
	int		c;

	str = "Hola";
	c = 'l';
	printf("%s\n", ft_strchr(str, c));
	return (0);
}*/
