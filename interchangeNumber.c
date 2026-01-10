#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("After interchanging, first integer: %d, second integer: %d\n", a, b);
    return 0;
}