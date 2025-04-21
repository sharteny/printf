/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharteny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 10:01:15 by sharteny          #+#    #+#             */
/*   Updated: 2025/02/17 15:49:15 by sharteny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_print_str(char *str)
{
	int	res;

	if (!str)
	{
		res = write(1, "(null)", 6);
		if (res == -1)
			return (-1);
		return (6);
	}
	res = write(1, str, ft_strlen(str));
	if (res == -1)
		return (-1);
	return (ft_strlen(str));
}
