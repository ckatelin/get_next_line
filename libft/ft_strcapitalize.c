/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckatelin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 23:07:25 by ckatelin          #+#    #+#             */
/*   Updated: 2019/03/05 23:00:07 by ckatelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct				s_names
{
	int				i;
	int				up;
};

struct s_names		s = {0, 0};

char				*ft_strcapitalize(char *str)
{
	while (*(str + s.i) != '\0')
	{
		if ((*(str + s.i) >= 'a' && *(str + s.i) <= 'z') ||
				(*(str + s.i) >= 'A' && *(str + s.i) <= 'Z')
				|| (*(str + s.i) <= '9' && *(str + s.i) >= '0'))
		{
			if (*(str + s.i) >= 'a' && *(str + s.i) <= 'z' && s.up == 0)
			{
				*(str + s.i) = *(str + s.i) - 32;
				s.up = 1;
			}
			else
			{
				if (*(str + s.i) >= 'A' && *(str + s.i) <= 'Z')
					*(str + s.i) = *(str + s.i) + 32;
				s.up = 1;
			}
		}
		else
			s.up = 0;
		s.i++;
	}
	return (str);
}
