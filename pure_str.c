#include <unistd.h>

int sspace(char s)
{
    return (s == ' ' || (s >=9 && s<=13));
}
void pure(char *s)
{
    int flag = 0;
    while(*s)
    {
        while(*s && sspace(*s))
			s++;
        flag = 0;
        while(*s && !sspace(*s))
        {
            write(1, s, 1);
            s++;
        }
        while(*s && sspace(*s))
		{
			s++;
            flag =1;
        }
        if(flag && *s)
            write(1, " ", 1);
    }
}
int main(int ac,char **av)
{
    if(ac ==2 )
        pure(av[1]);
    write(1, "\n", 1);
}
