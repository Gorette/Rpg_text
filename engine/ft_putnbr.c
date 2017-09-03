/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axbal <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 15:57:30 by axbal             #+#    #+#             */
/*   Updated: 2017/07/19 17:17:32 by axbal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "engine.h"

void	ft_putnbr(int nb)
{
	int		test;
	int		div;

	div = 1;
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	test = nb;
	while ((test = test / 10) > 0)
		div = div * 10;
	while (div > 0)
	{
		ft_putchar(((nb / div) % 10) + 48);
		div = div / 10;
	}
}
