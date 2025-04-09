#include <unistd.h>
void ft_putchar (char c)
{
    write (1, &c,1 );
}
int is_letter(char *s)
{
    if ((*s >= 'a' && *s <= 'z'))
        return 1;
    return 0;
}
void snake_to_camel(char *s)
{
    while(*s)
    {
        if(*s == '_' )
        {
            s++;
            if (is_letter(s))
            {
                *s -= 32;
            }
        }
        ft_putchar(*s);
        s++;
    }
}
int main(int ac, char **av)
{
    if (ac == 2)
    {
        snake_to_camel(av[1]);
    }
    write(1,"\n", 1);
}
