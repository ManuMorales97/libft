/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:03:28 by manmoral          #+#    #+#             */
/*   Updated: 2026/04/23 17:10:42 by manmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>

int ft_strlen(char *str);

int	main()
{
	char c[] = "Hola Caracola";

	printf("%d\n", ft_strlen(c));

	return (0);
}*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
