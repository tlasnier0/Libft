/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 15:39:28 by tlasnier          #+#    #+#             */
/*   Updated: 2026/09/20 19:33:44 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t length)
{
	unsigned char	*ptr2;
	size_t			i;

	ptr2 = ptr;
	i = 0;
	while (i < length)
	{
		ptr2[i] = 0;
		i++;
	}
	return ;
}

/* #include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i;
	char *array1;
	char *array2;

	i = 0;
	array1 = malloc(sizeof(char) * ft_atoi(argv[1]));
	array2 = malloc(sizeof(char) * ft_atoi(argv[1]));
	bzero(array1, ft_atoi(argv[1]));
	ft_bzero(array2, ft_atoi(argv[1]));
	(void)argc;
	while(i < ft_atoi(argv[1]))
	{
		printf("Value n°%d:\n   bzero: %d\nft_bzero: %d\n",
		i, array1[i], array2[i]);
		i++;
	}
} */
