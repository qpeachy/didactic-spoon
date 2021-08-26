/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 10:41:36 by mpale             #+#    #+#             */
/*   Updated: 2021/08/14 16:03:39 by mpale            ###   ########lyon.fr   */
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

void	ft_sort_int_tab(int *tab, int size)
{
	int	j;

	j = 1;
	while (j < size)
	{
		if (tab[j] < tab[j - 1])
		{
			ft_swap(&tab[j], (&tab[j - 1]));
			j = 0;
		}
		j++;
	}
}
