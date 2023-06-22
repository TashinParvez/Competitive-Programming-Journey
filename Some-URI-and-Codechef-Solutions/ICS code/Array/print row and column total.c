#include<stdio.h>
int main()
{
    int arr[5][5];
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    int totalofRow=0;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            totalofRow=totalofRow+arr[i][j];
        }
        printf("%d ",totalofRow);
        totalofRow =0;
    }


    printf("\n");


    int totalofCol=0;
    for(int j=0; j<5; j++)
    {
        for(int i=0; i<5; i++)
        {
            totalofCol=totalofCol+arr[i][j];
        }
        printf("%d ",totalofCol);
        totalofCol =0;
    }


    return 0;
}
