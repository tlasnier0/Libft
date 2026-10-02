/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 03:26:45 by tlasnier          #+#    #+#             */
/*   Updated: 2026/10/03 01:14:59 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}

/* #include <stdio.h>

void del(void *todel)
{
	free(todel);
}

int main(int argc, char **argv)
{
	t_list *struct1;
	t_list *struct2;

	(void)argc;
	struct1 = ft_lstnew(ft_strdup(argv[1]));
	struct2 = ft_lstnew(ft_strdup(argv[2]));
	ft_lstadd_back(&struct1, struct2);
	ft_lstclear(&struct1, del);
	printf("ft_lstclear: %s\n", (char *)struct1->content);
	//segfault normal -> on a suprpimer la structure (but de la fonction)
} */
