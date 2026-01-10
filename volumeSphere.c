#include <stdio.h>

int main()
{
    int radius;
    printf("Enter the radius of the sphere: ");
    scanf("%d", &radius);

    double volume = (4.0 / 3.0) * 3.14159 * radius * radius * radius;
    printf("The volume of the sphere with radius %d is: %.2f\n", radius, volume);

    return 0;
}