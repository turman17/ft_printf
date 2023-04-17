/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtryason <vtryason@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:48:03 by vtryason          #+#    #+#             */
/*   Updated: 2023/04/17 15:46:15 by vtryason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, long int *len)
{
	int	i;

	i = -1;
	if (!str)
	{
		ft_putstr("(null)", len);
		return ;
	}
	while (str[++i])
	{
		ft_putchar(str[i], len);
	}
}
