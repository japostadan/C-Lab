//Assignment name  : inter
//Expected files   : inter.c
//Allowed functions: write
//--------------------------------------------------------------------------------
//
//Write a program that takes two strings and displays, without doubles, the
//characters that appear in both strings, in the order they appear in the first
//one.
//
//The display will be followed by a \n.
//
//If the number of arguments is not 2, the program displays \n.
//
//Examples:
//
//$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
//padinto$
//$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
//df6ewg4$
//$>./inter "rien" "cette phrase ne cache rien" | cat -e
//rien$
//$>./inter | cat -e


#include <unistd.h>

void solve(char *str1, char *str2) {
	int buff[128];
	int	i;
	char c;

	i = 0;
	while (i < 128)
		buff[i++] = 0;

	i = 0;
	while (str2[i]) {
		if (buff[(int)str2[i]] == 0)
			buff[(int)str2[i]] = 1;
		i++;
	}

	i = 0;
	while (str1[i]) {
		if (buff[(int)str1[i]] == 1)
			buff[(int)str1[i]] = 2;
		i++;
	}

	i = 0;
	while (i < 128) {
		if (buff[i] == 2)
		{
			c = i;
			write(1, &c, 1);
		}
		i++;
	}

}

int	main(int argc, char **argv) {
	if (argc == 3)
		solve(argv[1], argv[2]);
	write(1, "\n", 1);
	return 0;
}
