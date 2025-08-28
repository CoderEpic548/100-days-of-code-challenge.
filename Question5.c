#include <stdio.h>

int main()
{
    float temperature;
    printf("Enter temperature in celsius:");
    scanf("%f", &temperature);

    printf("%f celsius in fehranheit would be: %f", temperature, (9.0/5.0)*temperature+32);
    return 0;
}