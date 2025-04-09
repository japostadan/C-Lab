/*Assignment name  : alpha_mirror                                                 */
/*Expected files   : alpha_mirror.c                                               */
/*Allowed functions: write                                                        */
/*--------------------------------------------------------------------------------*/
/*                                                                                */
/*Write a program called alpha_mirror that takes a string and displays this string*/
/*after replacing each alphabetical character by the opposite alphabetical        */
/*character, followed by a newline.                                               */
/*                                                                                */
/*'a' becomes 'z', 'Z' becomes 'A'                                                */
/*'d' becomes 'w', 'M' becomes 'N'                                                */
/*                                                                                */
/*and so on.                                                                      */
/*                                                                                */
/*Case is not changed.                                                            */
/*                                                                                */
/*If the number of arguments is not 1, display only a newline.                    */
/*                                                                                */
/*Examples:                                                                       */
/*                                                                                */
/*$>./alpha_mirror "abc"                                                          */
/*zyx                                                                             */
/*$>./alpha_mirror "My horse is Amazing." | cat -e                                */
/*Nb slihv rh Znzarmt.$                                                           */
/*$>./alpha_mirror | cat -e                                                       */
/*$                                                                               */
/*$>------------------------------------------------------------------------------*/

/*example: imagine a=1 and b=2 and j=10 (char maps equivalent value in int)
 *suppose we mirror b it should give 8 
 *given the char to mirror is b and it is equivalent to 2;
 *then 2 - 1= 1; 10 - 2 = 8;
 *     b - a= 1; j	- b = h
 *if we move 8 places from the starting point we should arrive at the mirror value 
 * of the character given; (a-j);
 * */

#include <unistd.h>

void mirror(char *s)
{
    while(*s)
    {
       if (*s >= 'a' && *s <= 'z')
            *s = 'z' - (*s - 'a');
       else if (*s >= 'A' && *s <= 'Z')
            *s = 'Z' - (*s - 'A');
        write(1, s++, 1);
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
