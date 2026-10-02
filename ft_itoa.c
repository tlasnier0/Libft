/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 01:46:56 by tlasnier          #+#    #+#             */
/*   Updated: 2026/10/03 01:20:12 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	charlen(long int n)
{
	int	length;

	length = 0;
	if (n < 0)
		length++;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	long	nb;

	nb = n;
	i = charlen(nb);
	res = malloc(sizeof(char) * (charlen(nb) + 1));
	if (!res)
		return (NULL);
	res[i--] = 0;
	if (nb == 0)
		res[0] = '0';
	if (nb < 0)
	{
		res[0] = '-';
		nb = -nb;
	}
	while (nb != 0)
	{
		res[i--] = (nb % 10) + 48;
		nb = nb / 10;
	}
	return (res);
}

/* #include <stdio.h>
#include "libft.h"

int main(int argc, char **argv)
{
	(void)argc;
	printf("ft_itoa: %s\n", ft_itoa(ft_atoi(argv[1])));
} */
