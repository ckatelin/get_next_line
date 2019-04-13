#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 2
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include "./libft/libft.h"
# include <stdlib.h>
# include <fcntl.h>

//static char *mas;
int get_next_line(const int fd, char **line);

#endif
