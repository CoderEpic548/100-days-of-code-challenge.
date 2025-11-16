//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements you want in the array: ");
    scanf("%d",&n);
    int i;
    int arr[n+1];
    printf("Enter the elements in the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int insert;
    printf("Enter the number to insert: ");
    scanf("%d",&insert);
    int pos=0;
    for(i=n;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=insert;
    for(i=0;i<=n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}