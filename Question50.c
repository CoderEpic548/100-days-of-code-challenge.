//Q50: Write a program to print the following pattern:
/*
*****
 ****
  ***
   **
    *

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/

#include <stdio.h>

int main()
{
    int space,i,j;
    for(i=6;i>0;i--)
    {
        for(space=6-i;space>0;space--)
        {
            printf(" ");
        }
        for(j=1;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}