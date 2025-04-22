#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_space(char c)
{
	return ((c == ' ') || ((c >= 9 && c <= 13))
}

void	ft_print_first_word(char *str, int start)
{
	while (str[start] != '\0' && !is_space(str[start]))
	{
		ft_putchar(str[start]);
		start++;
	}
}

void	rostring(char *str)
{
	int	i;
	int	start;

	start = 0;
	while (str[start] != '\0' && is_space(str[start]))
		start++;
	i = start;
	while (str[i] != '\0' && !is_space(str[i]))
		i++;
	while (str[i] != '\0')
	{
		if (str[i] != '\0' && !is_space(str[i]) && is_space(str[i - 1]))
		{
			while (str[i] != '\0' && !is_space(str[i]))
			{
				ft_putchar(str[i]);
				i++;
			}
			ft_putchar(' ');
		}
		i++;
	}
	ft_print_first_word(str, start);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		rostring(argv[1]);
	ft_putchar('\n');
	return (0);
}
