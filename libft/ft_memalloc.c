/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 17:27:08 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/30 20:18:59 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*areaptr;
	size_t	i;

	i = 0;
	if (!(areaptr = (char *)malloc(size * sizeof(char))))
		return (NULL);
	while (i < size)
		areaptr[i++] = 0;
	return (areaptr);
}
