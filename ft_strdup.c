/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 02:35:37 by tlasnier          #+#    #+#             */
/*   Updated: 2026/09/23 02:44:11 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*ptr;
	size_t	length;
	size_t	i;

	length = ft_strlen(src);
	i = 0;
	ptr = malloc(sizeof(char) * (length + 1));
	if (!ptr)
		return (NULL);
	while (i < length)
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}

/* #include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	(void)argc;
	printf("   strdup:%s\nft_strdup:%s\n", strdup(argv[1]), ft_strdup(argv[1]));
} */
