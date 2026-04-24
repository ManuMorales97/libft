/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:25:24 by manmoral          #+#    #+#             */
/*   Updated: 2026/04/23 17:10:52 by manmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if ((unsigned char)s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

/*int	main(void)
{
	char	*str;
	int		c;
	char	*stri;

	str = "Hola caraculo";
	c = 'c';
	stri = ft_strrchr(str, c);
	printf("%s\n", stri);
	return (0);
}*/
