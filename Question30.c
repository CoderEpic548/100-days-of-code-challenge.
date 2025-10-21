//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

#include <stdio.h>

int main()
{
    int num,rev=0;
    printf("Enter the number you want to reverse: ");
    scanf("%d",&num);
    while(num>0)
    {
        int digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    printf("The reverse of the given number is: %d",rev);
    return 0;
}