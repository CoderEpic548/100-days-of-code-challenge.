//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include <stdio.h>

int main()
{
    int sec;
    printf("Enter The time in seconds");
    scanf("%d", &sec);
    int hour=sec/3600;
    sec=sec%3600;
    int min=sec/60;
    int secs=sec%60;
    printf("the time is %d hours %d minutes and %d seconds.",hour,min,secs);
    return 0;
}