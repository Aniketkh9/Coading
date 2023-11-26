/*3. Accept two numbers in variables x and y from the user and perform the following operations
1.Equality Check if x is equal to y
2.Less Than Check if x is less than y
3.Quotient and Remainder Divide x by y and display the quotient and remainder
4.Range : Accept a number and check if it lies between x and y (both inclusive)
5.Swap : Interchange x and y*/
#include<stdio.h>
int main()
{
    int x,y,ch,n1,z;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Enter the value of y : ");
    scanf("%d",&y);

    printf("Select \n");
    printf("1.Equality 2.Less than 3.Qutient n Remainder 4.Range 5.Swap : ");
    scanf("%d",&ch);

    switch (ch)
    {
        case 1:
        if(x==y)
        printf("Equal");
        else
        printf("Not Equal");
        break;

        case 2:
        if(x<y)
        printf("x is less than y");
        else
        printf("x is greater than y");
        break;

        case 3:
        if(y!=0)
        {
           printf("Quotient = %d",x/y);
           printf("\nRemainder = %d",x%y);
        }
        else
        {
            printf("Invalid digit");
        }

        case 4:
        printf("Enter a no :");
        scanf("%d",&n1);
        printf("Range check");
        if(n1>=x && n1<=y)
        {
            printf("No is in range");
        }
        else
        {
            printf("No is not in range");
        }

        case 5:
        z=y;
        y=x;
        x=z;
        printf("After Swap = %d :: %d ",x,y);

        default:
        printf("Invalid");

    }
 return 0;
}