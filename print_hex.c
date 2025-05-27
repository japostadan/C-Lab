#include <unistd.h>

int ft_atoi(char *s)
{
	int res = 0;
	while(*s >= '0' && *s <= '9')
	{
		res = res * 10 + (*s -  '0');
		s++;
	}
	return res;
}

void p_hex(int n)
{
	char base[17] = "0123456789abcdef";
	if(n > 16)
		p_hex(n/16);
	n = base[n%16];
	write(1, &n, 1);
}
#include <stdio.h>

int main(int ac, char **av)
{
	if(ac == 2)
	{
		printf("%d\n",ft_atoi(av[1]));
		p_hex(ft_atoi(av[1]));
	}
	write(1, "\n", 1);
}
