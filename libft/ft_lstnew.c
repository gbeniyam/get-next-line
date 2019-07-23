/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 17:59:50 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/06/06 10:42:39 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new_node;

	new_node = (t_list *)ft_memalloc(sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	if (!content)
	{
		new_node->content = NULL;
		new_node->content_size = 0;
	}
	else
	{
		new_node->content = ft_memalloc(content_size);
		if (new_node->content == NULL)
		{
			free(new_node);
			return (NULL);
		}
		ft_memcpy(new_node->content, content, content_size);
		new_node->content_size = content_size;
	}
	new_node->next = NULL;
	return (new_node);
}
