#include <stdio.h>

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int remainder = num % 5;
    printf("The remainder when %d is divided by 5 is: %d\n", num, remainder);

    return 0;
}