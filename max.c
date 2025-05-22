/*Assignment name  : max                                                          */
/*Expected files   : max.c                                                        */
/*Allowed functions:                                                              */
/*--------------------------------------------------------------------------------*/
/*                                                                                */
/*Write the following function:                                                   */
/*                                                                                */
/*int             max(int* tab, unsigned int len);                                */
/*                                                                                */
/*The first parameter is an array of int, the second is the number of elements in */
/*the array.                                                                      */
/*                                                                                */
/*The function returns the largest number found in the array.                     */
/*                                                                                */
/*If the array is empty, the function returns 0.                                  */
/*                                                                                */
/*~/GrademeBash/42-EXAM main*                                                     */
/*❯ cat traces/1-0_max.trace                                                      */
/*----------------8<-------------[ START TEST                                     */
/*        💻 TEST                                                                 */
/*./a.out "7" "-42" "0" "-5" "-64" "-2" "-68" "-1"         🔎 YOUR OUTPUT:        */
/*max( {-42;0;-5;-64;-2;-68;-1} , 7) = -1$                                        */
/*        🗝 EXPECTED OUTPUT:                                                     */
/*max( {-42;0;-5;-64;-2;-68;-1} , 7) = 0$                                         */
/*----------------8<------------- END TEST ]                                      */
/*                                                                                */
int max(int *tab, unsigned int len)
{
    int max = 0;
    if(len == 0)
        return 0;
    if(len == 1)
        return (*tab);
    int i = 0;
    while(i < len)
    {
        if(max < tab[i])
            max = tab[i];
        i++;
    }
    return max;
}
/*
#include <stdio.h>

int main()
{
    int a[]= { -42,0,-5,-64,-2,-68,-1};
    printf("%d\n",max(a,7));
}
*/
