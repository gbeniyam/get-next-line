/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 13:49:44 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/06/06 17:20:29 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*s_ptr;
	size_t			i;

	i = -1;
	if (!(s_ptr = ft_strnew(len)))
		return (NULL);
	if (!s)
		return (NULL);
	while (++i < len)
		s_ptr[i] = s[start + i];
	s_ptr[i] = '\0';
	return (s_ptr);
}
