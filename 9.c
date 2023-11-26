/*2. Write a program to accept a number and check if it is divisible by 5 and 7.*/
#include<stdio.h>
int main()
{
    int n;

    printf("Enter the no");
    scanf("%d",&n);

    if(n%5==0 && n%7==0)
    {
        printf("No divisible by 5 n 7");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}