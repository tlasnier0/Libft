/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 21:48:20 by tlasnier          #+#    #+#             */
/*   Updated: 2026/09/19 21:58:00 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/* #include <ctype.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	(void) argc;
	printf("   isalnum: %d\nft_isalnum: %d\n"
	, isalnum(ft_atoi(argv[1])), ft_isalnum(ft_atoi(argv[1])));
} */
