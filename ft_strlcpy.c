/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 00:22:03 by tlasnier          #+#    #+#             */
/*   Updated: 2026/09/23 21:25:44 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t length)
{
	size_t	i;

	i = 0;
	while (i < length - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (ft_strlen(src));
}

/* #include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char *toprint;
	char *toprint2;

	toprint = malloc(sizeof(char) * ft_atoi(argv[2]));
	toprint2 = malloc(sizeof(char) * ft_atoi(argv[2]));
	strlcpy(toprint, argv[1], ft_atoi(argv[3]));
	ft_strlcpy(toprint2, argv[1], ft_atoi(argv[3]));
	(void)argc;
	printf("   strlcpy: %s\nft_strlcpy: %s\n", toprint, toprint2);
} */
