//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include <stdio.h>

int main()
{
    int cp,sp,profit,loss;
    printf("Enter the cost price and the selling price: ");
    scanf("%d %d", &cp, &sp);
    if(cp > sp)
    {
        loss=((cp-sp*100))/cp;
        printf("the loss is %d",loss);
    }
    else
    {
        profit=((sp-cp)*100)/cp;
        printf("the profit is %d",profit);
    }
    return 0;
}