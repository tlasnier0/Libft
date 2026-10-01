/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 04:03:25 by tlasnier          #+#    #+#             */
/*   Updated: 2026/10/01 04:11:23 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	c = 0;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		write(fd, "-", 1);
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	c = n % 10 + 48;
	write(fd, &c, 1);
}

/* #include "libft.h"

int main(int argc, char **argv)
{
	(void)argc;
	ft_putnbr_fd(ft_atoi(argv[1]), ft_atoi(argv[2]));
} */
