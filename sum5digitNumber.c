#include <stdio.h>

int main()
{
    int num;

    printf("Enter a 5-digit number: ");
    scanf("%d", &num);
    if (num < 10000 || num > 99999)
    {
        printf("Error: Please enter a valid 5-digit number.\n");
        return 1;
    }
    int digit1 = num / 10000;
    int digit2 = (num / 1000) % 10;
    int digit3 = (num / 100) % 10;
    int digit4 = (num / 10) % 10;
    int digit5 = num % 10;
    int sum = digit1 + digit2 + digit3 + digit4 + digit5;
    printf("The sum of the digits in the number %d is: %d\n", num, sum);
    return 0;
}