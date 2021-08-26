/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 13:32:40 by mpale             #+#    #+#             */
/*   Updated: 2021/08/24 18:58:57 by mpale            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_similar(char *check)
{
	int	i;
	int	j;

	j = 0;
	while (check[j] != '\0')
	{
		i = j + 1;
		while (check[i])
		{
			if (check[j] == check[i])
			{
				return (0);
			}
			i++;
		}
		j++;
	}
	return (1);
}

void	ft_conv_base(int nb, char *base)
{
	int	len;

	len = ft_strlen(base);
	if (nb != 0 && len > 1)
	{
		ft_conv_base(nb / len, base);
		if (nb < 0)
			ft_putchar(base[-(nb % len)]);
		if (nb > 0)
			ft_putchar(base[nb % len]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	value;

	value = 0;
	if (ft_similar(base) == 0)
		return ;
	if (base[value] == '\0' || base[value] == base[1] || base[value] == '+'
		|| base[value] == '-')
		return ;
	if (nbr < 0)
		ft_putchar('-');
	if (nbr == 0)
		ft_putchar(base[0]);
	ft_conv_base(nbr, base);
}

int main(void)
{
int max = 2147483647;
	int min = -2147483648;
	ft_putnbr_base(42, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(-42, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(42, "01");
	ft_putchar('\n');
	ft_putnbr_base(-42, "01");
	ft_putchar('\n');
	ft_putnbr_base(42, "0123456789abcdef");
	ft_putchar('\n');
	ft_putnbr_base(42, "01234567");
	ft_putchar('\n');
	ft_putnbr_base(max, "0123456789abcdef");
	ft_putchar('\n');
	ft_putnbr_base(min, "0123456789abcdef");
	ft_putchar('\n');
	ft_putnbr_base(0, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(max, "");
	ft_putchar('\n');
	ft_putnbr_base(max, "a");
	ft_putchar('\n');
	ft_putnbr_base(max, "abb");
	ft_putchar('\n');
	ft_putnbr_base(max, "-012345678cd ..	9");
	ft_putchar('\n');
}
