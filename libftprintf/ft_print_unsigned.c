/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharteny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 12:23:53 by sharteny          #+#    #+#             */
/*   Updated: 2025/02/18 10:41:38 by sharteny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_print_unsigned(unsigned int n)
{
	int	i;
	int	res;

	i = 0;
	if (n == 0)
	{
		res = ft_print_char('0');
		if (res == -1)
			return (-1);
		return (1);
	}
	if (n >= 10)
	{
		i = ft_print_unsigned(n / 10);
		if (i == -1)
			return (-1);
	}
	res = ft_print_char(n % 10 + '0');
	if (res == -1)
		return (-1);
	return (i + 1);
}
