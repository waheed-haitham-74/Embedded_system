#include <stdio.h>
void reverse(int array[],int n)
{
int i, temp;
   int end = n - 1;


    for (i = 0; i < n/2; i++) {
        temp = array[i];
        array[i] = array[end];
        array[end] = temp;
        end--;
    }

    printf("Reversed array elements are:\n");

    for (i = 0; i < n; i++) {
        printf(" %d ", array[i]);
    }
}
int main()
{
    int array[10]={1,2,3,4,6,7,8,9,0,11};
    reverse(array,10);




    return 0;
}
