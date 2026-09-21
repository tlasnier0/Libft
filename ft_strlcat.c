/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 02:37:49 by tlasnier          #+#    #+#             */
/*   Updated: 2026/09/21 18:32:39 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t length)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (length == 0 || length <= dest_len)
		return (length + src_len);
	i = 0;
	while (src[i] && dest_len + i < length - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = 0;
	return (dest_len + src_len);
}

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	int i;
	char *toprint;
	char *toprint2;
	int intprint;
	int intprint2;

	i = 0;
	toprint = malloc(sizeof(char) * ft_atoi(argv[4]));
	toprint2 = malloc(sizeof(char) * ft_atoi(argv[4]));
	(void)argc;
	while(argv[1][i])
	{
		toprint[i] = argv[1][i];
		toprint2[i] = argv[1][i];
		i++;
	}
	toprint[i] = 0;
	toprint2[i] = 0;
	intprint = strlcat(toprint, argv[2], ft_atoi(argv[3]));
	intprint2 = ft_strlcat(toprint2, argv[2], ft_atoi(argv[3]));
	printf("   strlcat: %s / %d\nft_strlcat: %s / %d\n",
	toprint, intprint, toprint2, intprint2);
} */
