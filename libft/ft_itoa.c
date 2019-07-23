/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:07:49 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/30 20:23:49 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*num;
	int		sign;
	int		len;

	len = ft_intlen(n);
	sign = (n < 0) ? 1 : 0;
	if (!(num = ft_strnew((size_t)(sign + len))))
		return (NULL);
	if (sign)
		num[0] = '-';
	else if (n > 0)
		len--;
	else
		num[0] = '0';
	while (n)
	{
		if (n > 0)
			num[len] = (n % 10) + '0';
		else
			num[len] = -(n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (num);
}
