/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itox_high.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamdan  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:13:12 by hhamdan           #+#    #+#             */
/*   Updated: 2024/03/07 19:09:16 by hhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hexupper(unsigned int X)
{
	char		string[100];
	char		*base_case;
	int			i;
	int			count;

	base_case = "0123456789ABCDEF";
	i = 0;
	count = 0;
	if (X == 0)
	{
		write(1, "0", 1);
		count++;
	}
	while (X > 0)
	{
		string[i++] = base_case[X % 16];
		X = X / 16;
	}
	i = i - 1;
	while (i >= 0)
	{
		write(1, &string[i--], 1);
		count++;
	}
	return (count);
}
