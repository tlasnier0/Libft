/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 22:13:44 by tlasnier          #+#    #+#             */
/*   Updated: 2026/10/03 01:52:29 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != (char)c)
		i++;
	if (str[i] == (char)c)
		return (&str[i]);
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	(void)argc;
	printf("   strchr: %s\nft_strchr: %s\n",
	strchr(argv[1], argv[2][0]), strchr(argv[1], argv[2][0]));
} */
