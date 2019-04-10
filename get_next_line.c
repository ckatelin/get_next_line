#include "get_next_line.h"


/* ========WHAT DO I NEED======== */

/* ========libftfunctions======== */

/* ========libft.h && .a======== */

/* ===========Makefile========== */

/* ============MAIN============ */
extern mas;

void	ft_changes(int fd)
{
	int i;
	
	i = 0;	
	while (mas[fd][i] != '\n' || mas[fd][i] != '\0') //DO I NEED TO USE EOF???
	{
		if (mas[fd][i] == '\n')
		{
			*line = ft_strdup(mas[fd]);
			new = ft_memalloc(i);
			if (new)
				new = ft_strcpy(new, mas[fd]);
			free(mas[fd]);
			mas[fd] = new;
			free(new);
			break ;
		}
		else if (mas[i] == '\0')
		{
			new = ft_strnew(i);
			if (new)
				new = ft_strcpy(new, mas);
			break ;
		}
		i++;
	}
}

int	get_next_line(const int fd, char **line)
{
	int res;
	char	*buf;
	int i;

	if (fd < 0 || line == NULL)
		return (-1);
	i = -1;
	while (res = read(fd, buf, BUFF_SIZE) > 0) // do not forget define BUFF_SIZE
	{
		buf[res] = '\0';
		if (strchr(buf, '\n'))
			break ;
	}
	if (res == 0)
		return (0); //one more if with &&
	else if (res < 0)
		return (-1);
	ft_changes; //function which will do buf without '\n'
	return (1);
}
