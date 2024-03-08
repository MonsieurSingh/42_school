/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamdan  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:16:20 by hhamdan           #+#    #+#             */
/*   Updated: 2023/11/13 11:45:22 by hhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sbstr;
	size_t	i;
	size_t	strsize;

	i = 0;
	if (s == NULL)
		return (NULL);
	strsize = ft_strlen(s);
	if (len > strsize - start)
		len = strsize - start;
	if (start > strsize)
		len = 0;
	sbstr = (char *) malloc(sizeof(char) * (len + 1));
	if (sbstr == NULL)
		return (NULL);
	while (i < len && s[start + i] != '\0' && start < strsize)
	{
		sbstr[i] = s[start + i];
		i++;
	}
	sbstr[i] = '\0';
	return (sbstr);
}
