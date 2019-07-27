/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 19:51:58 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/07/24 21:14:39 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		is_full_line(char *buffer)
{
	int i;

	i = 0;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

static void		extend_buffer(char **old_buffer)
{
	char	*new_str;
	int		extended_buff_size;

	extended_buff_size = BUFF_SIZE + ft_strlen(*old_buffer);
	new_str = ft_strnew(extended_buff_size);
	ft_strcpy(new_str, *old_buffer);
	free(*old_buffer);
	*old_buffer = new_str;
}

static int		return_to_line(char **buffer, char **line)
{
	int			i;
	char		*leftovers;
	char		*buff_data;

	i = 0;
	buff_data = *buffer;
	while (buff_data[i] && buff_data[i] != '\n')
		i++;
	if (!(*line = ft_strnew(i)))
		return (0);
	ft_strncpy(*line, *buffer, i);
	if (!buff_data[i] || buff_data[i + 1] == '\0')
	{
		free(*buffer);
		*buffer = NULL;
	}
	else
	{
		if (!(leftovers = ft_strdup(&buff_data[i + 1])))
			return (0);
		free(*buffer);
		*buffer = leftovers;
	}
	return (1);
}

int				finish(char **buffer)
{
	free(*buffer);
	*buffer = NULL;
	return (0);
}

int				get_next_line(const int fd, char **line)
{
	static char		*buffer[MAX_FD];
	int				len;
	int				bytes_read;

	if (!line || fd < 0 || fd > MAX_FD)
		return (-1);
	if (!buffer[fd])
		buffer[fd] = ft_strnew(BUFF_SIZE);
	else
		extend_buffer(&buffer[fd]);
	len = ft_strlen(buffer[fd]);
	while ((bytes_read = read(fd, &buffer[fd][len], BUFF_SIZE)) > 0)
	{
		if (is_full_line(buffer[fd]))
			break ;
		extend_buffer(&buffer[fd]);
		len = ft_strlen(buffer[fd]);
	}
	if (bytes_read == 0 && len == 0)
		return (finish(&buffer[fd]));
	else if (bytes_read == -1 || !return_to_line(&buffer[fd], line))
		return (-1);
	return (1);
}
