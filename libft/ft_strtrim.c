/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 15:14:29 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/06/06 18:11:41 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*result;
	char	*start;
	char	*end;
	size_t	len;

	if (!s)
		return (NULL);
	start = (char *)s;
	len = 0;
	end = (char *)s + (ft_strlen(s) - 1);
	while (*start && ft_iswhtsp(*start))
		start++;
	while (end > start && ft_iswhtsp(*end))
		end--;
	while ((start + len) <= end)
		len++;
	result = ft_strnew(len);
	if (!result)
		return (NULL);
	result = ft_strncpy(result, start, len);
	return (result);
}
