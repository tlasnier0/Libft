/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 18:35:30 by tlasnier          #+#    #+#             */
/*   Updated: 2026/09/21 18:48:08 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

/* #include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv)
{
	(void)argc;
	printf("   toupper: %c\nft_toupper: %c\n",
	(char)toupper(ft_atoi(argv[1])), (char)ft_toupper(ft_atoi(argv[1])));
} */
