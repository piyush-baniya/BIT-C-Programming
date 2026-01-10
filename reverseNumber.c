#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("The reverse order of the entered integers is: %d %d %d\n", num3, num2, num1);
    return 0;
}