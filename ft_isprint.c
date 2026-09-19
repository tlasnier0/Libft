/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 23:32:22 by tlasnier          #+#    #+#             */
/*   Updated: 2026/09/19 23:42:49 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/* #include "libft.h"
#include <ctype.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	(void) argc;
	printf("   isprint: %d\nft_isprint: %d\n"
	, isprint(ft_atoi(argv[1])), ft_isprint(ft_atoi(argv[1])));
} */
