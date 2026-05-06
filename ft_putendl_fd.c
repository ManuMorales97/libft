/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 10:21:22 by manmoral          #+#    #+#             */
/*   Updated: 2026/05/01 10:24:52 by manmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *c, int fd)
{
	int	i;

	if (!c)
		return (NULL);
	i = 0;
	while (c[i])
	{
		write(fd, c[i], 1);
		i++;
	}
	write(fd, '\n', 1);
}
