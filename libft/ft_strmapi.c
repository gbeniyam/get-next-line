/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 20:24:23 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/30 20:12:42 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*ret;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	if (!(ret = ft_strnew(ft_strlen(s))))
		return (0);
	while (s[i])
	{
		ret[i] = f(i, s[i]);
		i++;
	}
	return (ret);
}
