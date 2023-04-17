/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viktortr <viktortr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 20:00:15 by viktortr          #+#    #+#             */
/*   Updated: 2023/04/16 20:14:56 by viktortr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(long n, int *len)
{
	if (n < 0){
		ft_putchar('-', len);
        n = -n;
        }
	if (n >= 10)
	{
		ft_putchar(n / 10, len);
		ft_putchar(n % 10, len);
	}
	else
	{
		ft_putchar(n + '0', len);
	}
}
