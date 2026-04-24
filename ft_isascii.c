/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:39:34 by manmoral          #+#    #+#             */
/*   Updated: 2026/04/24 14:17:20 by manmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(char c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*int	main()
{
	char d = 'f';

	printf("%d\n", ft_isascii(d));

	return (0);
}*/
