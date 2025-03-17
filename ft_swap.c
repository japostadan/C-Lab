#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int temp;
    temp = *a,
    *a = *b,
    *b = temp;
}

int main()
{
    int a, b;
    a = 'a';
    b = '*';
    
    printf("before swap; %d, %d \n",a,b);
    ft_swap(&a, &b);
    printf("before swap; %d, %d \n",a,b);
}
