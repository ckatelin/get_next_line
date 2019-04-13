/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckatelin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 21:42:06 by ckatelin          #+#    #+#             */
/*   Updated: 2019/04/06 15:24:35 by ckatelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_countstr(char *s, char c)
{
	int		i;
	int		countstr;

	i = 0;
	countstr = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (s[i] != '\0' && s[i] != c)
			i++;
		if (s[i - 1] != c)
			countstr++;
		if (s[i] != '\0')
			i++;
	}
	return (countstr);
}

static size_t		len(const char *s, size_t i, char c)
{
	size_t	count;

	count = 0;
	while (s[i] != c && s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**mas;
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	all;

	i = 0;
	k = 0;
	mas = (char **)malloc(sizeof(char *) * (ft_countstr((char *)s, c) + 1));
	if (!mas)
		return (NULL);
	while (k < (all = ft_countstr((char *)s, c)))
	{
		j = 0;
		while (s[i] == c)
			i++;
		mas[k] = ft_strnew(len(s, i, c));
		if (!mas[k])
			return (NULL);
		while (s[i] != c && s[i] != '\0')
			mas[k][j++] = s[i++];
		mas[k++][j] = '\0';
	}
	mas[k] = 0;
	return (mas);
}
