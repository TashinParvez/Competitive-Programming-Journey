#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n+1];

    for (int i=0; i<n ; i++ )
    {
        scanf("%d",&arr[i]);
    }

    int b,a;
    printf("Element & insert place ");
    scanf("%d%d",&a,&b);

    for (int i=n-1; i>=b-1; i--)
    {
        arr[i+1]=arr[i];
    }

    arr[b-1]=a;
        printf("Result \n");

    for(int i=0; i<n+1; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}

