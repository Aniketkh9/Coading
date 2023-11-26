/*6. Accept dimensions of a cylinder and print the surface area and volume 
(Hint: surface area = 2πr 2 + 2πrh, volume = π r 2 h). 
Define a constant variable pi=3.14.*/
#include <stdio.h>
#define PI 3.14
int main() 
{
    double r,h,sa,v;
    printf("Enter the radius and height of cylinder :: ");
    scanf("%lf%lf",&r,&h);

    sa=2*PI*r*h+2*PI*r*r;
    v=PI*r*r*h;
    printf("Surface Area = %lf\nVolume = %lf",sa,v);
    return 0;
}