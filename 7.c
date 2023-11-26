/*7. Accept temperatures in Fahrenheit (F) and print it in Celsius(C) and Kelvin (K) 
(Hint: C=5/9(F-32), K = C + 273.15)*/
#include<stdio.h>
int main()
{
    float F,C,K;
    
    printf("Enter the Temp in F : ");
    scanf("%d",&F);
    
    C=((F-32)*5)/9;
    K=C+ 273.15;

    printf("Temp in Celcius = %0.2f\nTemp in Kelvin = %0.2f",C,K);
    
    return 0;

}