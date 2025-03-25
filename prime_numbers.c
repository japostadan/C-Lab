/*
 * Program to check if number is Prime or not
 *
 */
#include <unistd.h>
#include <stdio.h>

int is_prime(int num)
{
	ssize_t i;
	int flag;

	i = 1;
	flag = 0;
	while (i <= num)
	{
		if(num % i == 0)
		{
			flag++;
		}
		i++;
	}
	if (flag == 2)
		return (1);
	return (0);
}
int main()
{
	printf("%d", is_prime(11));
	
	return 0;
}
