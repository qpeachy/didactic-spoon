/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:06:35 by mpale             #+#    #+#             */
/*   Updated: 2021/08/19 13:46:41 by mpale            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	k;

	k = 0;
	if (str[k] == '\0')
		return (1);
	while (str[k] != '\0')
	{
		if (!(str[k] >= 'a' && str[k] <= 'z'))
			return (0);
		k++;
	}
	return (1);
}
