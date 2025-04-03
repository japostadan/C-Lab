#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc >= 2)
    {
        int i = 1;
        int max = atoi(argv[i]);
        int min = atoi(argv[i]);
        // Initialize max with the first argument converted to integer

        while (argv[++i]) // Loop until reaching the end of arguments
        {
            int num = atoi(argv[i]); // Convert each argument to integer
            if (num > max)
                max = num;
            if (num < min)
                min = num;
        }

        printf("max is %d\n", max);
        printf("min is %d\n", min);
        return max;
    }
    else
    {
        printf("Usage: %s <num1> <num2> ... <numN>\n", argv[0]);
        return 1;
    }
}
