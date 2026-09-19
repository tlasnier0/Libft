/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 22:04:54 by tlasnier          #+#    #+#             */
/*   Updated: 2026/09/19 22:11:58 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/* #include "libft.h"
#include <ctype.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	(void) argc;
	printf("   isascii: %d\nft_isascii: %d\n"
	, isascii(ft_atoi(argv[1])), ft_isascii(ft_atoi(argv[1])));
} */
