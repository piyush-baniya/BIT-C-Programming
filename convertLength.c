#include <stdio.h>

int main()
{
    int length;

    printf("Enter the length in mm");
    scanf("%d", &length);

    int kilometers = length / 1000000;
    int meters = length / 1000;
    int centimeters = (length % 1000) / 10;
    int remainingMillimeters = length % 10;

    printf("%d mm is equivalent to %d kilometers, %d meters, %d centimeters, and %d millimeters.\n",
           length, kilometers, meters, centimeters, remainingMillimeters);
}