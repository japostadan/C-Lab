#include <stdlib.h>

char		*ft_itoa_base(int value, int base)
{
	long		n;
	char		*str;
	int			sign;
	int			len;

	if (value < 0)
		n = -(long)value;
	else
		n = value;
	if (value < 0 && base == 10)
		sign = -1;
	else
		sign = 0;
	if (sign == -1)
		len = 2;
	else
		len = 1;
	while ((n = n/base)>= 1)
		len++;
	str = (char *)malloc(sizeof(str)  * (len + 1));
	str[len] = '\0';
	if (value < 0)
		n = -(long)value;
	else
		n = value;
	while (len-- + sign)
	{
		if ((n % base) < 10)
			str[len] = (n % base) + '0';
		else
			str[len] = (n % base) + 'A' - 10;
		n = n / base;
	}
	if (len == 0)
		str[len] = '-';
	return (str);
}
#include <limits.h>
#include <stdio.h>


int main()
{
	printf("%s\n",ft_itoa_base(INT_MAX,2));
	printf("%s\n",ft_itoa_base(INT_MIN,2));
}
