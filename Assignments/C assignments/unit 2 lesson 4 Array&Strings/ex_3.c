#include "stdio.h"
void main()
{
int trans[10][10]={0};
int new_mat[10][10]={0};
int r=0,c=0;
printf("Enter number of rows : ");
scanf("%d",&r);
printf("Enter number of col : ");
scanf("%d",&c);
for (int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    {
        printf("The number in matrix[%d][%d] : ",i+1,j+1);
        scanf("%d",&trans[i][j]);

    }
    for (int i=0;i<r;i++)
        for(int j=0;j<c;j++)
        {
            new_mat[j][i]=trans[i][j];
        }
        printf("The new matrix is : \n");
    for (int i = 0; i < c; i++)
        for (int j = 0; j < r; j++) {
      printf("%d   ", new_mat[i][j]);
      if (j==r-1 ) {
        printf("\n");
      }
      }

}


