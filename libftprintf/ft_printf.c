/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharteny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 13:10:21 by sharteny          #+#    #+#             */
/*   Updated: 2025/02/17 12:32:49 by sharteny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

static int	ft_form(va_list args, const char format)
{
	if (format == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (format == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (format == 'd' || format == 'i')
		return (ft_print_int(va_arg(args, int)));
	else if (format == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	else if (format == 'x' || format == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), format));
	else if (format == 'p')
		return (ft_print_pointer(va_arg(args, void *)));
	else if (format == '%')
		return (ft_print_char('%'));
	return (0);
}

static int	ft_norm(const char *format, va_list args, int *i)
{
	int	ret;

	if (format[*i] == '%' && format[*i + 1])
	{
		ret = ft_form(args, format[*i + 1]);
		if (ret == -1)
			return (-1);
		*i += 1;
		return (ret);
	}
	else
	{
		ret = ft_print_char(format[*i]);
		if (ret == -1)
			return (-1);
		return (ret);
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;
	int		ret;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		ret = ft_norm(format, args, &i);
		if (ret == -1)
		{
			va_end(args);
			return (-1);
		}
		count += ret;
		i++;
	}
	va_end(args);
	return (count);
}
