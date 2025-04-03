#include <stdio.h>

int main(int argc, char **argv)
{
    int arr[4] = {3, 6, 9, 12};
    int *ptr;
    ptr = arr;
    int *min;
    int *max;
    *min = arr[0];
    *max = arr[0];
    int i = 1;

    while (*ptr++ )
    {
        if (arr[i] > *max )
            *max = *ptr;
        if (arr[i] < *min)
            *min = *ptr;
    }
    printf("max is %d\n", *max);
    printf("min is %d\n", *min);

    return (0);
}
