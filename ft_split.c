/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 17:59:30 by tlasnier          #+#    #+#             */
/*   Updated: 2026/10/03 02:29:18 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ptrlen(char const *s, char c)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			res++;
		i++;
	}
	return (res);
}

static int	ft_charlen(char const *s, char c, int i)
{
	int	res;

	res = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		res++;
	}
	return (res);
}

static char	**ft_free_all(char **res, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

static char	**splitloop(char const *s, char c, int i, char **res)
{
	int	j;
	int	k;

	j = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != 0)
		{
			res[j++][k] = 0;
			k = 0;
			res[j] = malloc(sizeof(char) * (ft_charlen(s, c, i + 1) + 1));
			if (!res[j])
				return (ft_free_all(res, j));
		}
		else if (s[i] != c)
			res[j][k++] = s[i];
		i++;
	}
	res[j][k] = 0;
	res[j + 1] = 0;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] && s[i] == c)
		i++;
	if (!s[i])
	{
		res = malloc(sizeof(char *) * 1);
		if (!res)
			return (NULL);
		res[0] = NULL;
		return (res);
	}
	res = malloc(sizeof(char *) * (ft_ptrlen(s, c) + 1));
	if (!res)
		return (NULL);
	res[0] = malloc(sizeof(char) * (ft_charlen(s, c, i) + 1));
	if (!res[0])
		return (ft_free_all(res, 0));
	res = splitloop(s, c, i, res);
	return (res);
}

/* #include <stdio.h>

int main(int argc, char **argv)
{
	char **res;
	int i;

	(void)argc;
	i = 0;
	res = ft_split(argv[1], argv[2][0]);
	printf("ft_split:\n");
	while(res[i])
		printf("%s\n", res[i++]);
} */
