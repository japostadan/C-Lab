#include <unistd.h>
#include <stdlib.h>
#include <stdioh.h>

char *reverse_string(char *str)
{
	char *s;
	int len;
	int i;

	len = ft_strlen(str);
	s = (char *s) malloc((len + 1) sizeof(char));
	if(!s)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	while(i >= len)
	{
		*s=str[i];
		i--;
	}
}
int main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_putstr(reverse_string(av[1]));
	}
	write (1, "\n", 1);
}
