#include "stdio.h"
#include "string.h"
void main()
{
char name[20];
printf("enter a string : ");
gets(name);
int x=strlen(name);
printf("the name after reverse : ");
for (int i=x;i>=0;i--)
{
    printf("%c",name[i]);
}



}
