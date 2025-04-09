#include <stdio.h>

int main(int argc, char **argv)
{
    int p;
    int *ptr;

    p = 42;
    ptr=&p;
    p = 84;
    int **dp;

    *dp = ptr;
    
    printf("address at ptr: %p\n",ptr);
    printf("address at p: %p\n",&p);
    printf("value at ptr: %d\n",*ptr);
    printf("value of p %d\n",p);
    printf("value of dp %d\n",**dp);
    printf("value of dp %p\n\v",*dp);

    int *ptr1;
    int *ptr2;
    int val1;
    int val2;

    val1 = 6;
    val2 = 9;

    ptr1 = &val1;
    ptr2 = &val2;

    printf("val at pt1 = %d\n",*ptr1);
    printf("val at ptr2 = %d\n\v",*ptr2);

    *ptr1 = *ptr2;
    *ptr2 = 42;
    printf("val1 = %d\n",val1);
    printf("val2 = %d\n",val2);
    printf("*ptr2 = %d\n",*ptr2);
    printf("*ptr1 = %d\n\v",*ptr1);

    printf("val1 = %p\n",&val1);
    printf("val2 = %p\n",&val2);
    printf("ptr1 = %p\n",ptr1);
    printf("ptr2 = %p\n",ptr2);





return(0);
}

