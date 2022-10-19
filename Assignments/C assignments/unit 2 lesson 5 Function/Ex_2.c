#include "stdio.h"
int fact(int n);

void main()
{
    int n,result;
    puts("THE number is :");
scanf("%d",&n);
result=fact(n);
printf("%d",result);
}
int fact(int n)
{
        if (n!=1)
        return n*fact(n-1);

}
