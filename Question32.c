//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include <stdio.h>

int main()
{
    int num,rev=0;
    printf("Enter the number to check: ");
    scanf("%d",&num);
    int temp=num;
    while(num>0)
    {
        int digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    if(temp == rev)
    {
        printf("The entered number is palindrome.");
    }
    else
    {
        printf("The entered number is not palindrome.");
    }
    return 0;
}