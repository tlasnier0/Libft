/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 03:32:35 by tlasnier          #+#    #+#             */
/*   Updated: 2026/10/03 01:05:21 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	return ;
}

/* #include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void ft_test(unsigned int i, char *c)
{
	c[0] = i + 97;
}

int main(int argc, char **argv)
{
	char *res;

	res = malloc(sizeof(char) * ft_strlen(argv[1]));
	res = argv[1];
	(void)argc;
	ft_striteri(res, ft_test);
	printf("ft_striteri: %s\n", res);
} */
