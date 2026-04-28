/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:16:13 by manmoral          #+#    #+#             */
/*   Updated: 2026/04/27 15:18:56 by manmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*stri;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen((char *)s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len + start > slen)
		len = slen - start;
	stri = malloc(len + 1);
	if (!stri)
		return (NULL);
	ft_strlcpy(stri, &s[start], len +1);
	return (stri);
}

/*int	main(void)
{
	char const		str[13] = "Hola caracola";
	char			*stri;

	stri = ft_substr(str, 0, 4);
	printf("%s\n", stri);
	free(stri);
	return (0);
}*/
