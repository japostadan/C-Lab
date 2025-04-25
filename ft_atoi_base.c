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

int ft_isspace(char c)
{
    if (c <= 32)
        return 1;
    return 0;
}

int isvalid(char s, int base)
{
    char b1[17] = "0123456789abcdef";
    char b2[17] = "0123456789ABCDEF";
    while (base--)
        if (b1[base] == s || b2[base] == s)
            return 1;
    return 0;
}
int valueof(char c)
{
    if (c >= '0' && c <= '9')
        return (c - '0');
    else if (c >= 'a' && c <= 'f')
        return (c - 'a' + 10);
    else if (c >= 'A' && c <= 'F')
        return (c - 'A' + 10);
    else
        return 0;
}

int ft_atoi_base(const char *s, int base)
{
    int res = 0;
    int sign = 1;
    while(ft_isspace(*s))
          s++;
    if(*s == '-' || *s == '+')
    {
        if (*s == '-')
            sign = -1;
        s++;
    }
    while(isvalid(*s, base))
        res = res * base + valueof(*s++);
    return (res * sign);
}
#include <stdio.h>
/*
int main()
{
	char *str = "5f";

	printf("%d", ft_atoi_base(str, 10));
	return (0);
}
*/
