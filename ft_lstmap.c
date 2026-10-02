/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasnier <tlasnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 00:24:16 by tlasnier          #+#    #+#             */
/*   Updated: 2026/10/03 01:16:01 by tlasnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	void	*temp_content;
	t_list	*temp_node;

	if (!lst || !f || !del)
		return (NULL);
	res = NULL;
	while (lst != NULL)
	{
		temp_content = f(lst->content);
		temp_node = ft_lstnew(temp_content);
		if (!temp_node)
		{
			del(temp_content);
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, temp_node);
		lst = lst->next;
	}
	return (res);
}

/* #include <stdlib.h>
#include <stdio.h>

void *f(void *str)
{
	char *copy;

	copy = ft_strdup((char *)str);
	if (copy)
		copy[0] = 'X';
	return (copy);
}


void del(void *todel)
{
	free(todel);
}

int main(int argc, char **argv)
{
	t_list *struct1;
	t_list *struct2;
	t_list *struct3;
	t_list *struct_final;

	(void)argc;
	struct1 = ft_lstnew(ft_strdup(argv[1]));
	struct2 = ft_lstnew(ft_strdup(argv[2]));
	struct3 = ft_lstnew(ft_strdup(argv[3]));
	ft_lstadd_back(&struct1, struct2);
	ft_lstadd_back(&struct1, struct3);
	struct_final = ft_lstmap(struct1, f, del);
	printf("ft_lstmap: %s/%s/%s",
	(char *)struct_final->content,
	(char *)struct_final->next->content,
	(char *)struct_final->next->next->content);
} */
