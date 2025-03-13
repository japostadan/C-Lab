#include <unistd.h>
#include <stdlib.h>

void ft_putstr(char *s)
{
	while (*s)
	{
		write(1, s++, 1);
	}
}
char *reverse_string(char *str)
{
	char *start;
	char *end;
	char temp;

	if(!str)
		return (NULL);
	start = str;
	end = str;
	while (*(end + 1) != '\0')
		end++;
	while(end > start)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
	return (str);
}
int main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_putstr(reverse_string(av[1]));
	}
	write (1, "\n", 1);
}
