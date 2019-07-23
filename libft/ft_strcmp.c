/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 20:25:49 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/30 18:08:44 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char *c_s1;
	unsigned char *c_s2;

	c_s1 = (unsigned char *)s1;
	c_s2 = (unsigned char *)s2;
	while (*c_s1 || *c_s2)
	{
		if (*c_s1 != *c_s2)
			return (*c_s1 - *c_s2);
		c_s1++;
		c_s2++;
	}
	return (0);
}
