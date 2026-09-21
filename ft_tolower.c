/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 18:49:07 by tlasnier          #+#    #+#             */
/*   Updated: 2026/09/21 18:51:35 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

/* #include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv)
{
	(void)argc;
	printf("   tolower: %c\nft_tolower: %c\n",
	(char)tolower(ft_atoi(argv[1])), (char)ft_tolower(ft_atoi(argv[1])));
} */
