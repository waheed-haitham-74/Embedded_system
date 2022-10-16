#include <stdio.h>
#include <stdlib.h>

int main()
{
   float f_number,s_number,mul;
   printf("enter the first number: ");
fflush(stdin);fflush(stdout);
   scanf("%f",&f_number);
   printf("enter the second number: ");
   fflush(stdin);fflush(stdout);

   scanf("%f",&s_number);
   mul=f_number * s_number;
   printf("the multiplication is :%f",mul);
}
