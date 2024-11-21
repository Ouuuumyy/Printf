#include "libftprintf.h"

int ft_putunsign(unsigned int n)
{
    int count;
    char c;

    count = 0;
    if (n >= 10)
    {
        count += ft_putunsign(n / 10);
    }
    c = n % 10 + '0';
    write(1, &c, 1);
    count++;
    return count;
}

// int main()
// {
//     printf("\n%d", ft_putunsign(4294967295));
// }