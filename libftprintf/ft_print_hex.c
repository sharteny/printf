/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharteny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 12:35:29 by sharteny          #+#    #+#             */
/*   Updated: 2025/02/18 10:43:48 by sharteny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_print_hex(unsigned long long num, char format)
{
	char	*s;
	int		len;

	len = 0;
	if (format == 'x')
		s = "0123456789abcdef";
	else if (format == 'X')
		s = "0123456789ABCDEF";
	if (num >= 16)
	{
		len += ft_print_hex(num / 16, format);
		if (len == -1)
			return (-1);
	}
	len += ft_print_char(s[num % 16]);
	if (len == -1)
		return (-1);
	return (len);
}
