/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 02:20:01 by tlasnier          #+#    #+#             */
/*   Updated: 2026/09/23 02:34:24 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t length, size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = malloc(length * size);
	if (!ptr)
		return (NULL);
	while (i < length * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

/* #include <stdio.h>

int main(int argc, char **argv)
{
	char *ptr;
	char *ptr2;
	int i;

	i = 0;
	(void)argc;
	ptr = calloc(ft_atoi(argv[1]), ft_atoi(argv[2]));
	ptr2 = ft_calloc(ft_atoi(argv[1]), ft_atoi(argv[2]));
	while(i < ft_atoi(argv[1]) * ft_atoi(argv[2]))
	{
		printf("octet n°%d\n   calloc:%d\nft_calloc:%d\n", i, ptr[i], ptr2[i]);
		i++;
	}
} */
