/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viktortr <viktortr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 09:09:09 by viktortr          #+#    #+#             */
/*   Updated: 2023/04/16 20:09:02 by viktortr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

// int	max(int num_args, ...)
// {
// 	va_list args;

// 	va_start(args, num_args);

//     int max = 0;
// 	for (int i; i <= num_args; i++)
// 	{
        
// 		int x = va_arg(args, int);
//         if(i == 0)
//             max = x;
//         else if(x > max)
//             max = x;
// 		printf("x = %d\n", x);
// 	}
//     va_end(args);
//     return max;
// }

// int main()
// {
//     max(5, 5, 6, 6, 5, 'c');
// }

int sum(int count, ...)
{
    va_list args;
    va_start(args, count);

    int s = 0;
    int i; 
    for(i = 0; i <= count; i++)
    {
        int x = va_arg(args, int);
        s+= x;
    }
    va_end(args);
    return s;
}

int main()
{
    printf("Sum is: %d\n", sum(3, 2, 3, 4));
    return 0;
}