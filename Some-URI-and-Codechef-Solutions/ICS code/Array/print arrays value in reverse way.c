#include<stdio.h>
#define n 10
int main()
{
    int array[n]= {12,123,342,3225,534,435,345,43,3453,3};

    for(int i=0; i<n; i++)
    {
        printf("%d ",array[i]);
    }

    printf("\n");

    for(int i=n-1; i>=0; i--)
    {
        printf("%d ",array[i]);
    }

    return 0;
}
