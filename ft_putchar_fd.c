/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 03:50:48 by tlasnier          #+#    #+#             */
/*   Updated: 2026/10/01 03:53:53 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return ;
}

/* #include <stdio.h>
#include "libft.h"

int main(int argc, char **argv)
{
	(void)argc;
	ft_putchar_fd(argv[1][0], ft_atoi(argv[2]));
} */
