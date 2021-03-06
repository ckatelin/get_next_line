/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckatelin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 18:51:30 by ckatelin          #+#    #+#             */
/*   Updated: 2019/04/08 19:13:08 by ckatelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	if (*str == '\0')
		return (1);
	while (*(str + i) != '\0')
	{
		if (!(*(str + i) > 31 && *(str + i) < 127))
			return (0);
		i++;
	}
	return (1);
}
