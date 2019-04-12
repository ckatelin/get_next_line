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

/*static	int	ft_find(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}
*/
static void	ft_changes(char *mas, char **line)
{
	int i;
	char	*tmp;
	
	i = 0;
	while (mas[i] != '\n' && mas[i] != '\0')
		i++;
	if (mas[i] == '\n')
	{
		*line = ft_strsub(mas, 0, i);
		tmp = ft_strdup(mas + i + 1);
		free(mas);
		mas = tmp;
		free(tmp);
	}
	else if (mas[i] == '\0')
	{
		tmp = ft_strdup(mas);
		*line = tmp;
		free(mas);
		free(tmp);
	}
}

int	get_next_line(const int fd, char **line)
{
	int res;
	char	buf[BUFF_SIZE + 1];
	char	*tmp;
	static char *mas;

	if (fd < 0)
		return (-1);
	while ((res = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[res] = '\0';
		tmp = ft_strjoin(mas, buf);
		free(mas);
		mas = tmp;
		free(tmp);
//		if (ft_find(mas, '\n'))
//			break ;
	}
	if (res == 0)
		return (0); 
	else if (res < 0)
		return (-1);
	ft_changes(mas, line);
	return (1);
}
