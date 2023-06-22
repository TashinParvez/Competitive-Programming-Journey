#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+1];

    printf("Input 10 elements in array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int k;
    printf("Input number of times to rotate: ");
    scanf("%d",&k);

    for(int p=1; p<=k; p++)
    {

        for(int i=n; i>=1; i--)
        {
            arr[i]=arr[i-1];

        }
        arr[0]=arr[n];
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
