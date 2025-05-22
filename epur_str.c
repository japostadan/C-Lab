/*Assignment name  : epur_str                                                       */
/*Expected files   : epur_str.c                                                     */
/*Allowed functions: write                                                          */
/*--------------------------------------------------------------------------------  */
/*                                                                                  */
/*Write a program that takes a string, and displays this string with exactly one    */
/*space between words, with no spaces or tabs either at the beginning or the end,   */
/*followed by a \n.                                                                 */
/*                                                                                  */
/*A "word" is defined as a part of a string delimited either by spaces/tabs, or     */
/*by the start/end of the string.                                                   */
/*                                                                                  */
/*If the number of arguments is not 1, or if there are no words to display, the     */
/*program displays \n.                                                              */
/*                                                                                  */
/*Example:                                                                          */
/*                                                                                  */
/*$> ./epur_str "See? It's easy to print the same thing" | cat -e                   */
/*See? It's easy to print the same thing$                                           */
/*$> ./epur_str " this        time it      will     be    more complex  . " | cat -e*/
/*this time it will be more complex .$                                              */
/*$> ./epur_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e               */
/*$                                                                                 */
/*$> ./epur_str "" | cat -e                                                         */
/*$                                                                                 */
/*$>                                                                                */
/*                                                                                  */
/*$> ./epur_str "vous voyez c'est facile d'afficher la meme chose" | cat -e         */
/*vous voyez c'est facile d'afficher la meme chose$                                 */
/*$> ./epur_str " seulement          la c'est      plus dur " | cat -e              */
/*seulement la c'est plus dur$                                                      */
/*$> ./epur_str "comme c'est cocasse" "vous avez entendu, Mathilde ?" | cat -e      */
/*$                                                                                 */
/*$> ./epur_str "" | cat -e                                                         */
/*$                                                                                 */
/*$>                                                                                */
#include <unistd.h>

int sspace(char c)
{
    return (c == ' ' || c>= 9 && c<=13);
}
void pure(char *s)
{

    int flag = 0;
    while(*s)
    {
        while(*s && sspace(*s))
        {
            s++;
            flag = 0;
        }

        while(*s && !sspace(*s))
        {
            write(1, s++, 1);
            flag = 1;
        }
        while(*s && sspace(*s))
        {
            s++;
        }

        if(flag && *s)
            write(1, " ",1);
    }
}
int main(int ac, char **av)
{
    if (ac == 2)
        pure(av[1]);
    write(1,"\n", 1);
}
