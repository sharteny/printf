/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharteny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 08:38:03 by sharteny          #+#    #+#             */
/*   Updated: 2025/02/07 12:32:48 by sharteny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_int_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++ ;
		n = n / 10;
	}
	return (len);
}

static char	*ft_char(int len)
{
	char	*s;

	s = (char *)malloc(len + 1);
	if (!s)
		return (NULL);
	s[0] = '0';
	return (s);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	int		len;
	long	ln;

	len = ft_int_len(n);
	i = len - 1;
	res = ft_char(len);
	ln = n;
	if (!res)
		return (NULL);
	if (ln < 0)
	{
		res[0] = '-';
		ln = -ln;
	}
	else if (ln == 0)
		res[0] = '0';
	while (ln != 0)
	{
		res[i--] = (ln % 10) + '0';
		ln = ln / 10;
	}
	res[len] = 0;
	return (res);
}
