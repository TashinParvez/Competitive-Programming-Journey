#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];

    for (int i=0; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
int count;
    for (int i=0; i<n ; i++)
    {
        count=0;
        for (int j=i+1; j<n ; j++)
        {
            if(arr[i]==arr[j])
            {
                arr[j]=0;
                count=1;
            }
        }
        if(count==1)
            arr[i]=0;
    }

    printf("Result : ");

    for(int i=0; i<n ; i++)
    {
        if(arr[i]!=0)
            printf("%d ",arr[i]);
    }

    return 0;
}

