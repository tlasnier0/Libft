/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 17:59:30 by tlasnier          #+#    #+#             */
/*   Updated: 2026/09/24 18:45:23 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ptrlen(char const *s, char c)
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

int	charlen(char const *s, char c, int i)
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

char	**splitloop(char const *s, char c, int i, char **res)
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
			res[j] = malloc(sizeof(char) * (charlen(s, c, i + 1) + 1));
			if (!res[j])
				return (NULL);
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
	res = malloc(sizeof(char *) * (ptrlen(s, c) + 1));
	if (!res)
		return (NULL);
	res[0] = malloc(sizeof(char) * (charlen(s, c, i) + 1));
	if (!res[0])
		return (NULL);
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
