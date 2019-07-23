/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 09:46:28 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/06/06 10:53:53 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**words;

	if (!s)
		return (NULL);
	if (!(words = (char **)malloc(sizeof(*words) * (ft_wordcount(s, c) + 1))))
		return (NULL);
	i = -1;
	j = 0;
	while (++i < ft_wordcount(s, c))
	{
		k = 0;
		if (!(words[i] = ft_strnew(ft_strwlen(s, c) + 1)))
			words[i] = NULL;
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			words[i][k++] = s[j++];
		words[i][k] = '\0';
	}
	words[i] = NULL;
	return (words);
}
