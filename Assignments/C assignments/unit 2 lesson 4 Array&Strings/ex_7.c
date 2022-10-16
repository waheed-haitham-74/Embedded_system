#include "stdio.h"
#include "string.h"
void main()
{
char name[40];
char c;
int freq=0;
printf("enter a string : ");
gets(name);
printf("enter a character : ");
scanf("%c",&c);
for(int i=0;i<40;i++)
{
    if(name[i]==c)
    {
     freq++;
     continue   ;
    }
}
printf("frequency of %c = %d",c,freq);

}
