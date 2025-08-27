/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter The value of a: ");
    scanf("%d",&a);
    printf("Enter The value of b: ");
    scanf("%d",&b);
    int add=a+b;
    int subtract=a-b;
    int multiply=a*b;
    int divide=a/b;
    printf("The sum is: %d\nThe difference is: %d\nThe multiply is: %d\nThe quotient is: %d",add,subtract,multiply,divide);
    return 0;
}