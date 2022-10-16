#include "stdio.h"

void main()
{
    float number[10]={0};
    float n=0.0;
    float sum=0.0;
    float avg=0;
    printf("write number of numbers you want : " );
    fflush(stdin);fflush(stdout);
    scanf("%f",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter a number : ");
        scanf("%f",&number[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=number[i];

    }
    avg=sum/n;
    printf("the avg is : %.2f",avg);
}
