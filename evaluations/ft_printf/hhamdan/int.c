/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamdan  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 00:37:07 by hhamdan           #+#    #+#             */
/*   Updated: 2024/03/07 19:09:12 by hhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n, int u_or_d)
{
	char			c;
	int				count;
	long			nbr;

	if (u_or_d == 117)
		return (ft_putunbr(n, u_or_d));
	nbr = n;
	count = 0;
	count++;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
		count++;
	}
	if (nbr >= 10)
		count += ft_putnbr(nbr / 10, u_or_d);
	c = '0' + nbr % 10;
	write(1, &c, 1);
	return (count);
}

int	ft_putunbr(unsigned int n, int u_or_d)
{
	char			c;
	int				count;
	unsigned int	unbr;

	unbr = n;
	count = 0;
	count++;
	if (unbr < 0)
	{
		write(1, "-", 1);
		unbr *= -1;
		count++;
	}
	if (unbr >= 10)
		count += ft_putnbr(unbr / 10, u_or_d);
	c = '0' + unbr % 10;
	write(1, &c, 1);
	return (count);
}
