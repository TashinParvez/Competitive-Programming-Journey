#include<stdio.h>
int main()
{
    int r;
    scanf("%d",&r);

    int arr[r];

    for(int i=0; i<r; i++)
    {
        scanf("%d",&arr[i]);
    }

    arr[5]=5;


    for(int i=0; i<r; i++)
    {
        printf("%d %d\n",i,arr[i]);
    }

    printf("\n %d \n",arr[5]);
    return 0;
}
