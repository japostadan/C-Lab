#include <stdio.h>
#include <unistd.h>
int sspace(char s)
{
	return (s == ' ' || (s >= 9 && s <= 13));
}

int ft_strlen(char *s)
{
	int i = 0;
	while(s[i])
		i++;
	return i;
}
void wrev(char *s)
{
	int fast,slow,curr = 0;
	fast = ft_strlen(s) - 1;
	while(sspace(s[fast]))
		fast--;
	slow = fast;
	curr = fast;
	while(fast > 0)
	{
		curr = fast;	
		slow = fast;
		while(fast >= 0 && !sspace(s[fast]))
			fast--;
		fast++;
		curr = fast;
		while(curr <= slow)
		{
			write(1, &s[curr],1);
			curr++;
		}
		if(fast > 0)
			write(1, " ", 1);

		fast--;
		fast--;
	}

}
int main(int ac, char **av)
{
	if (ac == 2)
		wrev(av[1]);
	write(1, "\n", 1);
}
