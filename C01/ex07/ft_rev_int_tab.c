/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 09:15:39 by mpale             #+#    #+#             */
/*   Updated: 2021/08/14 15:55:04 by mpale            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *b;
	*b = *a;
	*a = swap;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	o;
	int	k;

	o = 0;
	k = size - 1;
	while (o < size / 2)
	{
		ft_swap(&tab[o], &tab[k]);
		o++;
		k--;
	}
}
