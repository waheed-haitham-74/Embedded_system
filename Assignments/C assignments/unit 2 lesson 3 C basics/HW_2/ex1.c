#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("enter a number to check : ");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("number %d is even ",a);

    }
    else
    {
        printf("number %d is odd",a);
    }
}
