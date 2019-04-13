/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckatelin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 20:25:42 by ckatelin          #+#    #+#             */
/*   Updated: 2019/04/05 20:30:50 by ckatelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mas;
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	mas = ft_strnew(i);
	if (mas)
	{
		i = 0;
		while (s[i])
		{
			mas[i] = (*f)(i, s[i]);
			i++;
		}
		mas[i] = '\0';
	}
	return (mas);
}
