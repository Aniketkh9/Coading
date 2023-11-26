/*8. Write a program to accept 3 numbers and compute minimum and maximum from them.*/
#include<stdio.h>
int main()
{
    int n1,n2,n3;
    
    printf("Enter the 3 nos : ");
    scanf("%d%d%d",&n1,&n2,&n3);

    if(n1>n2 && n1>n3)
    {
        printf("n1 is max");
    }
    else
    {
        if(n2>n3)
        {
            printf("n2 is max");
        }
        else
        {
            printf("n3 is max");
        }
    }
    printf("\n");
    
    
    if(n1<n2 && n1<n3)
    {
        printf("n1 is min");
    }
    else
    {
        if(n2<n3)
        {
            printf("n2 is min");
        }
        else
        {
            printf("n3 is min");
        }
    }
    return 0;

}