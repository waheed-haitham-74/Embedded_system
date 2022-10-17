#include <stdio.h>
#include <stdlib.h>

int main()
{
int fact=1,n;
printf("enter a number : ");
scanf("%d",&n);
if (n>0)
{


for(int i=1;i<=n;i++)
{
    fact*=i;
}
printf("the fact is : %d",fact);
}
else if(n==0)
{
    printf("the fact is 1 ");
}
else
{
    printf("error doesnt exist");
}
}
