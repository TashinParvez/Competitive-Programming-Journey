#include<stdio.h>
int ascendingFunction(int arr[],int n)
{
    for(int i=0; i<n ; i++)
    {
        for(int j=i+1; j<n ; j++)
        {
            int temp=arr[i];
            if(arr[j]<=temp)
            {
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }
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

    ascendingFunction(arr,n);


    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }


    return 0;
}
