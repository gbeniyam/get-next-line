/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 19:42:42 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/30 18:31:37 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_p;
	unsigned char	*src_p;
	size_t			i;
	size_t			j;

	i = 0;
	j = len;
	dst_p = (unsigned char *)dst;
	src_p = (unsigned char *)src;
	if (j > 0)
	{
		if (src_p < dst_p)
		{
			while (--j > 0)
				dst_p[j] = src_p[j];
			dst_p[0] = src_p[0];
		}
		else
			while (i < j)
			{
				dst_p[i] = src_p[i];
				i++;
			}
	}
	return (dst);
}
