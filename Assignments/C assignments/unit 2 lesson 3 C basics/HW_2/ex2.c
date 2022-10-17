#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("enter a character :");
    scanf("%c",&c);
    if (c=='i' ||c=='a' ||c=='e' ||c=='o' ||c=='u')
    {
        printf("the character %c is vowel",c);

    }
    else
        printf("the character %c is consonant",c);
}

