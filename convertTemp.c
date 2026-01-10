#include <stdio.h>

int main()
{
    float centigrade;
    printf("Enter temperature in Centigrade: ");
    scanf("%f", &centigrade);
    float fahrenheit = (centigrade * 9.0 / 5.0) + 32.0;
    printf("%.2f Centigrade is equivalent to %.2f Fahrenheit.\n", centigrade, fahrenheit);
    return 0;
}