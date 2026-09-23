/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 21:11:54 by tlasnier          #+#    #+#             */
/*   Updated: 2026/09/23 21:33:42 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;

	if (start >= ft_strlen(s))
	{
		res = malloc(sizeof(char) * 1);
		if (!res)
			return (NULL);
		res[0] = 0;
		return (res);
	}
	if (ft_strlen(&s[start]) < len)
		len = ft_strlen(&s[start]);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	ft_strlcpy(res, &s[start], len + 1);
	return (res);
}

/* #include <stdio.h>

int main(int argc, char **argv)
{
	(void)argc;
	printf("ft_substr: %s\n",
	ft_substr(argv[1], ft_atoi(argv[2]), ft_atoi(argv[3])));
} */
