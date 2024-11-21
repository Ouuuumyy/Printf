
#include "libftprintf.h"
int ft_printf(char *s, ...)
{
    va_list args;
    int i = 0;
    int count = 0;

    va_start(args, s);
    while(s[i])
    {
        if(s[i] == '%')
        {
            if(s[i + 1] == '%')
                count+=ft_putchar('%');
            if(s[i + 1] == 'c')
                count+=ft_putchar(va_arg(args, int));
            if(s[i + 1] == 'd')
               count+=ft_putnbr(va_arg(args, int));
            if(s[i + 1] == 'i')
                count+=ft_putnbr(va_arg(args, int));
            if(s[i + 1] == 'x')
                count+=ft_puthex(va_arg(args, int), 0);
            if(s[i + 1] == 'X')
                count+=ft_puthex(va_arg(args, int), 1);
            if(s[i + 1] == 's')
            {
                char *str = va_arg(args, char *);
                if(!str)
                    str = "(null)";
                count+=ft_putstr(str);
            }  
            if(s[i + 1] == 'u')
                count+=ft_putunsign(va_arg(args, unsigned int));
            else
                i++;
            i++;
        }
        else
        {
            ft_putchar(s[i]);
            i++;
        }
       
    }

    va_end(args);
    return 0;
}

int main()
{
    ft_printf("%zksksj\n");
    printf("%z  ksksj\n");

}