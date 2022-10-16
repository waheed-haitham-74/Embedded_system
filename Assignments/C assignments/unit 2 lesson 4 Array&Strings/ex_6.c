#include "stdio.h"
#include "string.h"
void main()
{
    char name[20];
    printf("enter string : ");
    gets(name);
    int x =strlen(name);
    printf("%d",x);

}
