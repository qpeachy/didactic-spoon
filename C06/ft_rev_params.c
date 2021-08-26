/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 17:47:32 by mpale             #+#    #+#             */
/*   Updated: 2021/08/26 13:23:47 by mpale            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_rev(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int i;
	int j;

	j = argc;
	i = 1;
	while (j > 1)
	{
		ft_putstr_rev(argv[i]);
		write(1, "\n", 1);
		i++;
		j--;
	}
}
