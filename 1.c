//Accept the radius from user and compute the area and circumference of a circle.
#include<stdio.h>
// #include<math.h>
int main()
{
   double r,a,c, p=3.14 ;
   printf("Enter the radius :: ");
   scanf("%lf",&r);
   a=p*r*r;
   c=2*p*r;
   printf("Area=%0.2lf\nCircumference=%0.2lf",a,c);

   return 0;
     
}