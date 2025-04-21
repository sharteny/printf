/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharteny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 12:45:40 by sharteny          #+#    #+#             */
/*   Updated: 2025/02/04 10:49:56 by sharteny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*sorc;

	if (len == 0)
		return (dst);
	if (!dst && !src)
		return (NULL);
	dest = (unsigned char *)dst;
	sorc = (unsigned char *)src;
	i = 0;
	if (dest > sorc)
	{
		while (len-- > 0)
			dest[len] = sorc[len];
	}
	else
	{
		while (i < len)
		{
			dest[i] = sorc[i];
			i++;
		}
	}
	return (dst);
}
