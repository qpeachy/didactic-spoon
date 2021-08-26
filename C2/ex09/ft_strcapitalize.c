/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 18:10:14 by mpale             #+#    #+#             */
/*   Updated: 2021/08/19 14:57:30 by mpale            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	o;

	o = 1;
	ft_strlowcase(str);
	if (str[0] >= 'a' && str [0] <= 'z')
		str[0] -= 32;
	while (str[o] != '\0')
	{
		if (str[o] >= 'a' && str [o] <= 'z')
			if (str[o - 1] == ' ' || (str[o - 1] >= '!' && str[o - 1] <= '/')
				|| (str[o - 1] >= ':' && str[o - 1] <= '@')
				|| (str[o - 1] >= '{' && str[o - 1] <= '~')
				|| (str[o - 1] >= '[' && str[o - 1] <= '`'))
				str[o] -= 32;
		o++;
	}
	return (str);
}
