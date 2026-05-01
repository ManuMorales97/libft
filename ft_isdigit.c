/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:44:21 by manmoral          #+#    #+#             */
/*   Updated: 2026/04/30 15:47:52 by manmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*int	main()
{
	char	b = 't';
	char	d = '1';

	printf("%d\n", ft_isdigit(b));
	printf("%d\n", ft_isdigit(d));
	printf("%d\n", isdigit(b));
	printf("%d\n", isdigit(d));

	return 0;
}*/