#include "stdio.h"
void main()
{
    int* ptx;
    int x;
    x=5;
    printf("%p\n",&x);
    printf("%d\n",x);
    ptx=&x;
    printf("\n\n%p\n",ptx);
    printf("\n%d\n",*ptx);
    x=10;
    printf("\n\n%p\n",ptx);
    printf("\n%d\n",*ptx);
    *ptx=15;
    printf("\n\n%p\n",&x);
    printf("\n%d\n",x);



}
