/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

#include <stdio.h>

int main()
{
    int l,b;
    printf("Enter The lenght of rectangle: ");
    scanf("%d", &l);
    printf("Enter The breadth of rectangle: ");
    scanf("%d",&b);
    int perimeter=2*(l+b);
    int area=l*b;
    printf("The perimeter of rectangle is %d and area is %d.",perimeter,area);
    return 0;
}