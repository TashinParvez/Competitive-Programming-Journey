#include<stdio.h>
int main()
{
    int m,n,i;
    scanf("%d",&m);
    int a[100];  // m
    int b[100];  // n
    int c[100];  //

    for(int i=0; i<m; i++)   // taking a's input
    {
        scanf("%d",&a[i]);
    }

    scanf("%d",&n);
    for(int i=0; i<n; i++)   // taking b's input
    {
        scanf("%d",&b[i]);
    }

    for(i=0; i<100; i++)

    {
        c[i]=a[i];    // putting a's input to c
        a[i]=b[i];    // putting b's input to a
        b[i]=c[i];    // putting b's input to a
    }

    printf("Array A:");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n");

    printf("Array B:");

    for(i=0; i<m; i++)
    {
        printf(" %d",b[i]);
    }


    return 0;
}
