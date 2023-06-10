#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int arr[10][100] = { 0 };
    int num, i, j;
     scanf("%d", &num);
   
     for (i = 0; i < num; i++)
     {
         for (j = 0; j < num; j++)
         {
             arr[i][0] = 1;
         }
     }

     for (i = num; i > 0; i--)
     {
         for (j = 0; j < num; j++)
         {
             arr[i-1][j+1] = arr[i][j] + arr[i][j+1];
         }
     }

     for (i = 0; i < num; i++)
     {
         for (j = 0; j < num; j++)
         {
             if (arr[i][j] == 0)
             {
                 continue;
             }
             printf("%d ", arr[i][j]);
         }
         printf("\n");
     }
    return 0;
}
