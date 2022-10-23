#include "stdio.h"
int binary(int n)
{
    int count=0;
    while(n)
    {
        count+=n&1;
        n>>=1;
    }
return count ;
}
void main()
{
    int x=0;
    scanf("%d",&x);
printf("the binary of the number is : %d",binary(x));

}
