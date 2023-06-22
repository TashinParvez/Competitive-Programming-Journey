#include<stdio.h>
int main()
{

    int r,c;
    scanf("%d%d",&r,&c);
    int arr1[r][c],arr2[r][c],sum[r][c];

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }

    // Addition

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            sum[r][c]= arr1[i][j]+ arr2[i][j];
        }
    }



    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("%d ",sum[r][c]);
        }
        printf("\n");
    }

    return 0;
}

