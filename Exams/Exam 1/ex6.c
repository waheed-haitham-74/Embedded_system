#include "stdio.h"

void unique_number(int arr[],int size)
{
    int i,j,freq[size];
for(i=0; i<size; i++)
    {
      int count = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }

        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }

    printf("\nUnique elements in the array are: ");
    for(i=0; i<size; i++)
    {
        if(freq[i] == 1)
        {
            printf("%d ", arr[i]);
        }
    }
}
void main ()
{
int arr[20]={3,2,3,4,2,5,6,1,1};
unique_number(arr,20);
}
