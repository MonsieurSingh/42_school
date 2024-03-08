/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamdan  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 21:53:39 by hhamdan           #+#    #+#             */
/*   Updated: 2024/03/07 21:02:01 by hhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(char specifer, va_list ap)
{
	int	print_count;

	print_count = 0;
	if (specifer == 's')
		print_count += ft_putstr(va_arg(ap, char *));
	else if (specifer == '%')
		print_count += write(1, (char []){37}, 1);
	else if (specifer == 'x')
		print_count += hexlower(va_arg(ap, unsigned int));
	else if (specifer == 'X')
		print_count += hexupper(va_arg(ap, unsigned int));
	else if (specifer == 'd' || specifer == 'i' || specifer == 'u')
		print_count += ft_putnbr(va_arg(ap, int), specifer);
	else if (specifer == 'p')
		print_count += ft_p(va_arg(ap, const void *));
	else if (specifer == 'c')
		print_count += ft_putchar(va_arg(ap, int));
	return (print_count);
}

int	ft_printf(const char *string, ...)
{
	va_list	ap;
	int		i;
	int		count;

	va_start(ap, string);
	i = 0;
	count = 0;
	while (string[i] != '\0')
	{
		if (string[i] == '%')
		{
			i++;
			count += print_format(string[i], ap);
			i++;
		}
		else
		{
			ft_putchar(string[i]);
			i++;
			count++;
		}
	}
	va_end(ap);
	return (count);
}
