/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 12:00:55 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/29 09:02:09 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst_b;
	unsigned char	*src_b;

	dst_b = (unsigned char *)dst;
	src_b = (unsigned char *)src;
	while (n--)
	{
		*dst_b = *src_b;
		if (*dst_b == (unsigned char)c)
			return (dst_b + 1);
		dst_b++;
		src_b++;
	}
	return (NULL);
}
