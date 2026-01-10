#include <stdio.h>

int main()
{
    int coefficientA, coefficientB, coefficientC;
    printf("Enter coefficients A, B and C of the quadratic equation (Ax^2 + Bx + C = 0): ");
    scanf("%d %d %d", &coefficientA, &coefficientB, &coefficientC);
    int discriminant = coefficientB * coefficientB - 4 * coefficientA * coefficientC;
    if (discriminant < 0)
    {
        printf("The equation has complex roots.\n");
    }
    else
    {
        double root1 = (-coefficientB + sqrt(discriminant)) / (2.0 * coefficientA);
        double root2 = (-coefficientB - sqrt(discriminant)) / (2.0 * coefficientA);
        printf("The roots of the equation are: %.2f and %.2f\n", root1, root2);
    }
    return 0;
}