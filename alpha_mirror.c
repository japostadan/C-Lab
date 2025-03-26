#include <unistd.h>
void mirror(char *s)
{
    while(*s)
    {
        if(*s >= 'a' && *s <= 'z')
            *s = 'z' - (*s - 'a');
        else if (*s >= 'A' && *s <= 'Z')
            *s = 'Z' - (*s - 'A');
        write(1, s, 1);
        s++;
    }
}
int main(int ac, char **av)
{
    if (ac == 2)
    {
        mirror(av[1]);
    }
    write(1, "\n", 1);
}
