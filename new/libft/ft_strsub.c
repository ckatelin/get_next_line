/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckatelin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 20:35:59 by ckatelin          #+#    #+#             */
/*   Updated: 2019/04/05 20:46:53 by ckatelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*mas;

	mas = ft_strnew(len);
	if (mas)
	{
		i = 0;
		while (i < len && s[start])
		{
			mas[i] = s[start];
			i++;
			start++;
		}
		mas[i] = '\0';
	}
	else
		return (NULL);
	return (mas);
}
