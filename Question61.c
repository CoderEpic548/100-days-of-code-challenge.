//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements you want in the array: ");
    scanf("%d", &n);
    int i;
    int arr[n];
    printf("Enter the elements in the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int find;
    printf("Enter the number to find: ");
    scanf("%d",&find);
    for(i=0;i<n;i++)
    {
        if(arr[i]==find)
        {
            printf("Found at index %d",i);
        }
        else
        {
            continue;
        }
    }
    return 0;
}