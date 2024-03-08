/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itox_low.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamdan  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:53:02 by hhamdan           #+#    #+#             */
/*   Updated: 2024/03/07 19:09:20 by hhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hexlower(unsigned int x)
{
	char		string[100];
	char		*base_case;
	int			i;
	int			count;

	base_case = "0123456789abcdef";
	i = 0;
	count = 0;
	if (x == 0)
	{
		write(1, "0", 1);
		count++;
	}
	while (x > 0)
	{
		string[i++] = base_case[x % 16];
		x = x / 16;
	}
	i = i - 1;
	while (i >= 0)
	{
		write(1, &string[i--], 1);
		count++;
	}
	return (count);
}
