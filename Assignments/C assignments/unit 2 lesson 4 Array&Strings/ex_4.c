#include "stdio.h"

void main()
{
    int number[10]={0};
    int n=0;
    int num=0;
    int loc=0;
    printf("write number of numbers you want : " );
    fflush(stdin);fflush(stdout);
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter a number in a%d : ",i+1);
        scanf("%d",&number[i]);
    }
    printf("enter number to be inserted .");
    scanf("%d",&num);
    printf("enter location");
    scanf("%d",&loc);
    for(int i=0;i<n;i++)
    {
        if (i==loc)
        {
            number[i-1]=num;
        }

    }
    printf("the matrix is \n");
    for(int i=0;i<n;i++)
    {
        printf("%d",number[i]);
    }
}
