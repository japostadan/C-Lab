/*Assignment name  : ft_rrange                                                    */
/*Expected files   : ft_rrange.c                                                  */
/*Allowed functions: malloc                                                       */
/*--------------------------------------------------------------------------------*/
/*                                                                                */
/*Write the following function:                                                   */
/*                                                                                */
/*int     *ft_rrange(int start, int end);                                         */
/*                                                                                */
/*It must allocate (with malloc()) an array of integers, fill it with consecutive */
/*values that begin at end and end at start (Including start and end !), then     */
/*return a pointer to the first value of the array.                               */
/*                                                                                */
/*Examples:                                                                       */
/*                                                                                */
/*- With (1, 3) you will return an array containing 3, 2 and 1                    */
/*- With (-1, 2) you will return an array containing 2, 1, 0 and -1.              */
/*- With (0, 0) you will return an array containing 0.                            */
/*- With (0, -3) you will return an array containing -3, -2, -1 and 0.            */

#include <stdio.h>
#include <stdlib.h>

int *ft_rrange(int start,int end)
{
    int size;
    int step;
    int i = 0;
    size =(start > end) ? (start - end) : (end - start);
    step = (start > end) ? 1 : -1;
    size++;
    int *res = (int *)malloc(size * sizeof(int));
    if(!res) return 0;
    if(size == 0)
        return 0;
    while(i < size)
    {
        res[i] = end + i  * step;
        i++;
    }
    return res;
}
int main()
{

    int start = 3;
    int end = -5;
    int size = (start > end) ? (start - end) : (end - start);
    size++;
    int *arr = ft_rrange(start,end);
    for(int i = 0; i<size; i++)
        printf("%d\n",arr[i]);
}

