#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f_number,s_number,sum;
     printf("enter the first number :");
     fflush(stdin);fflush(stdout);
     scanf("%d",&f_number);

     printf("enter the second number :");
     fflush(stdin);fflush(stdout);
    scanf("%d",&s_number);

    sum=f_number+s_number;
    printf("the sum is :%d",sum);

}
