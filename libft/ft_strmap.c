/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 19:00:00 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/30 20:21:54 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		ret[i] = f(s[i]);
		i++;
	}
	return (ret);
}
