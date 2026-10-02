/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 00:43:50 by tlasnier          #+#    #+#             */
/*   Updated: 2026/10/02 03:50:28 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/* #include <stdio.h>

int main(int argc, char **argv)
{
	t_list *res_struct;
	t_list *base_struct;

	(void)argc;
	res_struct = ft_lstnew(ft_strdup(argv[1]));
	base_struct = ft_lstnew(ft_strdup(argv[2]));
	ft_lstadd_front(&base_struct, res_struct);
	printf("ft_lstadd_front: %s/%s\n",
	(char *)base_struct->content, (char *)base_struct->next->content);
} */
