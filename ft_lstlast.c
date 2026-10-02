/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 02:40:39 by tlasnier          #+#    #+#             */
/*   Updated: 2026/10/03 01:11:26 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/* #include <stdio.h>

int main(int argc, char **argv)
{
	t_list *struct1;
	t_list *struct2;
	(void)argc;
	struct1 = ft_lstnew(ft_strdup(argv[1]));
	struct2 = ft_lstnew(ft_strdup(argv[2]));
	ft_lstadd_front(&struct1, struct2);
	printf("ft_lstlast: %s\n", (char *)(ft_lstlast(struct1)->content));
} */
