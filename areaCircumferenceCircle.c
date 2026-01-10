#include <stdio.h>

int main()
{
    int radius;

    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    int area = 3.14159 * radius * radius;
    printf("The area of the circle is: %.2f\n", area);

    double circumference = 2 * 3.14159 * radius;
    printf("The circumference of the circle is: %.2f\n", circumference);

    return 0;
}