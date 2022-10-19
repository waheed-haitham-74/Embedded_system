#include "stdio.h"
void reverse();
void main()
{
    char ch[20];
printf("enter sentance : ");

reverse();
}
void reverse()
{
    char c;
scanf("%c",&c);
    if (c!='\n')
    {
        reverse();
        printf("%c",c);
    }
}
