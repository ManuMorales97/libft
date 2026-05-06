/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmoral <manmoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 11:29:06 by manmoral          #+#    #+#             */
/*   Updated: 2026/05/06 15:26:59 by manmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**wordcount(char const *s, char c);
static char	**freemalloc(char **str, int n);
static int	wordlen(const char *str, char c, int start);
char		**ft_split(char const *s, char c);

/*int	main(int argc, char **argv)
{
	int	i = 0;
	char	**result;
	if	(argc != 2)
	{
		result = ft_split(argv[1], argv[2][0]);
		while (result[i] != NULL)
		{
			printf("%s\n", result[i]);
			i++;
		}
	}
	return (0);
}*/
static char	**wordcount(char const *s, char c)
{
	int		i;
	int		j;
	char	**str;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			j++;
		i++;
	}
	str = malloc(sizeof(char *) * (j + 1));
	if (!str)
		return (NULL);
	return (str);
}

static char	**freemalloc(char **str, int n)
{
	if (!str[n])
	{
		while (--n)
		{
			free(str[n]);
		}
		free(str);
	}
	return (0);
}

static int	wordlen(const char *str, char c, int start)
{
	int	i;

	i = start;
	while (str[i] && str[i] != c)
		i++;
	return (i - start);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		n;
	int		i;
	int		start;
	int		len;

	if (!s)
		return (NULL);
	result = wordcount(s, c);
	n = -1;
	i = -1;
	while (s[++i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			start = i;
			len = wordlen(s, c, i);
			result[++n] = ft_substr(s, start, len);
			if (!result[n])
				freemalloc(result, n);
		}
	}
	result[++n] = 0;
	return (result);
}
