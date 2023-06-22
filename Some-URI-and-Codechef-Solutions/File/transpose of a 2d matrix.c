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

    for(int j=0; j<n; j++)
    {
        for(int i=0; i<n; i++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
