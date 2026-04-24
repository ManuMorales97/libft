/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:59:22 by manmoral          #+#    #+#             */
/*   Updated: 2026/04/24 14:27:09 by manmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!needle[0])
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j]
			&& needle[j]
			&& (i + j) < len)
		{
			j++;
		}
		if (needle[j] == '\0')
			return ((char *) &haystack[i]);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	*str;
	char	*dst;
	char	*result;

	str = "Hola mundo";
	dst = "mun";
	result = ft_strnstr(str, dst, 10);
	printf("%s\n", result);
	return (0);
}*/
