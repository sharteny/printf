/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharteny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 12:47:27 by sharteny          #+#    #+#             */
/*   Updated: 2025/02/17 16:16:32 by sharteny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_print_pointer(void *ptr)
{
	unsigned long	addr;
	int				len;

	len = 0;
	addr = (unsigned long)ptr;
	len += ft_print_str("0x");
	if (len == -1)
		return (-1);
	len += ft_print_hex(addr, 'x');
	if (len == -1)
		return (-1);
	return (len);
}
