#include <stdio.h>
#include <stdlib.h>

int main()
{
float a,b,c;
printf("enter the first number");
fflush(stdin);fflush(stdout);
scanf("%f",&a);
printf("enter the second number");
fflush(stdin);fflush(stdout);
scanf("%f",&b);
printf("enter the third number");
fflush(stdin);fflush(stdout);
scanf("%f",&c);
if (a>b)
    {if(a>c)
{
    printf("the greatest is : %f",a);
}
else
    {
    printf("the greatest is : %f",c);
}
    }
else if (b>c)
{
printf("the greatest is : %f",b);
}
else
{
    printf("the greatest is : %f",c);
}
}
