/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 23:49:25 by tlasnier          #+#    #+#             */
/*   Updated: 2026/09/20 00:04:54 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/* #include <string.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	(void) argc;
	printf("   strlen: %zu\nft_strlen: %zu\n",
	 strlen(argv[1]), ft_strlen(argv[1]));
} */
