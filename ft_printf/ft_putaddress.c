/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtryason <vtryason@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:43:29 by vtryason          #+#    #+#             */
/*   Updated: 2023/04/17 15:40:10 by vtryason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putaddress(unsigned long n, long int *len, int x)
{
	if (!n)
	{
		ft_putstr("(nil)", len);
		return ;
	}
	else
	{
		if (n < 16)
		{
			ft_putstr("0x", len);
			ft_putchar(HEX_LOWER[n % 16], len);
			return ;
		}
		ft_putaddress(n / 16, len, ++x);
		ft_putchar(HEX_LOWER[n % 16], len);
	}
}
