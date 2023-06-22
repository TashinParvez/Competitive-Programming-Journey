#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int arrA[n];
    int arrB[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arrA[i]);
    }

    int p=n-1;
    for(int i=0; i<n; i++)
    {
        arrB[i]=arrA[p];
        p--;
    }

    printf("Array A : ");
    for(int i=0; i<n; i++)
    {

        printf("%d ",arrA[i]);
    }

    printf("\nArray B : ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",arrB[i]);
    }






    return 0;
}
