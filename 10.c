/*3. Write a program, which accepts annual basic salary of an employee and 
calculates and displays the Income tax as per the following rules.
Basic:<150000 Tax = 0
150000 to 300000 Tax = 20%
> 300000 Tax = 30% */
#include<stdio.h>
int main()
{
    double as,t,bs;

    printf("Enter the annual Salary:: ");
    scanf("%lf",&as);

    if(as<150000)
    {
        t=0.00*as;
        bs=as-t;
        printf("Basic Salary = %0.2lf",bs);
    }
    else
    {
        if(as>=150000 || as<300000)
        {
            t=as*0.20;
            bs=as-t;
            printf("Basic Salary = %0.2lf",bs);
        }
        else
        {
            if(as>=300000)
            {
                t=as*0.30;
                bs=as-t;
                printf("Basic Salary = %0.2lf",bs);
            }
        }
    }

return 0;
}