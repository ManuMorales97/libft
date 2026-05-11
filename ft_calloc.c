/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:57:35 by manmoral          #+#    #+#             */
/*   Updated: 2026/05/11 15:35:09 by manmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	if (nmemb != 0 && size != '\0' && nmemb > SIZE_MAX / size)
		return (NULL);
	total = nmemb * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, total);
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
