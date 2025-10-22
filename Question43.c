//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include <stdio.h>

int main()
{
    int sum=0,i,num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int temp=num;
    while(temp>0)
    {
        int product=1;
        int digit=temp%10;
        for(int j=1;j<=digit;j++)
        {
            product=product*j;
        }
        sum=sum+product;
        temp=temp/10;
    }
    if(sum==num)
    {
        printf("It's a strong number.");
    }
    else
    {
        printf("It's not a strong number.");
    }
    return 0;
}