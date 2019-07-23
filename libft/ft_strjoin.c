/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 15:26:30 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/06/06 18:13:32 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	size_t		j;
	char		*result;
	size_t		s1_len;
	size_t		s2_len;

	i = -1;
	j = -1;
	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (!(result = ft_strnew(s1_len + s2_len)))
		return (NULL);
	while (++i < s1_len)
		*(result + i) = *(s1 + i);
	while (++j < s2_len)
		*(result + i++) = *(s2 + j);
	return (result);
}
