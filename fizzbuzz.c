#include <stdio.h>
/*
int main()
{
	for (int i = 1; i <= 100; i++)
	{
		if( i % 3 == 0 && i % 5 == 0)
			printf("Fizzbuzz\n");
		else if ( i % 3 == 0)
			printf("Fizz\n");
		else if (i % 5 == 0)
			printf("Buzz\n");
		else
			printf("%d\n", i);
	}
	return (0);
}
*/
#include <unistd.h>

void	ft_putnbr(int number)
{
		if (number > 9)
			ft_putnbr(number / 10);
		write(1, &"0123456789"[number % 10], 1);
}

int main()
{
	int i = 1;

	while(i <= 100)
	{
		if (i%5 == 0 && i%3 == 0)
			write(1, "fizzbuzz",8 );
		else if (i%3 == 0)
			write(1, "fizz", 4);
		else if (i%5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
	return 0;
}
