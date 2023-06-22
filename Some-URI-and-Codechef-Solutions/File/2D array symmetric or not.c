#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int check=0;
    int j;
    for(int i=0,j=0; i<n,j<n; i++,j++)
    {
        for(int k=0; k<n; k++)
        {
            if(arr[i][k]!=arr[k][j])
            {
                check=1;
                exit(1);
            }
        }
    }


    if(check==1)
        printf("NOT SYMMETRIC\n");
    else
        printf("SYMMETRIC\n");

    return 0;
}

