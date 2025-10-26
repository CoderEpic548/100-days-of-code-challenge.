//Q53: Write a program to print the following pattern:
/*

*
***
*****
*******
*********
*******
*****
***
*

/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/

#include <stdio.h>

int main()
{
    int i,j,k,l;
    for(i=0;i<9;i+=2)
    {
        for(j=0;j<=i;j++)
        {
            printf("*",j);
        }
        printf("\n");
    }
    for(k=6;k>=0;k-=2)
    {
        for(l=k;l>=0;l--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}