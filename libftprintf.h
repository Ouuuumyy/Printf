#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <unistd.h>
#include <stdarg.h>

int ft_putnbr(int i);
int ft_putstr(char *c);
int ft_putchar(char c);
int ft_puthex(unsigned int n, int uppercase);
int ft_putunsign(unsigned int n);
int ft_printf(char *s, ...);
#endif