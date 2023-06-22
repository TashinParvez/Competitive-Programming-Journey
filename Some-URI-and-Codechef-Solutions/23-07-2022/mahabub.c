#include<stdio.h>
int main()
{
    int i, n;
    scanf("%d",&n);

    int a[n];

    printf("A:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    int m;
    scanf("%d",&m);
    int b[m], c[100];

    printf("B:");
    for(i=0; i<m; i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=0; i<n; i++)
    {
        c[i]=a[i];
        a[i]=b[i];
        b[i]=c[i];
    }


    printf("Array A:");
    for(i=0; i<m; i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n");

    printf("Array B:");
    for(i=0; i<n; i++)
    {
        printf("%d ",b[i]);
    }


    return 0;
}
