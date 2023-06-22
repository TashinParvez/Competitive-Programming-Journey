#include<stdio.h>
void    reverse(int n,int arr[][n])
{
    int temp, total=n;
    for(int i=0; i<total; i++)
    {
        n=total;
        for(int j=0; j<total/2; j++)
        {
            temp =arr[i][j];
            arr[i][j] = arr[i][n-1];
            arr[i][n=n-1] =temp;
        }
    }
}
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

    reverse(n,arr);


    // print
            printf("\n printing \n");

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
