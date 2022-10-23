#include "stdio.h"
void sum_of_digits(int n)
{
int m,sum=0;
while(n>0)
{

m=n%10;
sum=sum+m;
n=n/10;
}
printf("the sum of number is : %d",sum);
}
int main()
{
sum_of_digits(154);
}
