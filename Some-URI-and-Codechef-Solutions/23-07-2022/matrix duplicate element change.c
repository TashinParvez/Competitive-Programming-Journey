#include<stdio.h>
int main()
{

    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }


    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            for(int k=i; k<c; k++)
            {
                for(int l=j+1; l<c; l++)
                {
                    if(arr[i][j] == arr[k][l])
                        arr[k][l]=-1;

                }
            }
        }
    }





    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }



    return 0;
}
