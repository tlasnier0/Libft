/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 23:12:45 by tlasnier          #+#    #+#             */
/*   Updated: 2026/09/22 23:35:05 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t length)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!to_find[0])
		return ((char *)str);
	while (str[i] && i < length)
	{
		if (str[i] == to_find[j])
		{
			j++;
			if (j == ft_strlen(to_find))
				return ((char *)&str[i - j + 1]);
		}
		else
		{
			i = i - j;
			j = 0;
		}
		i++;
	}
	return (NULL);
}

/* #include <bsd/string.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	(void)argc;
	printf("   strnstr: %s\nft_strnstr: %s\n",
	strnstr(argv[1], argv[2], ft_atoi(argv[3])),
	ft_strnstr(argv[1], argv[2], ft_atoi(argv[3])));
} */
