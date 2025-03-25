#include <stdio.h>

unsigned int gcd(unsigned int x, unsigned int y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}

unsigned int lcm(unsigned int x, unsigned int y)
{
    int a=x;
    int b=y;
    if (a < 0 || b < 0)
        return 0;
    else
        return (x * y) / gcd(x,y);
}
/*
int main()
{
    printf("res %i\n",lcm(3,6));
    printf("res %i\n",lcm(-1,6));
    printf("res %i\n",lcm(12,6));
    printf("res %i\n",lcm(642,6));
}
*/
