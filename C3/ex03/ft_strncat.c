/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 15:02:53 by mpale             #+#    #+#             */
/*   Updated: 2021/08/19 18:15:23 by mpale            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	g;
	unsigned int	h;

	g = 0;
	h = 0;
	while (dest[g] != '\0')
		g++;
	while (src[h] != '\0' && h < nb)
	{
		dest[g + h] = src[h];
		h++;
	}
	dest[g + h] = '\0';
	return (dest);
}
