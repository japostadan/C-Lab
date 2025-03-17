//#include <stdio.h>

int ft_space(const char *s)
{
    return (*s == '\t' || *s == ' ' || *s== '\v');
}
int ft_atoi(const char *s)
{
    int num;
    int sign;
    num = 0;
    sign = 1;
    while (*s && ft_space(s))
        s++;
    if (*s == '-' || *s=='+')
    {
        if (*s=='-')
            sign = -1;
        s++;
    }
    while (*s >= '0' && *s <= '9')
    {
        num = num * 10 + (*(s) - '0');
        s++;
    }
    return num*sign;
}
/*
int main()
{
    printf("%d", ft_atoi("-42"));
    return 0;
}
*/

