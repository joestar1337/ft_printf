/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouaa <sbouaa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 11:11:40 by sbouaa            #+#    #+#             */
/*   Updated: 2024/11/25 18:19:18 by sbouaa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void static	ft_check_conversions(const char	*format, va_list args, int *length)
{
	if (*format == 'd' || *format == 'i')
		ft_putnbr(va_arg(args, int), length);
	else if (*format == 'c')
		ft_putchar((char)va_arg(args, int), length);
	else if (*format == 'x' || *format == 'X')
		ft_putnbr_base(va_arg(args, int), *format, length);
	else if (*format == 's')
		ft_putstr(va_arg(args, char *), length);
	else if (*format == 'p')
	{
		ft_putstr("0x", length);
		ft_put_address(va_arg(args, unsigned long), length);
	}
	else if (*format == 'u')
		ft_putnbr_u(va_arg(args, unsigned int), length);
	else
		ft_putchar(*format, length);
}

int	ft_printf(const char	*format, ...)
{
	va_list	args;
	int		length;

	va_start(args, format);
	length = 0;
	if (write (1, "", 0) < 0)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			ft_check_conversions(format, args, &length);
		}
		else
			ft_putchar(*format, &length);
		format++;
	}
	va_end(args);
	return (length);
}
