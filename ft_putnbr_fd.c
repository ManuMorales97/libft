/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 10:26:12 by manmoral          #+#    #+#             */
/*   Updated: 2026/05/11 17:12:11 by manmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	str;
	long	nb;

	nb = (long) n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	str = (nb % 10) + '0';
	write(fd, &str, 1);
}
/*int	main(void)
{
	int	c = -3;
	int	fd = 1;

	ft_putnbr_fd(c, fd);
	return (0);
}*/