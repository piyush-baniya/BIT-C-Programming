#include <stdio.h>

int main()
{
    int length;

    printf("Enter the length of a side of the cube: ");
    scanf("%d", &length);

    int surfaceArea = 6 * length * length;
    printf("The surface area of the cube is: %d\n", surfaceArea);
    return 0;
}