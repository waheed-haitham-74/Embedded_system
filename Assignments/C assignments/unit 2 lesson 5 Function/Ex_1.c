#include "stdio.h"
void interval(int start , int end);
int prime(int);

void main()
{

int x,y=0;
int result=0;
printf("enter start of the interval : ");
scanf("%d",&x);
printf("enter end of the interval : ");
scanf("%d",&y);
 interval(x,y);


}
int prime(int n)
{
    int flag=0;
   for (int i=2;i<(n/2);i++)
   {
       if (n%i==0)
       {
        flag=1;
       break;
       }
   }
   return flag;
}

void interval(int start , int end)
{

for (int i=start+1;i<end;++i)
{
    int flag=prime(i);
    if (flag==0)
{
    printf("  %d  ",i);
}
}


}
