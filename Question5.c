/*
Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <stdio.h>

int main()
{
    float temperature;
    printf("Enter temperature in celsius:");
    scanf("%f", &temperature);

    printf("%f celsius in fehranheit would be: %f", temperature, (9.0/5.0)*temperature+32);
    return 0;
}