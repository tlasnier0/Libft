/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 03:05:28 by tlasnier          #+#    #+#             */
/*   Updated: 2026/10/02 03:50:50 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

/* #include <stdio.h>

void del(void *todel)
{
	free(todel);
}

int main(int argc, char **argv)
{
	t_list *struct1;

	(void)argc;
	struct1 = ft_lstnew(ft_strdup(argv[1]));
	ft_lstdelone(struct1, del);
	printf("ft_lstdelone: %s\n", (char *)struct1->content);
	//segfault normal -> on a suprpimer la structure (but de la fonction)
} */
