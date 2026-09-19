/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 00:24:33 by tlasnier          #+#    #+#             */
/*   Updated: 2026/09/20 01:23:53 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int v, size_t length)
{
	unsigned char	*p;
	unsigned char	content;
	size_t			i;

	p = (unsigned char *)ptr;
	content = (unsigned char)v;
	i = 0;
	while (i < length)
	{
		p[i] = (unsigned char)content;
		i++;
	}
	return (ptr);
}

/* #include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	char *str;
	char *str2;

	i = 0;
	str = malloc(sizeof(char) * ft_atoi(argv[2]));
	str2 = malloc(sizeof(char) * ft_atoi(argv[2]));
	(void)argc;
	while(i < ft_atoi(argv[2]))
	{
		printf("Value n°%d:\n   memset: %u\nft_memset: %u\n", i,
			 ((unsigned char *)memset(str, ft_atoi(argv[1]),
			 ft_atoi(argv[2])))[i],
			 ((unsigned char *)ft_memset(str2, ft_atoi(argv[1]),
			 ft_atoi(argv[2])))[i]);
		i++;
	}
} */
