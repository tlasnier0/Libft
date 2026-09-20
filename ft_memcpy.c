/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 19:16:03 by tlasnier          #+#    #+#             */
/*   Updated: 2026/09/20 19:34:26 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t length)
{
	unsigned char		*result;
	const unsigned char	*src2;
	size_t				i;

	result = dest;
	src2 = src;
	i = 0;
	while (i < length)
	{
		result[i] = src2[i];
		i++;
	}
	return (result);
}

/* #include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char *toprint;
	char *toprint2;
	int i;

	toprint = malloc(sizeof(char) * ft_atoi(argv[2]));
	toprint2 = malloc(sizeof(char) * ft_atoi(argv[2]));
	i = 0;
	(void)argc;
	memcpy(toprint, argv[1], ft_atoi(argv[2]));
	ft_memcpy(toprint2, argv[1], ft_atoi(argv[2]));
	while(i < ft_atoi(argv[2]))
	{
		printf("Value n°%d\n   memcpy: %c\nft_memcpy: %c\n",
		i, toprint[i], toprint2[i]);
		i++;
	}
} */
