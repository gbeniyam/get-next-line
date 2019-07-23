/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 13:42:08 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/06/05 16:19:19 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *next_node;

	while (*alst != NULL)
	{
		next_node = (*alst)->next;
		ft_lstdelone(alst, del);
		*alst = next_node;
	}
}
