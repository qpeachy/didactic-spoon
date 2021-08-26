/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:14:15 by mpale             #+#    #+#             */
/*   Updated: 2021/08/19 13:45:19 by mpale            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_alpha(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		if (!ft_char_is_alpha(str[j]))
			return (0);
		j++;
	}
	return (1);
}
