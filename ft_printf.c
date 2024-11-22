/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukadir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:30:27 by oukadir           #+#    #+#             */
/*   Updated: 2024/11/22 12:30:35 by oukadir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

int ft_printf(char *s, ...)
{
    va_list args;
    int i = 0;
    int count = 0;

    va_start(args, s);
    while(s[i])
    {
        if(s[i] == '%')
        {
            if(s[i + 1] == '%')
                count+=ft_putchar('%');
            if(s[i + 1] == 'c')
                count+=ft_putchar(va_arg(args, int));
            if(s[i + 1] == 'd')
               count+=ft_putnbr(va_arg(args, int));
            if(s[i + 1] == 'i')
                count+=ft_putnbr(va_arg(args, int));
            if(s[i + 1] == 'x')
                count+=ft_puthex(va_arg(args, int), 0);
            if(s[i + 1] == 'X')
                count+=ft_puthex(va_arg(args, int), 1);
            if(s[i + 1] == 's')
                count+=ft_putstr(va_arg(args, char *));
            if(s[i + 1] == 'u')
                count+=ft_putunsign(va_arg(args, unsigned int));
            else
            {
                i++;
                while(s[i + 1] == ' ')
                    i++;       
            }
                
        }
        else
            count += ft_putchar(s[i]);
        i++;   
    }
    va_end(args);
    return count;
}

int main()
{
    ft_printf("%%%'      ]zksksj\n");
    printf("%%%'      ]zksksj\n");

}
