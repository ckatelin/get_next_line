#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include "libft.h"
#include <stdlib.h>
#include <fcntl.h>

static char mas[size]; //initialize size!!!
int get_next_line(const int fd, char **line);

#endif
