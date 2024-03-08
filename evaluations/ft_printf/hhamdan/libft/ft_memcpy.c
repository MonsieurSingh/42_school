/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamdan  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:38:30 by hhamdan           #+#    #+#             */
/*   Updated: 2023/09/07 17:40:33 by hhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dst_cp;
	unsigned char		*src_cp;

	if (!src && !dst)
		return (NULL);
	dst_cp = (unsigned char *)dst;
	src_cp = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dst_cp[i] = src_cp[i];
		i++;
	}
	return (dst_cp);
}
