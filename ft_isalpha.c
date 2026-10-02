/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 18:25:21 by tlasnier          #+#    #+#             */
/*   Updated: 2026/10/03 01:24:38 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/* #include "libft.h"
#include <ctype.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	(void) argc;
	printf("   isalpha: %d\nft_isalpha: %d\n"
	, isalpha(ft_atoi(argv[1])), ft_isalpha(ft_atoi(argv[1])));
} */
