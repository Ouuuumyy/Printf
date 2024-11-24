#include <stdio.h>
#include <stdlib.h>
#include "libftprintf.h"

static char *convert_hex(unsigned long n)
{
    char    tab[16];
    int     reste = 0;
    int     i = 0;
   
    while (n > 0)
    {
        reste = n % 16;
        if(reste < 10)
            tab[i] = reste + '0';
        else
        {
            tab[i] = 'a' + (reste - 10);
        }
        i++;
        n /= 16;
    }
    tab[i] == '\0';
    return (tab);
}

static int write_hex(char *tab)
{
    int count;
    int i = 0;

    i = 0;
    count = 0;
    while(tab[i] != '\0')
        i++;
    while(i > 0)
    {
        i--;
        write(1, &tab[i], 1);
        count++;
    }
    return count;
}

int ft_putadress(void *ptr)
{
    unsigned long num;
    char *val;
    int count;

    count = 0;
    if(!ptr)
    {
        ft_putstr("(nil)");
        return (5);
    }
    num = (unsigned long)ptr;
    if(num == 0)
    {
        ft_putstr("0x0");
        return (3);
    }
    val = convert_hex(num);
    write(1, "0x", 2);
    count += write_hex(val);
    return (count + 2);
}

int main()
{
    int n;

    //ft_putadress((void *)&n);
    printf("%p hello", (void *)&n);
    return 0;
}