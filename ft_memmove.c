/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 21:57:35 by tlasnier          #+#    #+#             */
/*   Updated: 2026/09/20 23:27:37 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t length)
{
	unsigned char		*result;
	const unsigned char	*src2;
	size_t				i;

	result = dest;
	src2 = src;
	i = 0;
	if ((unsigned long)dest > (unsigned long)src
		&& (unsigned long)dest < (unsigned long)src + length)
	{
		while (i < length)
		{
			result[length - 1 - i] = src2[length - 1 - i];
			i++;
		}
	}
	else
	{
		while (i < length)
		{
			result[i] = src2[i];
			i++;
		}
	}
	return (result);
}

/* #include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	int i;
	char *toprint;
	char *toprint2;

	i = 0;
	toprint = malloc(sizeof(char) * ft_atoi(argv[2]));
	toprint2 = malloc(sizeof(char) * ft_atoi(argv[2]));
	(void)argc;
	ft_memcpy(toprint, argv[1], ft_atoi(argv[2]));
	ft_memcpy(toprint2, argv[1], ft_atoi(argv[2]));
	memmove(toprint + 1, toprint, ft_atoi(argv[2]) - 1);
	ft_memmove(toprint2 + 1, toprint2, ft_atoi(argv[2]) - 1);
	while (i < ft_atoi(argv[2]))
	{
		printf("value n°%d\n   memmove: %c\nft_memmove: %c\n", i, toprint[i], toprint2[i]);
		i++;
	}
} */
