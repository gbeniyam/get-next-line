/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 08:54:14 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/06/06 10:51:51 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *head;
	t_list *list;

	if (!lst)
		return (NULL);
	head = f(lst);
	list = head;
	while (lst->next)
	{
		lst = lst->next;
		list->next = f(lst);
		list = list->next;
	}
	return (head);
}
