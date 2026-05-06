/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 12:43:45 by manmoral          #+#    #+#             */
/*   Updated: 2026/05/06 15:32:35 by manmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	int				len;
	char			*result;

	len = ft_strlen((char *)s);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	return (result);
}

/*char to_lower(unsigned int n, char s)
{
	(void)n;
	if (s >= 'A' && s <= 'Z')
		s = s + 32;
	return (s);
}

int	main(void)
{
	char str[] = "TuS mUeRtOs ToS";
	char *result;

	result = ft_strmapi(str, to_lower);
	printf("%s\n", result);
}*/
