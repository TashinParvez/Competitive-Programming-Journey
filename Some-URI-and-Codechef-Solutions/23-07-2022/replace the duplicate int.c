#include<stdio.h>
int main()
{

    int n,m;
    scanf("%d%d",&n,&m);
    int arr[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }


    for(int i=0; i<n; i++)  // checking
    {
        for(int j=0; j<m; j++)  // checking
        {
            for(int k=i; k<n; k++)
            {
                for(int l=j+1; l<m; l++)
                {
                    if(arr[i][j]==arr[k][l])
                        arr[k][l]=-1;
                }
            }

        }
    }


    printf("\n\n");

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");

    }

    return 0;
}

