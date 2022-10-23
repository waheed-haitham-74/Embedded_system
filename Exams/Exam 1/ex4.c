#include "stdio.h"
void reverse(int n)
{
    int rem=0,reverse=0;
 while (n != 0) {
    rem = n % 10;
    reverse = reverse * 10 + rem;
    n /= 10;
  }
      printf("%d",reverse);

}
void main()
{
    reverse(1234734);
}
