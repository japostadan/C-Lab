#include <unistd.h>

void ft_putchar(char *c)
{
    write(1, c, 1);
}
int is_letter(char *s)
{
    if ((*s >= 'A' && *s <= 'Z') || (*s >= 'a' && *s <= 'z'))
        return 1;
    return 0;
}

void rotone(char *s)
{
    while (*s)
    {
        if (is_letter(s))
        {
            if(*s == 'z')
            {
                *s = 'a';
            }
            else if(*s == 'Z')
            {
                *s = 'A';
            }
            else
            {
                *s += 1;
            }
        }
        ft_putchar(s);
        s++;
    }
}
int main(int ac, char **av)
{
    if (ac == 2)
    {
        rotone(av[1]);
    }
    write(1,"\n",1);
}
