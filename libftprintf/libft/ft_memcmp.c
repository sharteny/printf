/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharteny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 12:53:24 by sharteny          #+#    #+#             */
/*   Updated: 2025/02/01 17:52:02 by sharteny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*ss;

	i = 0;
	s = (unsigned char *)s1;
	ss = (unsigned char *)s2;
	while (i < n)
	{
		if ((unsigned char)s[i] != (unsigned char)ss[i])
			return ((unsigned char)s[i] - (unsigned char)ss[i]);
		i++;
	}
	return (0);
}
