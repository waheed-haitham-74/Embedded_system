#include <stdio.h>
#include <stdlib.h>

int main()
{
char a ;
printf("enter character : ");
scanf("%c",&a);
if ((a>='a'&&a<='z')||(a >= 'A' && a <= 'Z'))
{
    printf("%c is an alphabet",a);
}
else
{
    printf("%c is a symbol",a);
}

}
