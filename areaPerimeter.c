#include <stdio.h>

int main()
{
    int length, breadth, area, perimeter;
    printf("Enter the length of the rectangle: \n");
    scanf("%d", &length);
    printf("Enter the breadth of the rectangle: \n");
    scanf("%d", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("The area of rectangle whose length is %d and breadth is %d is %d \n", length, breadth, area);
    printf("The perimeter of rectangle whose length is %d and breadth is %d is %d", length, breadth, perimeter);
    return 0;
}