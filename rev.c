#include <unistd.h>
void rev(char *s)
{
	char *p;
	char *p1;
	p = s;
	p1 =s;
	while(*p != '\0')
		p++;
	while(p-- != p1)
	{
		write(1, p, 1);
	}
}
int main(int ac, char **av)
{
	if(ac == 2)
		rev(av[1]);
	write(1,"\n", 1);
}
