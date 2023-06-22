#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int j=1; j<=t; j++)
    {
        int n;
        scanf("%d",&n);

        int arr[n];
        int count=1;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
            count=count*arr[i];
        }

        if(count<0)
            printf("1\n");
        else
            printf("0\n");
    }

    return 0;
}

