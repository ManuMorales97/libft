/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:57:39 by manmoral          #+#    #+#             */
/*   Updated: 2026/04/24 14:25:52 by manmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*int	main()
{
	char b = ' ';

	printf("%d\n", ft_isprint(b));

	return(0); 
}*/