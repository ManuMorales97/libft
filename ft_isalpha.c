/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:21:03 by manmoral          #+#    #+#             */
/*   Updated: 2026/04/23 17:10:04 by manmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <ctype.h>

int	ft_isalpha (char c);

int	main()
{
	char b = 'g';
	char d = 'Y';

	printf("%d\n", ft_isalpha(b));
	printf("%d\n", ft_isalpha(d));
}*/

int	ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
