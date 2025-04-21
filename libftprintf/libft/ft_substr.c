/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharteny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 12:27:37 by sharteny          #+#    #+#             */
/*   Updated: 2025/02/04 10:58:34 by sharteny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	char	*s1;

	i = 0;
	slen = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= slen)
		return (ft_strdup(""));
	i = slen - start;
	if (i > len)
		i = len;
	s1 = (char *)malloc(i + 1);
	if (!s1)
		return (NULL);
	ft_strlcpy(s1, s + start, i + 1);
	return (s1);
}
