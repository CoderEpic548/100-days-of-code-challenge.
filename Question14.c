//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%s",&ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("The entered character is a vowel.");
    }
    else
    {
        printf("The entered character is not a vowel.");
    }
    return 0;
}