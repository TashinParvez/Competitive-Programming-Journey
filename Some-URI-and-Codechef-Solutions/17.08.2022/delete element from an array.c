#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];

    for (int i=0; i<n ; i++ )
    {
        scanf("%d",&arr[i]);
    }

    int a;
    printf("Input position to delete ");
    scanf("%d",&a);

    for (int i=a-1; i<n; i++)
    {
        arr[i]=arr[i+1];
    }

    printf("Result : ");
    for (int i=0; i<n-1; i++)
    {
        printf("%d ",arr[i]);
    }



    return 0;
}
