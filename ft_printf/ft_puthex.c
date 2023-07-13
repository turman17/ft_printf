/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtryason <vtryason@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 20:15:55 by viktortr          #+#    #+#             */
/*   Updated: 2023/04/17 15:36:44 by vtryason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int nbr, long int *chr_total, int loworup)
{
	if (nbr >= 16)
		ft_puthex(nbr / 16, chr_total, loworup);
	if (loworup)
		ft_putchar(HEX_UPPER[nbr % 16], chr_total);
	else
		ft_putchar(HEX_LOWER[nbr % 16], chr_total);
}
