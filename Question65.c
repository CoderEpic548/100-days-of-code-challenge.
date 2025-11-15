//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements you want in the array: ");
    scanf("%d",&n);
    int i;
    int arr[n];
    printf("Enter the elements in the array in ascending order for using binary search technique.");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int find;
    int mid;
    printf("Enter the number to find");
    scanf("%d",&find);
    int low=0;
    int high=n-1;
    while (low <= high) 
    {
        mid = (low + high) / 2;
        if (arr[mid] == find) 
        {
            printf("Found at index %d\n", mid);
            break;
        }
        else if (arr[mid] < find) 
        {
            low = mid + 1;
        } 
        else 
        {
            high = mid - 1;
        }
    }
    printf("-1\n");
    return 0;
}