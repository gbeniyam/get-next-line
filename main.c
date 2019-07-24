#include <string.h>
#include <stdio.h>
#include "get_next_line.h"
#include <fcntl.h>

/*
** 1 line via STDIN with 8 chars with Line Feed
*/

int				main(int argc, char **argv)
{
	char		*line;
	int			fd;
	int			ret;
	int			count_lines;
	int			errors;

	fd = open(argv[1], O_RDONLY);
	count_lines = 0;
	errors = 0;
	line = NULL;
	while ((ret = get_next_line(fd, &line)) > 0)
	{
		printf("%s\n", line);
		free(line);
	}
	return (0);
}
