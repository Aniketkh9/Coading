//Accept marks of 5 subjects (out of 100) of a student and display total marks and compute the percentage also.
#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5;
    int i;
    double tm,p;

    printf("E T M m1 ");
    scanf("%d",&m1);
    printf("\nE T M m2 ");
    scanf("%d",&m2);
    printf("\nE T M m3 ");
    scanf("%d",&m3);
    printf("\nE T M m4 ");
    scanf("%d",&m4);
    printf("\nE T M m5 ");
    scanf("%d",&m5);

    if(m1>=0 && m1<=100 && m2>=0 && m2<=100 && m3>=0 && m3<=100 && m4>=0 && m4<=100 && m5>=0 && m5<=100)
    {
        tm=m1+m2+m3+m4+m5;
        printf("%lf\n",tm);

        p=(tm/500)*100;
        printf("%lf",p);
    }
    else
    {
      printf("Invalid");
    }
    return 0;
}


/*
#include<stdio.h>
int main()
{
    int arr[5];
    int i;
    double tm,p;

    for(i=0;i<5;i++)
    {
        printf("Enter the marks out of 100 = ");
        scanf("%d",&arr[i]);
        
        if(arr[i]<0 || arr[i]>100)//checking out of 100
        {
            printf("Invalid marks should be enter fron 0 to 100");
            return 0;//exit
        }
    }
        tm=arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
        printf("%lf\n",tm);

        p=(tm/500)*100;
        printf("%lf",p);
    
}
*/