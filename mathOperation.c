#include <stdio.h>

int main()
{
    float num1, num2, add, sub, prod, divi;
    printf("Enter number 1: \n");
    scanf("%f", &num1);
    printf("Enter number 2: \n");
    scanf("%f", &num2);

    add = num1 + num2;
    sub = num1 - num2;
    prod = num1 * num2;
    divi = num1 / num2;
    printf("The sum of %f and %f = %f \n", num1, num2, add);
    printf("The difference of %f and %f = %f \n", num1, num2, sub);
    printf("The product of %f and %f = %f \n", num1, num2, prod);
    printf("The division of %f and %f = %f", num1, num2, divi);
    return 0;
}