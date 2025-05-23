/*--------------------------------------------------------------------------------*/
/*Assignment name  : reverse_bits                                                 */
/*Expected files   : reverse_bits.c                                               */
/*Allowed functions:                                                              */
/*--------------------------------------------------------------------------------*/
/*                                                                                */
/*Write a function that takes a byte, reverses it, bit by bit (like the           */
/*example) and returns the result.                                                */
/*                                                                                */
/*Your function must be declared as follows:                                      */
/*                                                                                */
/*unsigned char	reverse_bits(unsigned char octet);                                */
/*                                                                                */
/*Example:                                                                        */
/*                                                                                */
/*  1 byte                                                                        */
/*_____________                                                                   */
/* 0010  0110                                                                     */
/*     ||                                                                         */
/*     \/                                                                         */
/* 0110  0100                                                                     */


#include <stdio.h>
#include <unistd.h>

unsigned char reverse_bits(unsigned char octet)
{
	unsigned int i = 8;
	unsigned char bit = 0;
	while (i--)
	{
		bit = (bit << 1 ) | (octet & 1);
		octet = octet >> 1;
	}
	return bit;
}

void print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit = 0;
	while (i--)
	{
		bit = (octet >> i & 1) + 48;
		write(1, &bit, 1);
	}
}

int main()
{
	unsigned char res = 0;

    print_bits((unsigned char) 2);
	res = reverse_bits((unsigned char) 2 );
	print_bits(res);
}
