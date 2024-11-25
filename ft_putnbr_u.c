/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouaa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 04:35:37 by sbouaa            #+#    #+#             */
/*   Updated: 2024/11/23 04:42:34 by sbouaa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(unsigned int n, int *length)
{
	if (n < 10)
		ft_putchar((n + '0'), length);
	else
	{
		ft_putnbr_u((n / 10), length);
		ft_putnbr_u((n % 10), length);
	}
}
