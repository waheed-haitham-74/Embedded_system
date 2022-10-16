#include "stdio.h"

void main()
{
    float  mat_1[1][1];
    float mat_2[1][1];
    float sum[2][2];

    for (int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("Enter the number for mat_1[%d][%d] ",i+1,j+1);
            scanf("%f",&mat_1[i][j]);

        }
    }

    for (int r=0;r<2;r++)
    {
        for(int c=0;c<2;c++)
        {
            printf("Enter the number for mat_2[%d][%d] ",r+1,c+1);
            scanf("%f",&mat_2[r][c]);
        }
    }
  for (int i = 0; i < 2; i++)
    for (int j = 0; j < 2; j++) {
      sum[i][j] = mat_1[i][j] + mat_2[i][j];
    }

    printf("The sum of two matrices : \n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++) {
      printf("%.2f  ", sum[i][j]);
      if (j == 1) {
        printf("\n");
      }
      }

}
