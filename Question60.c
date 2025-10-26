//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int i;
    int arr[n];
    printf("Enter the elements in the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int positive=0,negative=0,zero=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            positive++;
        }
        else if (arr[i]<0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }
    printf("Number of positive number are: %d\n",positive);
    printf("Number of negative numbers are: %d\n",negative);
    printf("Number of zero are: %d",zero);
    return 0;
}