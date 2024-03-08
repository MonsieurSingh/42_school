/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamdan  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:57:36 by hhamdan           #+#    #+#             */
/*   Updated: 2024/03/07 19:09:31 by hhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_p(const void *p)
{
	char			string[100];
	int				i;
	char			*base_character;
	int				count;
	unsigned long	n;

	n = (unsigned long)p;
	base_character = "0123456789abcdef";
	i = 0;
	count = 2;
	write (1, "0x", 2);
	if (p == 0)
		write(1, &base_character[count++ - 2], 1);
	while (n > 0)
	{
		string[i++] = base_character[n % 16];
		n = n / 16;
	}
	i = i - 1;
	while (i >= 0)
	{
		write(1, &string[i--], 1);
		count++;
	}
	return (count);
}
