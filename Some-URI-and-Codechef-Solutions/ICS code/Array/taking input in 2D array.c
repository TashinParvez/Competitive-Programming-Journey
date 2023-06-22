#include<stdio.h>
int main()
{
    int array2D[4][5];

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<5; j++)
        {
            scanf("%d",&array2D[i][j]);
        }
    }

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<5; j++)
        {
            printf("%d ",array2D[i][j]);
        }
        printf("\n");


    }

    return 0;
}
