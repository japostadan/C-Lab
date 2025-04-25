/*Assignment name  : swap_bits                                                   */
/*Expected files   : swap_bits.c                                                 */
/*Allowed functions:                                                             */
/*-------------------------------------------------------------------------------*/
/*                                                                               */
/*Write a function that takes a byte, swaps its halves (like the example) and    */
/*returns the result.                                                            */
/*                                                                               */
/*Your function must be declared as follows:                                     */
/*                                                                               */
/*unsigned char   swap_bits(unsigned char octet);                                */
/*                                                                               */
/*Example:                                                                       */
/*                                                                               */
/*  1 byte                                                                       */
/*_____________                                                                  */
/* 0100 | 0001                                                                   */
/*     \ /                                                                       */
/*     / \                                                                       */
/* 0001 | 0100                                                                   */

#include <unistd.h>
#include <stdio.h>

unsigned char swap_bits(unsigned char octet)
{
    return ((octet >> 4) | (octet << 4));
}

void printb(char a) {
    int i;
    for( i = 7; i >= 0; i--)
        printf("%d", (1 &  (a >> i)));
    printf("\n");
}

int main()
{
    char a = 2;
    printb(a);
    printf("\n");
    a = swap_bits(a);
    printb(a);
    return 0;
}

