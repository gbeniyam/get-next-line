/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 19:22:33 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/04 21:43:25 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*uc_s1;
	unsigned char	*uc_s2;
	size_t			i;

	i = 0;
	uc_s1 = (unsigned char *)s1;
	uc_s2 = (unsigned char *)s2;
	while (i + 1 <= n)
	{
		if (uc_s1[i] == uc_s2[i])
		{
			i++;
		}
		else
		{
			return ((int)uc_s1[i] - uc_s2[i]);
		}
	}
	return (0);
}
