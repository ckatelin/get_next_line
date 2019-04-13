#include "get_next_line.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char *line;
	int fd;
	
	if (argc > 1)
	{
		fd = open(argv[1], O_RDONLY);
//		printf("fd = %d\n", fd);
		while (get_next_line(fd, &line) == 1)
		{
			ft_putendl(line);
			free(line);
		}
	}
	return (0);
}
