#include<stdio.h>
void inputMatrix(int n,int m,int arr[][m])
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
}

void showMatrix(int n,int m,int arr[][m])
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

void scalarMultiply(int x,int n,int m,int arr[][m])
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            arr[i][j]=arr[i][j]*x;
        }
    }
}
int main()
{
    int arr[3][5];
    inputMatrix(3,5,arr);
    showMatrix(3,5,arr);

    printf("Enter the number you want to multiply your matrix : ");
    int x;
    scanf("%d",&x);

    scalarMultiply(x,3,5,arr);
    showMatrix(3,5,arr);

    return 0;
}
