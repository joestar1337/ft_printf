/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_address.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouaa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 04:45:49 by sbouaa            #+#    #+#             */
/*   Updated: 2024/11/24 11:44:47 by sbouaa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_address(unsigned long address, int *length)
{
	char	*base;
	int		b_len;

	b_len = 16;
	base = "0123456789abcdef";
	if (address < 16)
		ft_putchar(base[address % 16], length);
	else
	{
		ft_put_address((address / 16), length);
		ft_put_address((address % 16), length);
	}
}
