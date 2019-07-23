/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 20:06:37 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/30 20:22:20 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	ndllen;
	char	*c_haystack;

	i = 0;
	j = 0;
	ndllen = ft_strlen(needle);
	c_haystack = (char *)haystack;
	if (!(*needle))
		return (c_haystack);
	while (c_haystack[i])
	{
		while (needle[j] == c_haystack[i + j] && (i + j) < len)
		{
			if (j == ndllen - 1)
				return (c_haystack + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
