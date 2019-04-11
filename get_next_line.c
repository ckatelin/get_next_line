/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckatelin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 20:58:02 by ckatelin          #+#    #+#             */
/*   Updated: 2019/04/11 21:58:18 by ckatelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


//static char *mas[SIZE];

static void	ft_changes(const int fd, char **mas, char **line)
{
	int i;
	char	*tmp;
	
	i = 0;
	while (mas[fd][i] != '\n' || mas[fd][i] != '\0')
	{
		if (mas[fd][i] == '\n')
		{
			*line = ft_strsub(mas[fd], 0, i);
			tmp = ft_strdup(mas[fd] + i + 1);
			free(mas[fd]);
			mas[fd] = tmp;
			free(tmp);
			break ;
		}
		else if (mas[fd][i] == '\0')
		{
//			free(*line);
			tmp = ft_strdup(mas[fd]);
//			if (tmp)
//				tmp = ft_strcpy(tmp, mas[fd]);
			*line = tmp;
			free(mas[fd]);
			free(tmp);
			break ;
		}
		i++;
	}
}

int	get_next_line(const int fd, char **line)
{
	int res;
	char	buf[BUFF_SIZE + 1];
	char	*tmp;
	static char *mas[SIZE];

	if (fd < 0)
		return (-1);
	while ((res = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[res] = '\0';
		tmp = ft_strjoin(mas[fd], buf);
		free(mas[fd]);
		mas[fd] = tmp;
		free(tmp);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (res == 0  && mas[fd][0] == '\0')
		return (0); 
	else if (res < 0)
		return (-1);
	ft_changes(fd, mas, line); 
	return (1);
}
