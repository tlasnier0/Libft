/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 02:50:36 by tlasnier          #+#    #+#             */
/*   Updated: 2026/10/03 01:13:28 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}

/* #include <stdio.h>

int main(int argc, char **argv)
{
	t_list *struct1;
	t_list *struct2;

	(void)argc;
	struct1 = ft_lstnew(ft_strdup(argv[1]));
	struct2 = ft_lstnew(ft_strdup(argv[2]));
	ft_lstadd_back(&struct1, struct2);
	printf("ft_lstadd_back: %s\n", (char *)struct1->next->content);
} */
