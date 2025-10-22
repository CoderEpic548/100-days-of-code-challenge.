//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>

int main()
{
    int num,temp,first,last,power=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num;
    last=temp%10;
    while(temp>=10)
    {
        temp=temp/10;
        power=power*10;
    }
    first=temp;
    int middle=num%power;
    middle=middle/10;
    int swapped=last*power+middle*10+first;
    printf("Swapped number: %d",swapped);
    return 0;
}