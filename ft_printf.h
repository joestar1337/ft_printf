/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouaa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 01:50:26 by sbouaa            #+#    #+#             */
/*   Updated: 2024/11/23 05:38:04 by sbouaa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char	*format, ...);
void	ft_putchar(char c, int *length);
void	ft_putstr(char	*s, int *length);
void	ft_putnbr(int n, int *length);
void	ft_putnbr_base(unsigned int n, char hex, int *length);
void	ft_putnbr_u(unsigned int n, int *length);
void	ft_put_address(unsigned long address, int *length);

#endif
