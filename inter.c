#include <unistd.h>

void ins(char *s1, char *s2)
{
	int buff[256] = {0};
	int i = 0;

	while(s2[i] != '\0')
	{
		buff[(int)s2[i]] = 1;
		i++;
	}
	i = 0;
	while(s1[i] != '\0')
	{
		if (buff[(int)s1[i]] == 1)
		{
			write(1, &s1[i], 1);
			buff[(int)s1[i]] = 2;
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
		ins(av[1], av[2]);
	write(1,"\n",1);
}
