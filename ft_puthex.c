/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukadir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:31:31 by oukadir           #+#    #+#             */
/*   Updated: 2024/11/22 12:31:36 by oukadir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"
#include <stdio.h>
#include <stdlib.h>

static char	*convert_hex(unsigned int n, int uppercase)
{
	char	*tab;
	int		reste;
	int		i;

	reste = 0;
	i = 0;
	tab = (char *)malloc(9);
	while (n > 0)
	{
		reste = n % 16;
		if (reste < 10)
			tab[i] = reste + '0';
		else
		{
			if (uppercase)
				tab[i] = 'A' + (reste - 10);
			else
				tab[i] = 'a' + (reste - 10);
		}
		i++;
		n /= 16;
	}
	tab[i] = '\0';
	return (tab);
}

int	ft_puthex(unsigned int n, int uppercase)
{
	char	*tab;
	int		i;
	int		count;

	count = 0;
	i = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	tab = convert_hex(n, uppercase);
	while (tab[i] != '\0')
		i++;
	while (i > 0)
	{
		write(1, &tab[i - 1], 1);
		i--;
		count++;
	}
	free(tab);
	return (count);
}

// int main()
// {
//   printf("%d\n", ft_puthex(120240, 1));

//     return (0);
// }
