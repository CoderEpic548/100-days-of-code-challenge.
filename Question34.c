//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include <stdio.h>

int main()
{
    int i,num,count=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("Entered number is prime number.");
    }
    else
    {
        printf("entered number is not a prime number.");
    }
    return 0;
}