/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouaa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 04:15:24 by sbouaa            #+#    #+#             */
/*   Updated: 2024/11/23 04:30:59 by sbouaa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned int n, char hex, int *length)
{
	int		b_len;
	char	*base;

	b_len = 16;
	if (hex == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n < 16)
		ft_putchar(base[n % b_len], length);
	else
	{
		ft_putnbr_base((n / 16), hex, length);
		ft_putnbr_base((n % 16), hex, length);
	}
}
