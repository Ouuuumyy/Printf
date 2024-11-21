#include "libftprintf.h"

int ft_putnbr(int n)
{
    char c;
    if(n == -2147483648)
    {
        write(1, " –2147483648", 11);
        return (0);
    }
    if (n < 0)
    {
        n = -n;
        write(1, "-", 1);
    }
    if (n >= 10)
    {
        ft_putnbr(n / 10);
    }
    c =  n % 10 + '0';
    write(1, &c, 1);
    return (0);
}