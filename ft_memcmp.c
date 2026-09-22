/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 22:51:26 by tlasnier          #+#    #+#             */
/*   Updated: 2026/09/22 23:09:23 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t length)
{
	const unsigned char	*pt1;
	const unsigned char	*pt2;
	size_t				i;

	pt1 = ptr1;
	pt2 = ptr2;
	i = 0;
	while (i < length)
	{
		if (pt1[i] != pt2[i])
			return (pt1[i] - pt2[i]);
		i++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	(void)argc;
	printf("   memcmp:%d\nft_memcmp:%d\n",
	memcmp(argv[1], argv[2], ft_atoi(argv[3])),
	ft_memcmp(argv[1], argv[2], ft_atoi(argv[3])));
} */
