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
#include <stdio.h>

int	compare_specifier(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == '\0')
	{
		ft_putstr("");
		return (-1);
	}
	else if (c == '%')
		count += ft_putchar('%');
	else if (c == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (c == 'd')
		count += ft_putnbr(va_arg(args, int));
	else if (c == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (c == 'x')
		count += ft_puthex(va_arg(args, int), 0);
	else if (c == 'X')
		count += ft_puthex(va_arg(args, int), 1);
	else if (c == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		count += ft_putadress(va_arg(args, void *));
	else if (c == 'u')
		count += ft_putunsign(va_arg(args, unsigned int));
	else
		return (-2);
	return (count);
}
int	ft_printf(char *s, ...)
{
	va_list	args;
	int		i;
	int		count;
	int		res;

	i = 0;
	count = 0;
	res = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			res = compare_specifier(s[i + 1], args);
			if (res == -2)
			{
				i++;
				while (s[i + 1] == ' ')
					i++;
			}
			else
				count += res;
			i++;
		}
		else
			count += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (count);
}

int	main(void)
{
	int	n;

	
	ft_printf("%");
	printf("%");
	
}
