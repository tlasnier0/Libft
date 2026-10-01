/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 04:01:18 by tlasnier          #+#    #+#             */
/*   Updated: 2026/10/01 04:03:04 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
	return ;
}

/* #include <stdio.h>

int main(int argc, char **argv)
{
	(void)argc;

	ft_putendl_fd(argv[1], ft_atoi(argv[2]));
} */
