/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 19:38:09 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/30 20:38:15 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	int		ndllen;
	char	*c_haystack;

	i = 0;
	j = 0;
	ndllen = ft_strlen(needle);
	c_haystack = (char *)haystack;
	if (!(*needle))
		return (c_haystack);
	while (c_haystack[i])
	{
		while (needle[j] == c_haystack[i + j])
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
