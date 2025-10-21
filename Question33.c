//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>
#include <math.h>

int main() {
    int number, original, digit, count = 0;
    double sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    original = number;
    int temp = number;
    while (temp != 0) {
        count++;
        temp /= 10;
    }
    temp = number;
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }
    if ((int)sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}