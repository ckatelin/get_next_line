#include "libft.h"

char    *ft_itoa_base(int value, int base)
{
    int len;
    int num;
    long int pwd;
    char *mas;
    int i;

    pwd = 1;
    num = value;
    len = 0;
    i = 0;
    while (num != 0)
    {
        pwd = pwd * base;
        num = num / base;
        len++;
    }
    pwd = pwd / base;
    mas = (char *)malloc(sizeof(char) * (len + 1));
    if (value == 0)
    {
        mas[0] = value + '0';
        mas[1] = '\0';
        return (mas);;
    }

    if (value < 0 && base == 10)
    {
        mas[i] = '-';
        i++;
    }
    while (pwd > 0)
    {
        num = (value / pwd) % base;
        if (num < 0)
            num = num * (-1);
        if (num >= 0 && num <= 9)
            mas[i] = num + '0'; 
        else if (num >= 10 && num <= (base - 1))
            mas[i] = num + 55;
        i++;
        pwd = pwd / base;
    }
    mas[i] = '\0';
    return (mas);
}
