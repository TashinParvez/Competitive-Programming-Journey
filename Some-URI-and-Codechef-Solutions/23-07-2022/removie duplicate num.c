#include<stdio.h>
int main()
{
    int n,count;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    count =0;

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                count+=1;
                for(int k = j; k<n; k++ )
                {
                    arr[k]=arr[k+1];
                }
            }
        }
    }

    for(int i=0; i < n-count; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
