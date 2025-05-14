/*--------------------------------------------------------------------------------*/
/*Assignment name  : ft_atoi_base                                                 */
/*Expected files   : ft_atoi_base.c                                               */
/*Allowed functions: None                                                         */
/*--------------------------------------------------------------------------------*/
/*                                                                                */
/*Write a function that converts the string argument str (base N <= 16)           */
/*to an integer (base 10) and returns it.                                         */
/*                                                                                */
/*The characters recognized in the input are: 0123456789abcdef                    */
/*Those are, of course, to be trimmed according to the requested base. For        */
/*example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".    */
/*                                                                                */
/*Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".    */
/*                                                                                */
/*Minus signs ('-') are interpreted only if they are the first character of the   */
/*string.                                                                         */
/*                                                                                */
/*Your function must be declared as follows:                                      */
/*                                                                                */
/*int     ft_atoi_base(const char *str, int str_base);                            */

int sspace(char c)
{
	return(c == ' ' || (c >= 9 && c<= 13));
}
int n_base(char s, int n)
{
	if(n <= 10)
		return (s >= '0' && s<= '9');
	return((s >= '0' && s<= '9') || (s >= 'a' && s <= ('a' + n - 10)) || (s >= 'A' && s<= ('A' + n - 10)));
}
int ft_atoi_base(const char *s, int n)
{
	int res=0;
	int sign = 1;
	if(!s || (n < 2 || n > 16))
			return 0;
	while(*s && sspace(*s))
		s++;
	if(*s == '-' || *s == '+')
	{
		if(*s == '-')
			sign= -1;
		s++;
	}
	while(*s && n_base(*s,n))
	{
		char c = *s;
		if(c >= 'a' && c <= 'f')
			res = res * n + (c - 'a' + 10);
		else if(c >= 'A' && c <= 'F')
			res = res * n + (c - 'A' + 10);
		else
			res = res * n + (c  - '0');
		s++;
	}
	return (res * sign);
}

#include <stdio.h>
int main()
{
	char *str = "1A";
	//1A == 26 in base 16;

	printf("%d", ft_atoi_base(str, 16));
	return (0);
}
