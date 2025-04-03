#include <stdio.h>
#include <stdlib.h>

int sum_range(int start, int end)
{
    int i;
    int sum;

    i = start;
    sum = 0;

    if (!start && !end)
        return (0);
    while (i <  end)
    {
        sum += i;
        i++;
    }
    return sum;
}

int main(int argc, char **argv)
{
    int start;
    int end;

    if(argc != 3)
    {
        fprintf (stderr, "Usage: %s \n start end", argv[0]);
        return (1);
    }

    start = atoi(argv[1]);
    end = atoi(argv[2]);

    printf("sum_rangei(%d - %d) = %d",start, end, sum_range(start,end));

    return 0;
}
