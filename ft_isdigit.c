/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:44:21 by manmoral          #+#    #+#             */
/*   Updated: 2026/04/23 17:10:09 by manmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>
#include<ctype.h>

int	ft_isdigit (char c);

int	main()
{
	char	b = 't';
	char	d = '1';

	printf("%d\n", ft_isdigit(b));
	printf("%d\n", ft_isdigit(d));
	printf("%d\n", isdigit(b));
	printf("%d\n", isdigit(d));

	return 0;
}*/

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
