#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int nn;
    scanf("%d",&nn);

    int arr2[nn];
    for(int i=0; i<nn; i++)
    {
        scanf("%d",&arr2[i]);
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<nn; j++)
        {
            if(arr[i]==arr2[j]){
                count=1;
                printf("%d ",arr[i]);
            }
        }
    }
    if(count==0)
        printf("Empty Set");

    return 0;
}
