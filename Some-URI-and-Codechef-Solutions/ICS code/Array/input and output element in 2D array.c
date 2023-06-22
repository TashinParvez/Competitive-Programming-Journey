#include<stdio.h>
int main()
{
    int array2D[4][5];

    for(int i=0; i<4; i++)
    {
        int j=0;
              scanf("%d",&array2D[i][j]);
              j=j+1;
                scanf("%d",&array2D[i][j]);
                j=j+1;
                  scanf("%d",&array2D[i][j]);
                  j=j+1;
                    scanf("%d",&array2D[i][j]);
                    j=j+1;
                      scanf("%d",&array2D[i][j]);
    }

    for(int i=0; i<4; i++)
    {
        int j=0;
              printf("%d ",array2D[i][j]);
              j=j+1;
                printf("%d ",array2D[i][j]);
                j=j+1;
                  printf("%d ",array2D[i][j]);
                  j=j+1;
                    printf("%d ",array2D[i][j]);
                    j=j+1;
                      printf("%d",array2D[i][j]);
                      printf("\n");
    }

    return 0;
}
