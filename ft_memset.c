/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:24:26 by manmoral          #+#    #+#             */
/*   Updated: 2026/04/23 17:10:27 by manmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *) s;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char )c;
		i++;
	}
	return (s);
}

/*int	main(void)
{
	char	str[20];
	char	stri[20];

	ft_memset(str, 0, 10);
	memset(stri, 0, 10);
	printf("%s\n", str);
	printf("%s\n", stri);
	return (0);
}*/
