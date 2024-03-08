/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamdan  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 21:22:56 by hhamdan           #+#    #+#             */
/*   Updated: 2023/11/13 11:44:06 by hhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *src)
{
	char	*ptr;
	size_t	len;
	char	*dest;

	ptr = (char *)src;
	len = ft_strlen(ptr) + 1;
	dest = malloc(len * sizeof(char));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, src, len);
	return (dest);
}
