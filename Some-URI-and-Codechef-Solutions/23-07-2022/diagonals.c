#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d",&r);
    c=r;

    int arr[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }




    int j;
    for(int i=0; i<r; i++)
    {
        j=i;

        printf("%d ",arr[i][j]);

    }

    printf("\n");


/*
    for(int i=r; i<r; i--)
    {
        j=i;

        printf("%d ",arr[i][j]);

    }
    */




getch();

}
