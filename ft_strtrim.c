/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 17:02:02 by tlasnier          #+#    #+#             */
/*   Updated: 2026/09/24 17:47:26 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	is_char(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		trim_start;
	int		i;

	i = 0;
	while (s1[i] && is_char(s1[i], set))
		i++;
	trim_start = i;
	if (((size_t)trim_start >= ft_strlen(s1)) || !s1[0])
	{
		res = malloc(sizeof(char) * 1);
		if (!res)
			return (NULL);
		res[0] = 0;
		return (res);
	}
	i = ft_strlen(s1) - 1;
	while (s1[i] && is_char(s1[i], set))
		i--;
	i = ft_strlen(s1) - (ft_strlen(s1) - 1 - i) - trim_start + 1;
	res = malloc(sizeof(char) * i);
	if (!res)
		return (NULL);
	ft_strlcpy(res, &s1[trim_start], i);
	return (res);
}

/* #include <stdio.h>

int main(int argc, char **argv)
{
	(void)argc;
	printf("ft_strtrim: %s\n", ft_strtrim(argv[1], argv[2]));
} */
