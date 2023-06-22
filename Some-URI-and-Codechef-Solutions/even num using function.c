#include<stdio.h>
int evenFunction(int arr[],int n)
{

    for(int i=0; i<n ; i++)
    {

        if(arr[i]%2!=0)
        {
            arr[i]=-1;
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

    evenFunction(arr,n);

    for(int i=0; i<n ; i++)
    {
        if(arr[i]<0)
            continue;
        printf("%d ",arr[i]);
    }


    return 0;
}
