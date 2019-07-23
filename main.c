/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 22:22:52 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/07/11 23:09:15 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//TODO DO NOT SUBMIT. DELET DIS
#include "get_next_line.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char *str;
	printf("Main/*str good\n");

	while (get_next_line(0, &str))
	{
		printf("%s\n", str);
	}
	printf("Success!\n");
	return (0);
}
