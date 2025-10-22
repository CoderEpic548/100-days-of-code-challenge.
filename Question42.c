//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/

#include <stdio.h>

int main()
{
    int i,num,factsum=0;
    printf("Enter the number to check: ");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            factsum=factsum+i;
        }
    }
    if(factsum==num)
    {
        printf("The number is a perfect number.");
    }
    else
    {
        printf("Entered number is not a perfect number.");
    }
    return 0;
}