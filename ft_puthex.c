#include "libftprintf.h"

int ft_puthex(unsigned int n, int uppercase)
{
    char    tab[9];
    int     reste = 0;
    int     i = 0;
    int     count;

    count = 0;
    if (n == 0)
    {
        write(1, "0", 1);
        return(1);
    }
    while (n > 0)
    {
        reste = n % 16;
        if(reste < 10)
            tab[i] = reste + '0';
        else
        {
            if(uppercase)
                tab[i] = 'A' + (reste - 10);
            else
                tab[i] = 'a' + (reste - 10);
        }
        i++;
        n /= 16;
    }
    while(i > 0)
    {
        write(1, &tab[i - 1], 1);
        i--;
        count++;
    }
    return (count);
}

// int main()
// {
//     printf("\n%d", ft_puthex(0, 1));
//     return 0;
// }