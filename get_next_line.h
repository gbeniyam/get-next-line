/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 19:54:29 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/07/14 16:34:42 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define	BUFF_SIZE 32
# define 	MAX_FD 9999

# include "libft/libft.h"
int			get_next_line(const int fd, char **line);

#endif
