/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtryason <vtryason@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 19:42:34 by viktortr          #+#    #+#             */
/*   Updated: 2023/04/17 15:44:10 by vtryason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <unistd.h>

# define HEX_LOWER "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, long int *len);
void	ft_putstr(char *str, long int *len);
void	ft_puthex(unsigned int nbr, long int *chr_total, int loworup);
void	ft_putnbr(long n, long int *len);
void	ft_putaddress(unsigned long n, long int *len, int x);
void	ft_unsgint(unsigned int n, long int *len);

#endif
