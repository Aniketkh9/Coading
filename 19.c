/*2. Write a program, which accepts two integers and an operator as a character 
(+ - * / ), performs the corresponding operation and displays the result.*/
#include<stdio.h>
int main()
{
    int n1,n2;
    char operator;
    
    printf("Enter the n1 : ");
    scanf("%d",&n1);
    printf("Enter the n2 : ");
    scanf("%d",&n2);
    printf("Enter the operator(+,-,*,/) : ");
    scanf(" %c",&operator);

    switch(operator)
    {
        case '+':
        printf("Addition = %d",n1+n2);
        break;

        case '-':
        printf("Substractuin = %d",n1-n2);
        break;

        case '*':
        printf("Multuplication = %d",n1*n2);
        break;

        case '/':
        if(n2 != 0)
        printf("Division = %0.2f",(float)n1/n2);
        else
        printf("n2 should be greater than 0");
        break;

        default:
        printf("Invalid");

    }
    return 0;

}