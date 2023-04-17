/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsgint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtryason <vtryason@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:56:54 by vtryason          #+#    #+#             */
/*   Updated: 2023/04/17 14:56:18 by vtryason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsgint(unsigned int n, long int *len)
{
	if (n > 9)
	{
		ft_unsgint(n / 10, len);
		ft_unsgint(n % 10, len);
	}
	else
		ft_putchar(n + '0', len);
}
