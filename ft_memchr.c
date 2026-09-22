/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 21:50:28 by tlasnier          #+#    #+#             */
/*   Updated: 2026/09/22 22:12:50 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int tofind, size_t length)
{
	const unsigned char	*ptr2;
	int					tofind2;
	size_t				i;

	ptr2 = (const unsigned char *)ptr;
	i = 0;
	tofind2 = (unsigned char)tofind;
	while (i < length)
	{
		if (ptr2[i] == tofind2)
			return ((void *)&ptr2[i]);
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	(void)argc;
	printf("   memchr: %s\nft_memchr: %s\n",
	(char *)memchr(argv[1], ft_atoi(argv[2]), ft_atoi(argv[3])),
	(char *)ft_memchr(argv[1], ft_atoi(argv[2]), ft_atoi(argv[3])));
} */
