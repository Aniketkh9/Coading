/*Write a C program to accept a character and invert the case of it.*/
#include<stdio.h>
int main()
{
    char c;
    printf("Enter the char :: ");
    scanf("%c",&c);

    if(c>='a'&& c<='z')
    {
        printf("%c",c-'a'+'A');
    }
    else
    {
        if(c>='A'&& c<='Z')
        {
            printf("%c",c-'A'+'a');
        }
    }
    return 0;
}