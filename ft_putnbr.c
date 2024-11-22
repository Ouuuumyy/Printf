/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukadir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:32:05 by oukadir           #+#    #+#             */
/*   Updated: 2024/11/22 12:32:11 by oukadir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

int ft_putnbr(int n)
{
    char c;
    int count;

    count = 0;
    if(n == -2147483648)
    {
        write(1, " -2147483648", 11);
        return (11);
    }
    if (n < 0)
    {
        n = -n;
        write(1, "-", 1);
        count++;
    }
    if (n >= 10)
    {
        count += ft_putnbr(n / 10);
    }
    c =  n % 10 + '0';
    write(1, &c, 1);
    return (count + 1);
}

// int main()
// {
//     printf("%d", ft_putnbr(-1234));
// }
