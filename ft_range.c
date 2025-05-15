/*Assignment name  : ft_range                                                     */
/*Expected files   : ft_range.c                                                   */
/*Allowed functions: malloc                                                       */
/*--------------------------------------------------------------------------------*/
/*                                                                                */
/*Write the following function:                                                   */
/*                                                                                */
/*int     *ft_range(int start, int end);                                          */
/*                                                                                */
/*It must allocate (with malloc()) an array of integers, fill it with consecutive */
/*values that begin at start and end at end (Including start and end !), then     */
/*return a pointer to the first value of the array.                               */
/*                                                                                */
/*Examples:                                                                       */
/*                                                                                */
/*- With (1, 3) you will return an array containing 1, 2 and 3.                   */
/*- With (-1, 2) you will return an array containing -1, 0, 1 and 2.              */
/*- With (0, 0) you will return an array containing 0.                            */
/*- With (0, -3) you will return an array containing 0, -1, -2 and -3.            */
/*                                                                                */

#include <stdio.h>
#include <stdlib.h>


int *ft_range(int start, int end)
{
    int *res = 0;
    int step = (start < end) ? 1 : -1;
    int size = (start < end) ? (end - start) : (start - end);
    size++;
    res = (int *)malloc(size * sizeof(int));
    if (!res) return 0;
    if (size == 0)
        return 0;
    int i = 0;
    while(i < size)
    {
        res[i] = start + i * step;
        i++;
    }
    return res;
}
/*
int main()
{

    int *arr = ft_range(0,0);
    printf("%d\n",*arr);
}
*/
