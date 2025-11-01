//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/

#include <stdio.h>

int main()
{
    int n1,n2;
    printf("Enter the number of elements for the first array: ");
    scanf("%d",&n1);
    printf("Enter the number of elements for the second array: ");
    scanf("%d",&n2);
    int i,j;
    int arr1[n1];
    int arr2[n2];
    printf("Enter the elements in the array 1: ");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the elements in the array 2: ");
    for(j=0;j<n2;j++)
    {
        scanf("%d",&arr2[j]);
    }
    printf("Merged array: ");
    for(i=0;i<n1;i++)
    {
        printf("%d ",arr1[i]);
    }
    for(j=0;j<n2;j++)
    {
        printf("%d ",arr2[j]);
    }
    return 0;
}