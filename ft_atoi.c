#include <stdio.h>

int ft_space(const char *s)
{
    return (*s == ' ' || (*s >= 9 && *s<= 13));
}
int ft_digit(const char *s)
{
    return (*s >= '0' && *s <= '9');
}
int	ft_atoi(const char *nptr)
{
	int						sign;
	unsigned long long int	nb;

	sign = 1;
	nb = 0;
	while (ft_space(nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		sign = 44 - *nptr;
		nptr++;
	}
	while (*nptr && ft_digit(nptr))
	{
		nb = nb * 10 + (*nptr - '0');
		nptr++;
		if (nb > __LONG_MAX__ && sign == 1)
			return (-1);
		else if (nb > __LONG_MAX__ && sign == -1)
			return (0);
	}
	return (nb * sign);
}
/*
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
*/
#include <stdio.h>
#include <stdlib.h>

int   main(void)
{

        char str[] = "-7812";
        int var;
		int var1;

        var = ft_atoi(str);
		var1 = atoi(str);
        printf("real%d\n",var1);
        printf("fake%d\n",var);
}
