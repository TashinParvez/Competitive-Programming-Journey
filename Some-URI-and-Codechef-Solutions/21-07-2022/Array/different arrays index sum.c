#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr1[i]);
    }

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr2[i]);
    }

    // doing sum

    for(int i=0; i<n; i++)
    {
        arr1[i]=arr1[i]+arr2[i];
    }

    // printing sum of index

    for(int i=0; i<n; i++)
    {
        printf("%d ",arr1[i]);
    }

    return 0;
}
