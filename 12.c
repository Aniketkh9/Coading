/*Write a C program to input angles of a triangle and check whether triangle is valid or not.
Hint sum of all angles of Triangle = 180 degree*/
#include<stdio.h>
int main()
{
    int a1,a2,a3;
    
    printf("Enter the 3 angles of triangle : ");
    scanf("%d%d%d",&a1,&a2,&a3);
    
    if(a1>0 && a2>0 && a3>0 && a1+a2+a3 == 180)
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Triangle is not valid");
    }
    return 0;
}