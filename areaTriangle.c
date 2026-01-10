#include <stdio.h>

int main()
{
    int s1, s2, s3;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%d %d %d", &s1, &s2, &s3);

    int s = (s1 + s2 + s3) / 2;
    double area = sqrt(s * (s - s1) * (s - s2) * (s - s3));
    printf("The area of the triangle with sides %d, %d, and %d is: %.2f\n", s1, s2, s3, area);
    return 0;
}