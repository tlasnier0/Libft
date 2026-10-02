/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 02:23:53 by tlasnier          #+#    #+#             */
/*   Updated: 2026/10/02 02:39:09 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	length;

	length = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		length++;
	}
	return (length);
}

/* #include <stdio.h>

int main(int argc, char **argv)
{
	t_list *struct1;
	t_list *struct2;
	t_list *struct3;

	(void)argc;
	struct1 = ft_lstnew(ft_strdup(argv[1]));
	struct2 = ft_lstnew(ft_strdup(argv[2]));
	struct3 = ft_lstnew(ft_strdup(argv[3]));
	ft_lstadd_front(&struct1, struct2);
	printf("ft_lstsize: %d/%d", ft_lstsize(struct1), ft_lstsize(struct3));
} */
