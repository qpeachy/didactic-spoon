/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 20:09:41 by mpale             #+#    #+#             */
/*   Updated: 2021/08/12 13:36:35 by mpale            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_affichage(int a, int b)
{
	if (a < b)
	{
		ft_putchar(48 + a / 10);
		ft_putchar(48 + a % 10);
		ft_putchar(' ');
		ft_putchar(48 + b / 10);
		ft_putchar(48 + b % 10);
		if (a != 98)
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= 98)
	{
		while (b <= 99)
		{
			ft_affichage(a, b);
			b++;
		}	
		a++;
		b = 0;
	}
}
