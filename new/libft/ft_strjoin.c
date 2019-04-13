/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckatelin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 20:47:16 by ckatelin          #+#    #+#             */
/*   Updated: 2019/04/05 21:03:24 by ckatelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*mas;

	i = 0;
	j = 0;
	mas = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (mas)
	{
		i = 0;
		while (s1[i])
		{
			mas[i] = s1[i];
			i++;
		}
		j = 0;
		while (s2[j])
			mas[i++] = s2[j++];
		mas[i] = '\0';
		return (mas);
	}
	else
		return (NULL);
}
