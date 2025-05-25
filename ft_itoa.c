#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int nb)
{
    char *res;
    int len = 0;
    int n = nb;
    if(nb <= 0)
        len++;
    while(n)
    {
        len++;
        n/=10;
    }
    res = (char *)malloc((len + 1) * sizeof(char));
    res[len] = '\0';
    if(!res)
        return NULL;
    if(nb==0)
    {
        res[0] = '0';
        return res;
    }
    if(nb < 0)
    {
        res[0] = '-';
        nb = -nb;
    }
    while(nb)
    {
        res[--len] = nb % 10 + '0';
        nb /= 10;
    }
    return  res;
}
/*
int main()
{
    printf("%s\n", ft_itoa(123123));
    printf("%s\n", ft_itoa(-42));
}
*/
