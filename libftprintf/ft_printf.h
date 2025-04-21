/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharteny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 12:52:59 by sharteny          #+#    #+#             */
/*   Updated: 2025/02/16 17:29:56 by sharteny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_print_unsigned(unsigned int n);
int	ft_print_hex(unsigned long long num, char format);
int	ft_print_pointer(void *ptr);
int	ft_print_str(char *str);
int	ft_print_int(int n);
int	ft_print_char(char c);

#endif
