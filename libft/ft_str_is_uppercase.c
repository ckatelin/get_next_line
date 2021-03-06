/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckatelin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 00:22:18 by ckatelin          #+#    #+#             */
/*   Updated: 2019/03/05 18:21:53 by ckatelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
		return (1);
	while (*(str + i) != '\0')
	{
		if (!(*(str + i) >= 'A' && *(str + i) <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
