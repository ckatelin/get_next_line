/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlowcase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckatelin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 22:46:35 by ckatelin          #+#    #+#             */
/*   Updated: 2019/03/05 18:13:44 by ckatelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) <= 'Z' && *(str + i) >= 'A')
			*(str + i) = *(str + i) + 32;
		i++;
	}
	return (str);
}
