#include "stdio.h"

void main()
{
    int number[10]={0};
    int n=0;
    int num=0;
    printf("write number of numbers you want : " );
    fflush(stdin);fflush(stdout);
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter a number in a%d : ",i+1);
        scanf("%d",&number[i]);
    }
    printf("enter number to be searched .");
    scanf("%d",&num);

    for(int i=0;i<n;i++)
    {
        if (number[i]==num)
        {
            printf("the number found at location %d",i+1);
            break;
        }

    }

}
