int main(void)
{
    int size;
    int arr[15];
    int *ptr;
    printf("Enter size of  array : ");
    scanf("%d", &size);
    ptr=&arr[0];
    for (int i=0 ; i<size;i++)
    {
        printf("enter the element %d : ",i+1);
        scanf("%d",ptr);
        ptr++;
    }
   ptr=&arr[size-1];

    printf(" after reverse \n");
    for (int i = size; i > 0; --i)
     {
    printf(" the element %d is %d \n", i ,*ptr);
    --ptr;
}

    return 0;
}
