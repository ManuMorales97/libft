/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:57:35 by manmoral          #+#    #+#             */
/*   Updated: 2026/04/24 14:10:22 by manmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb != 0 && (size * nmemb) > SIZE_MAX)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}

/*int	main(void)
{
	size_t	count;
	size_t	i;
	int		*array;

	count = 100;
	i = 0;
	array = ft_calloc(count, sizeof(int));
	if (!array)
	{
		printf("Esto da erro: ");
		return (1);
	}
	while (i < count)
	{
		printf("%d", array[i]);
		i++;
	}
	printf("\n");
	free(array);
	return (0);
}*/
