/*. Write a program to accept an integer and check if it is even or odd.*/
#include<stdio.h>
int main()
{
  int n;
  
  printf("Enter the no :");
  scanf("%d",&n);

  if(n%2==0)
  {
    printf("Even no");
  }
  else
  {
    printf("Odd no");
  }
  return 0;

}