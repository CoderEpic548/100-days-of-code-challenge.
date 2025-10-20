//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/

#include <stdio.h>

int main()
{
    int choice;
    printf("Enter your choice\nPress 1 for +\nPress 2 for -\nPress 3 for *\nPress 4 for /\nPress 5 for %%\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
    {
        int a,b,sum;
        printf("Enter the value of a: ");
        scanf("%d",&a);
        printf("Enter the value of b: ");
        scanf("%d",&b);
        sum=a+b;
        printf("Sum is: %d",sum);
        break;
    }
    case 2:
    {
        int a,b,sub;
        printf("Enter the value of a: ");
        scanf("%d",&a);
        printf("Enter the value of b: ");
        scanf("%d",&b);
        sub=a-b;
        printf("Sub is: %d",sub);
        break;
    }
    case 3:
    {
        int a,b,product;
        printf("Enter the value of a: ");
        scanf("%d",&a);
        printf("Enter the value of b: ");
        scanf("%d",&b);
        product=a*b;
        printf("Product is: %d",product);
        break;
    }
    case 4:
    {
        int a,b,divide;
        printf("Enter the value of a: ");
        scanf("%d",&a);
        printf("Enter the value of b: ");
        scanf("%d",&b);
        divide=a/b;
        printf("Division is: %d",divide);
        break;
    }
    case 5:
    {
        int a,b,mod;
        printf("Enter the value of a: ");
        scanf("%d",&a);
        printf("Enter the value of b: ");
        scanf("%d",&b);
        mod=a%b;
        printf("Modulus is: %d",mod);
        break;
    }
    default:
        break;
    }
    return 0;
}