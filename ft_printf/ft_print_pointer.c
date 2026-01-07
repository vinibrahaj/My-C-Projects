/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrahaj <ervin.brahaj@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:38:29 by ebrahaj           #+#    #+#             */
/*   Updated: 2025/11/04 08:54:14 by ebrahaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_hex(unsigned long long num)
{
	char	*hex_digits;
	int		count;

	count = 0;
	hex_digits = "0123456789abcdef";
	if (num >= 16)
	{
		count += print_hex(num / 16);
	}
	count += ft_putchar(hex_digits[num % 16]);
	return (count);
}

int	ft_print_pointer(void *ptr)
{
	int					count;
	unsigned long long	addr;

	addr = (unsigned long long)ptr;
	count = 0;
	if (ptr == NULL)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	else
	{
		write(1, "0x", 2);
		count = 2;
		count += print_hex(addr);
		return (count);
	}
}
