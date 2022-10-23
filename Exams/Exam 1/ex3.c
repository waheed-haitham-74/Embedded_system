#include "stdio.h"
void print_all_odd(int n,int m)
{
    for (int i=n;i<=m;i++)
    {
        int f=0;
        for(int j=2;j<i;j++)
        {
            if (i%j==0)
           {

            f=1;
            break;
           }
        }
        if(f==0)
            printf("%d\n",i);
    }
}
void main()
{
print_all_odd(11,29);
}
