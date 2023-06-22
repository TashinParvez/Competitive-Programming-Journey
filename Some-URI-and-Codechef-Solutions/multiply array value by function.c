#include<stdio.h>
int multiplyValueFunction(int arr[],int n)
{
    for(int i=0; i<n ; i++)
    {
        arr[i]=arr[i]*2;
    }
}

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    multiplyValueFunction(arr,n);


    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }


    return 0;
}
