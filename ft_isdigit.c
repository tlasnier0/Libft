/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 19:50:04 by tlasnier          #+#    #+#             */
/*   Updated: 2026/09/19 19:54:36 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/* #include "libft.h"
#include <ctype.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	(void) argc;
	printf("   isdigit: %d\nft_isdigit: %d\n"
	, isdigit(ft_atoi(argv[1])), ft_isdigit(ft_atoi(argv[1])));
} */
