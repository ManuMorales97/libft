/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 15:43:54 by manmoral          #+#    #+#             */
/*   Updated: 2026/05/01 10:10:43 by manmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*int_into_string(long nb, int len)
{
	char	*result;

	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	else if (nb == 0)
		result[0] = '0';
	while (nb > 0)
	{
		result[--len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*result;
	long	nb;

	len = 1;
	if (n < 0)
	{
		nb = -n;
		len++;
	}
	else
		nb = n;
	while (nb >= 10)
	{
		nb = nb / 10;
		len++;
	}
	result = int_into_string((long)n, len);
	return (result);
}
/*int main(void)
{
	char	*itoa;
	int	n = -0;

	itoa = ft_itoa(n);
	printf("%s\n", itoa);
}*/
