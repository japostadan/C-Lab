/*--------------------------------------------------------------------------------*/
/*Assignment name  : union                                                        */
/*Expected files   : union.c                                                      */
/*Allowed functions: write                                                        */
/*--------------------------------------------------------------------------------*/
/*                                                                                */
/*Write a program that takes two strings and displays, without doubles, the       */
/*characters that appear in either one of the strings.                            */
/*                                                                                */
/*The display will be in the order characters appear in the command line, and     */
/*will be followed by a \n.                                                       */
/*                                                                                */
/*If the number of arguments is not 2, the program displays \n.                   */
/*                                                                                */
/*Example:                                                                        */
/*                                                                                */
/*$>./union rpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e                  */
/*zpadintoqefwjy$                                                                 */
/*$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e                  */
/*df6vewg4thras$                                                                  */
/*$>./union "rien" "cette phrase ne cache rien" | cat -e                          */
/*rienct phas$                                                                    */
/*$>./union | cat -e                                                              */
/*$                                                                               */
/*$>                                                                              */
/*$>./union "rien" | cat -e                                                       */
/*$                                                                               */
/*$>                                                                              */

#include <unistd.h>

void ft_union(char *s, char *s2)
{
    int i = 0;
    int buf[256] = {0};

    while(s2[i])
        buf[(int)s2[i++]] = 1;
    i = 0;
    while(s[i])
        buf[(int)s[i++]] = 1;
    i = 0;
    while(s[i])
    {
        if(buf[s[i]] == 1)
           write(1, &s[i], 1);
        buf[(int)s[i]] = 0;
        i++;
    }
    i = 0;
    while(s2[i])
    {
        if(buf[s2[i]] == 1)
           write(1, &s2[i], 1);
        buf[(int)s2[i]] = 0;
        i++;
    }
}
int main(int ac, char **av)
{
    if(ac == 3)
        ft_union(av[1], av[2]);
    write(1,"\n", 1);
}
