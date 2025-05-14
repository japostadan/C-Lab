#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/*
char *ft_itoa_base(int value, int base)
{
	char *res;
	long n;
	int is_neg = 1;
	int len;
	n = (value < 0) ? -(long)value : value;
	is_neg= (value < 0 && base == 10);

	long temp = n;
	while(temp >= base)
	{
		temp /= base;
		len++;
	}
	if(is_neg)
		len++;
	res = (char *)malloc((len + 1) * sizeof(char));
	if(!res)
		return NULL;
	res[len] = '\0';
	while(len-- > 0)
	{
		int digit = n % base;
		if(digit < 10)
			res[len] = '0' + digit;
		else
			res[len] = 'A' + (digit - 10);
		n /= base;

		if(len == 0 && is_neg)
			res[0] = '-';
	}
	return (res);
}
*/

// Converts an integer to a string in the given base (2 to 16)
char *ft_itoa_base(int value, int base)
{
    long number;
    int is_negative;
    int length = 1;
    char *result;

    // Handle edge case: negative numbers
    number = (value < 0) ? -(long)value : value;
    is_negative = (value < 0 && base == 10);

    // Calculate the length of the string
    long temp = number;
    while (temp >= base)
    {
        temp /= base;
        length++;
    }
    if (is_negative)
        length++; // For the minus sign

    // Allocate memory for the result string (+1 for null terminator)
    result = (char *)malloc(sizeof(char) * (length + 1));
    if (!result)
        return NULL;
    result[length] = '\0'; // Null-terminate the string

    // Fill the string with digits from the end
    while (length-- > 0)
    {
        int digit = number % base;
        if (digit < 10)
            result[length] = '0' + digit;
        else
            result[length] = 'A' + (digit - 10);
        number /= base;

        // If this is the first character and the number was negative
        if (length == 0 && is_negative)
            result[0] = '-';
    }

    return result;
}
int main()
{
	printf("%s\n", ft_itoa_base(INT_MAX,2));
	printf("%s\n", ft_itoa_base(INT_MIN,2));
}
