#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];

    int max, maxIndex;
    int min, minIndex;

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);

        max=arr[i];
        maxIndex=i;

        min=arr[i];
        minIndex=i;
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i]>=max)
        {
            max=arr[i];
            maxIndex=i;
        }

        if(arr[i]<=min)
        {
            min=arr[i];
            minIndex=i;
        }

    }

    printf("Max:%d, Index:%d\n",max,maxIndex);
    printf("Min:%d, Index:%d\n",min,minIndex);


    return 0;
}
