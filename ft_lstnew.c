/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 00:43:50 by tlasnier          #+#    #+#             */
/*   Updated: 2026/10/02 01:38:06 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/* #include <stdio.h>

int main(int argc, char **argv)
{
	t_list *res;
	char *content;

	(void)argc;
	content = ft_strdup(argv[1]);
	res = ft_lstnew(content);
	printf("ft_lstnew: %s\n", (char *)res->content);
} */
