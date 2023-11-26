/*Write a C program to check whether a entered character is uppercase or lowercase alphabet*/
#include<stdio.h>
int main()
{
    char c;
    printf("Enter the char :: ");
    scanf("%c",&c);

    if(c>='a'&&c<='z')
    {
        printf("Enter char is small");
    }
    else
    {
        if(c>='A'&&c<='Z')
        {
            printf("Enter char is Big ");
        }
        else
        {
            printf("Invalid char ");
        }
    }
    return 0;
}