/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:23:50 by manmoral          #+#    #+#             */
/*   Updated: 2026/04/23 17:10:01 by manmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <ctype.h>

int	ft_isalnum (char	str);

int	main()
{
	char b = 'A';
	char d = '0';
	char n = ' ';

	printf("%d\n", ft_isalnum(b));
 	printf("%d\n", ft_isalnum(d));
	printf("%d\n", ft_isalnum(n));

	return (0);	
}*/

int	ft_isalnum(char str)
{
	if ((str >= 'a' && str <= 'z')
		|| (str >= 'A' && str <= 'Z')
		|| (str >= '0' && str <= '9'))
		return (1);
	else
		return (0);
}
