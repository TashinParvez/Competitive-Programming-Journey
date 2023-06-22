#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n,count; // num or women


    for(int i =1; i<=t; i++)
    {
        count=0;
        scanf("%d",&n);
        int arr[n];
        for(int j=0; j<n; j++)
        {
            scanf("%d",&arr[j]);
        }

        for(int j=0; j<n; j++)
        {
            if(arr[j]>=10 && arr[j]<=60)
            {
                count=count+1;
            }

        }
        printf("%d\n",count);
    }


    return 0;
}

