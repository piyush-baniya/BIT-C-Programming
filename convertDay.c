#include <stdio.h>

int main()
{
    int day;

    printf("Enter number of days: ");
    scanf("%d", &day);

    int years = day / 365;
    int weeks = (day % 365) / 7;
    int remainingDays = day % 7;
    printf("%d days is equivalent to %d years, %d weeks, and %d days.\n",
           day, years, weeks, remainingDays);

    return 0;
}