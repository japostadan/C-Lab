/*Assignment name  : rev_wstr                                                       */
/*Expected files   : rev_wstr.c                                                     */
/*Allowed functions: write, malloc, free                                            */
/*--------------------------------------------------------------------------------  */
/*                                                                                  */
/*Write a program that takes a string as a parameter, and prints its words in       */
/*reverse order.                                                                    */
/*                                                                                  */
/*A "word" is a part of the string bounded by spaces and/or tabs, or the            */
/*begin/end of the string.                                                          */
/*                                                                                  */
/*If the number of parameters is different from 1, the program will display         */
/*'\n'.                                                                             */
/*                                                                                  */
/*In the parameters that are going to be tested, there won't be any "additional"    */
/*spaces (meaning that there won't be additionnal spaces at the beginning or at     */
/*the end of the string, and words will always be separated by exactly one space).  */
/*                                                                                  */
/*Examples:                                                                         */
/*                                                                                  */
/*$> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e */
/*ironic? it Isn't gatherings. love I But people! hate You$                         */
/*$>./rev_wstr "abcdefghijklm"                                                      */
/*abcdefghijklm                                                                     */
/*$> ./rev_wstr "Wingardium Leviosa" | cat -e                                       */
/*Leviosa Wingardium$                                                               */
/*$> ./rev_wstr | cat -e                                                            */
/*$                                                                                 */
/*$>--------------------------------------------------------------------------------*/

#include <unistd.h>


int		sspace(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

void	print_reverse(char *s)
{
	char *end = s;
	while(*end)
		end++;
	end--;
	while(end >= s && sspace(*end))
		end--;
	while(end >= s)
	{
		char *word_end = end;

		while(end >= s && !sspace(*end))
				end--;
		char *word_start = end + 1;
		char *p = word_start;

		while(p <= word_end)
		{
			write(1, p, 1);
			p++;
		}
		while(end >= s && sspace(*end))
			end--;
		if(end >= s)
			write(1, " " , 1);
	}

}

int		main(int ac, char **av)
{
	if (ac == 2)
		print_reverse(av[1]);
	write(1, "\n", 1);
	return (1);
}
