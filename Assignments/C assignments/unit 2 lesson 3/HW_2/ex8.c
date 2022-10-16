#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f_num,s_num;
    float result;
    char symbol;
    printf("enter first num : ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&f_num);
    printf("enter second num : ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&s_num);
    printf("enter a symbol : ");
    fflush(stdin);fflush(stdout);

    scanf("%c",&symbol);

    switch(symbol)
    {
    case '+':
        result=f_num+s_num;
        printf("the result is : %f",result);
        break;
    case '-':
        result=f_num-s_num;
        printf("the result is : %f",result);
        break;
    case '*':
        result=f_num*s_num;
        printf("the result is : %f",result);
        break;
    case '/':
        result=f_num/s_num;
        printf("the result is : %f",result);
        break;
        default:
        printf("enter a symbol ..");
        break;
    }
}
