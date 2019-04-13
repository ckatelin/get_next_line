/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckatelin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 20:58:02 by ckatelin          #+#    #+#             */
/*   Updated: 2019/04/12 17:23:45 by ckatelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h> //delete

static	int	ft_find(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

static void	ft_changes(char **mas, char **line, const int fd)
{
	int i;
	char	*tmp;
	
	i = 0;
	while (mas[fd][i] != '\n' && mas[fd][i] != '\0')
		i++;
	if (mas[fd][i] == '\n')
	{
		*line = ft_strsub(mas[fd], 0, i);
		tmp = ft_strdup(mas[fd] + i + 1);
		free(mas[fd]);
		mas[fd] = tmp;
//		printf("mas/n = %s\n", mas[fd]); //delete
		//free(tmp);
	}
	else if (mas[i] == '\0')
	{
		tmp = ft_strdup(mas[fd]);
		*line = tmp;
//		printf("*line/0 = %s\n", *line);
		free(mas[fd]);
		free(tmp);
	}
}

int	get_next_line(const int fd, char **line)
{
	int res;
	char	buf[BUFF_SIZE + 1];
	char	*tmp;
	static char *mas[4096];
	int find;

	if (fd < 0)
		return (-1);
	//res = read(fd, buf, BUFF_SIZE);
//	printf("res = %d\n", res);
	while ((res = read(fd, buf, BUFF_SIZE))> 0)
	{
//		printf("res = %d\n", res);
		buf[res] = '\0';
//		printf("buf = %s\n", buf);
//		mas = ft_strjoin(mas, buf);
		if (!mas[fd])
			mas[fd] = ft_strnew(1);
		tmp = ft_strjoin(mas[fd], buf);
//		printf("tmp = %s\n", tmp);
		free(mas[fd]);
		mas[fd] = tmp;
//		printf("mas = %s\n", mas[fd]);
		//free(mas);
		//mas = tmp;
		//free(tmp);
		if ( (find = ft_find(buf, '\n')))
		{
			//printf("find = %d\n", find);
			break ;
		}
	}
//	printf("break\n");
	if (res == 0)
		return (0); 
	else if (res < 0)
		return (-1);
	ft_changes(mas, line, fd);
//	printf("result = %s\n", *line);
//	printf("result2 = %s\n", mas[fd]);
	return (1);
}
