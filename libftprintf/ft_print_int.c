/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharteny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 10:08:28 by sharteny          #+#    #+#             */
/*   Updated: 2025/02/18 10:34:53 by sharteny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_print_int(int n)
{
	char	*s;
	int		len;

	len = 0;
	s = ft_itoa(n);
	if (!s)
		return (-1);
	len = ft_print_str(s);
	free(s);
	if (len == -1)
		return (-1);
	return (len);
}
