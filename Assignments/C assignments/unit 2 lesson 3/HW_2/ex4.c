#include <stdio.h>
#include <stdlib.h>

int main()
{

int x ;
printf("Enter a number: ");
scanf("%d",&x);
if (x < 0)
{
    printf("The number is negative.");

}

else if(x>0){
    printf("the number is positive");
}
else
    printf("the number is zero");
}
