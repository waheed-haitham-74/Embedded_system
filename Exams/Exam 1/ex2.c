#include "stdio.h"
float square_root(float num)
{

float sqrt = num / 2;
    float temp = 0;


    while (sqrt != temp)
    {
        temp = sqrt;

        sqrt = ( num / temp + temp) / 2;
    }
    return sqrt ;
}
int main()
{
    float x,num;
    printf("enter the number : ");
    scanf("%f",&num);

    x=square_root(num);
    printf("the square of number %.2f is : %.2f",num,x);
    return 0;

}
