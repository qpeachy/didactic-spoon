/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 15:17:38 by mpale             #+#    #+#             */
/*   Updated: 2021/08/25 15:21:38 by mpale            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (nb > 1)
		result = (ft_recursive_power(nb, power - 1) * nb);
	return (result);
}
