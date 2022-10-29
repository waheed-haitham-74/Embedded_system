#include "stdio.h"
void main()
{
char alph[27];
char *ptr;
ptr=alph;
for (int i=0;i<26;i++)
{
    *ptr=i+'A';
    ptr++;
}
ptr=alph;

for(int i=0;i<26;i++)
{
    printf(" %c ",*ptr);
    ptr++;
}

}
