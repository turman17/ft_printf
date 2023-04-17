/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viktortr <viktortr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 20:15:55 by viktortr          #+#    #+#             */
/*   Updated: 2023/04/16 22:46:51 by viktortr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int n, int index, int *len)
{
    hex_digits[]= "123456789abcdef";

    if(n >= 16)
    {
        ft_puthex(n / 16, index-1, len);
        ft_puthex(n % 16, index-1, len);
    }
    else 
        ft_putchar(ft_putchar[n], len);
    
}

int main()
{
    int counter = 0;
    unsigned int number = 255;

    ft_puthex(number, 0, &counter);
    ft_putchar('\n', &counter);

    printf("Total characters printed: %d\n", counter);
    return 0;
}