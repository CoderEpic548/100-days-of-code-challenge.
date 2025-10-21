//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int mask = 1 << 31;
    int started = 0;

    printf("Binary representation: ");
    for (int i = 0; i < 32; i++) {
        if (number & mask) {
            printf("1");
            started = 1;
        } else if (started) {
            printf("0");
        }
        mask >>= 1;
    }

    if (!started) {
        printf("0");
    }

    printf("\n");

    return 0;
}