/*Accept two numbers and swap two numbers using
i) Third variable
ii) By performing arithmetic operations.*/
#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter the 2 nos :: ");
    scanf("%d%d",&n1,&n2);

    n3=n1;
    n1=n2;
    n2=n3;

    printf("num1=%d\nnum2=%d",n1,n2);
    return 0;
    /*using arithmatic
     n1 = n1 + n2;
     n2 = n1 - n2;
     n1 = n1 - n2;
    */
}