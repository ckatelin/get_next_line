#include "get_next_line.h"


/* ========WHAT DO I NEED======== */

/* ========libftfunctions======== */

/* ========libft.h && .a======== */

/* ===========Makefile========== */

/* ============MAIN============ */
extern mas;

void	ft_changes(char **line, const int fd, int res)
{

	while (*mas != EOF) //array is not end of file //I AM NOT SURE, BUT I NEED USE EOF SOMEWHERE
	{
		if (mas[i] == '\n')
		{

		}
		else if (mas[i] == '\0')
		{
		}
		i++;
	}

}

int	get_next_line(const int fd, char **line)
{
	int res;
	char	*buf;
	
	if (fd < 0 || line == NULL)
		return (-1);
	while (res = read(fd, buf, BUFF_SIZE) > 0) // do not forget define BUFF_SIZE
	{
		buf[res] = '\0';
		
	}
	if (res == 0)
		return (0); //one more if with &&
	else if (res < 0)
		return (-1);
	ft_changes; //function which will do buf without '\n'
	return (1);
}
