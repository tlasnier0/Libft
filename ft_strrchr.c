/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 22:22:38 by tlasnier          #+#    #+#             */
/*   Updated: 2026/09/21 22:26:31 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (i >= 0 && str[i] != c)
		i--;
	if (i < 0)
		return (NULL);
	return (&str[i]);
}

/* #include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	(void)argc;
	printf("   strrchr: %s\nft_strrchr: %s\n",
	strrchr(argv[1], argv[2][0]), strrchr(argv[1], argv[2][0]));
} */
