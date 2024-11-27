/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukadir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:36:15 by oukadir           #+#    #+#             */
/*   Updated: 2024/11/26 14:36:30 by oukadir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int	ft_putnbr(int i);
int	ft_putstr(char *c);
int	ft_putchar(char c);
int	ft_puthex(unsigned int n, int uppercase);
int	ft_putunsign(unsigned int n);
int	ft_printf(const char *s, ...);
int	ft_putadress(void *ptr);
#endif
