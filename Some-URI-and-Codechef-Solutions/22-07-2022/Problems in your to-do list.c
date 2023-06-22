#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int rem,n;
    for(int i =1; i<=t; i++)
    {

        scanf("%d",&n);
        rem=0;
        int arr[n];
        for(int j = 0; j<n; j++)
        {
            scanf("%d",&arr[j]);
            if(arr[j]>=1000)
                rem=rem+1;
        }

        printf("%d\n",rem);

    }
    return 0;
}

