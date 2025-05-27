#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

char *ft_itoa(int nb)
{
	char *res;
	long n; 
	int len;
	if(nb == INT_MIN)
		return("-2147483648");
	n =nb;
	len = (n <= 0) ? 1:0;
	while(n != 0)
	{
		n /= 10;
		len++;
	}
	if(nb < 0)
	{
		nb = -nb;
		len++;
	}
	res =(char *) malloc((len + 1) * sizeof(char));
	if(!res)
		return NULL;
	res[len] = '\0';
	if(nb == 0)
		res[0] = '0';
	while(len--)
	{
		res[len] = (nb % 10) + '0';
		nb/=10;
	}
	return res;
}

int main()
{
	printf("%s\n", ft_itoa(INT_MAX));
	printf("%s\n", ft_itoa(-321));
	printf("%s\n", ft_itoa(INT_MIN));
}
