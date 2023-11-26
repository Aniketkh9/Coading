/*4. Accept the basic salary of an employee and compute the net salary after adding earnings and subtracting deductions.
PF is 2 % of basic
Tax is 3 % of basic
HRA is 5 % basic
DA is 8 % of basic*/

#include<stdio.h>
int main()
{
    double sal ,pf,tax,hra,da,total;
    printf("Enter the Salary :: ");
    scanf("%lf",&sal);

    pf= sal*0.02;
    tax= sal*0.03;
    hra= sal*0.05;
    da= sal*0.08;

    total = sal+hra+da-(pf+tax);
    printf("toal = %0.2lf",total);
    return 0;
}