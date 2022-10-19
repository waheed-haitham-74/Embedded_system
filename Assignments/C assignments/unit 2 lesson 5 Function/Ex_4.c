#include "stdio.h"
int power(int base , int exp);
void main()
{
int base ,exp =0;
printf("base: ");
scanf("%d",&base);

printf("exp: ");
scanf("%d",&exp);
printf("the power is : %d",power(base,exp));

}
int power(int base,int exp)
{
    if (exp!=1)
        return(base*power(base,exp-1));
}
