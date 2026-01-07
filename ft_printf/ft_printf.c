/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrahaj <ervin.brahaj@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 07:32:37 by ebrahaj           #+#    #+#             */
/*   Updated: 2025/11/04 08:50:18 by ebrahaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//#include <stdio.h>

static int	ft_printf_helper(char fmt, va_list *args)
{
	if (fmt == 'c')
		return (ft_print_char(va_arg(*args, int)));
	else if (fmt == 's')
		return (ft_print_str(va_arg(*args, char *)));
	else if (fmt == 'u')
		return (ft_print_unsigned(va_arg(*args, unsigned int)));
	else if (fmt == 'x')
		return (ft_print_hex(va_arg(*args, unsigned int), 0));
	else if (fmt == 'X')
		return (ft_print_hex(va_arg(*args, unsigned int), 1));
	else if (fmt == 'p')
		return (ft_print_pointer(va_arg(*args, void *)));
	else if (fmt == '%')
		return (ft_print_percent());
	else if (fmt == 'd' || fmt == 'i')
		return (ft_print_number(va_arg(*args, int)));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			count += ft_printf_helper(format[i], &args);
		}
		else
		{
			count += write(1, &format[i], 1);
		}
		i++;
	}
	va_end(args);
	return (count);
}
