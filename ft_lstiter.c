/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 03:38:35 by tlasnier          #+#    #+#             */
/*   Updated: 2026/10/03 01:15:15 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* #include <stdio.h>

void f(void *str)
{
	char *s = (char *)str;
	s[0] = 'X';
}

int main(int argc, char **argv)
{
	t_list *struct1;
	t_list *struct2;

	(void)argc;
	struct1 = ft_lstnew(ft_strdup(argv[1]));
	struct2 = ft_lstnew(ft_strdup(argv[2]));
	ft_lstadd_back(&struct1, struct2);
	ft_lstiter(struct1, f);
	printf("ft_lstiter: %s/%s\n",
	(char *)struct1->content, (char *)struct1->next->content);
} */
