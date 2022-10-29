int main(void)
{
    char sentence[100];
    printf("Enter any string: ");

    scanf("%s", sentence);

    char *sPtr;
    sPtr = sentence;
    int length = 0;

    printf("Original string = %s\n", sentence);

    while (*sPtr != '\0') {
        ++length;
        ++sPtr;
    }

    printf("Reverse string = ");
    for (int i = length; i >= 0; --i)
     {
    printf("%c", *(sPtr));
    --sPtr;
}

    return 0;
}
