/*4. Accept a lowercase character from the user and check whether the character is a vowel or consonant. 
(Hint: a, e, i, o, u are vowels)*/
#include<stdio.h>
int main()
{
    char c;
    printf("Enter a lower case char : ");
    scanf("%c",&c);

    if(c>='a' && c<='z')
    {
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        {
            printf("Vowels");
        }
        else
        {
            printf("Consonent");
        }
    }
    else
    {
        printf("Invalid character");
    }
    return 0;
}