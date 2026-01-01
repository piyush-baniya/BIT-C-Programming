#include <stdio.h>

int main()
{
    int p, t, r, SI;
    p = 1500;
    t = 2;
    r = 13;
    SI = p * t * r / 100;

    printf("The simple interest if p = %d, t = %d and r = %d is %d", p, t, r, SI);
    return 0;
}