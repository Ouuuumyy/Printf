#include "libftprintf.h"

int ft_putstr(char *c)
{
    int i;
    int count;

    i = 0;
    count = 0;
    if(!c)
        return (0);
    while(c[i] != '\0')
    {
        write(1, &c[i], 1);
        i++;
        count++;
    }
    return (count);
}
/*
int main()
{
    printf("\n%d", ft_putstr("hello"));
}
*/