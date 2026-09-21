/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 22:32:38 by tlasnier          #+#    #+#             */
/*   Updated: 2026/09/21 22:48:18 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t length)
{
	size_t	i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i] && i + 1 < length)
		i++;
	return (str1[i] - str2[i]);
}

/* #include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	(void)argc;
	printf("   strncmp: %d\nft_strncmp: %d\n",
	strncmp(argv[1], argv[2], ft_atoi(argv[3])),
	ft_strncmp(argv[1], argv[2], ft_atoi(argv[3])));
} */
