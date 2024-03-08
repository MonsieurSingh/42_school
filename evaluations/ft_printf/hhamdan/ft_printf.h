/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamdan  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 01:01:01 by hhamdan           #+#    #+#             */
/*   Updated: 2024/03/07 21:05:25 by hhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include "libft/libft.h"

int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
int		ft_putstr(const char *str);
int		ft_p(const void *p);
int		ft_putnbr(int n, int u_or_d);
int		ft_putunbr(unsigned int n, int u_or_d);
int		hexlower(unsigned int x);
int		hexupper(unsigned int X);

#endif
