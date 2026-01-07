/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrahaj <ervin.brahaj@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 07:31:54 by ebrahaj           #+#    #+#             */
/*   Updated: 2025/11/04 08:46:58 by ebrahaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

/* Main function */
int		ft_printf(const char *format, ...);

/* Conversion functions */
int		ft_print_char(int c);
int		ft_print_percent(void);
int		ft_print_str(char *str);
int		ft_print_number(int n);
int		ft_print_unsigned(unsigned int n);
int		ft_print_hex(unsigned int num, int uppercase);
int		ft_print_pointer(void *ptr);

/* Utility functions */
int		ft_putchar(char c);
size_t	ft_strlen(const char *s);

#endif