#include <unistd.h>

int sspace(char s)
{
	return (s == ' ' || (s >= 9 && s <= 13));
}
int tolow(char s)
{
	return (s >= 'A' && s <= 'Z');
}
void rstr(char *s)
{
	while(*s)
	{
		if(*s >= 'A' && *s <= 'Z')
		{
			*s+=32;
		}
		if(*s >= 'a' && *s<= 'z' && sspace(*(s+1)) || *(s+1) == '\0')
		{
			*s-= 32;
		}
		write(1, s, 1);
		s++;
	}
}
int main(int ac, char **av)
{
	int i = 1;
	if(ac >= 1)
	{
		while(i < ac)
		{
			rstr(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
}
