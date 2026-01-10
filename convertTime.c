#include <stdio.h>

int main()
{
    int seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int remainingSeconds = seconds % 60;

    printf("%d seconds is equivalent to %d hours, %d minutes, and %d seconds.\n",
           seconds, hours, minutes, remainingSeconds);
}