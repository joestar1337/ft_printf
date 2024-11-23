/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouaa <sbouaa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 02:39:34 by sbouaa            #+#    #+#             */
/*   Updated: 2024/11/23 08:58:53 by sbouaa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char	*s, int *length)
{
	if (s == NULL)
	{
		ft_putstr("(null)", length);
		return ;
	}
	while (*s)
	{
		ft_putchar(*s, length);
		s++;
	}
}
